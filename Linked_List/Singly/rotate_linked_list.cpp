#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find the length and the last node
        ListNode* current = head;
        int len = 1;
        while (current->next) {
            len++;
            current = current->next;
        }

        // Step 2: Make it circular
        current->next = head;

        // Step 3: Find the new tail
        k = k % len;
        int stepsToNewTail = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 4: Set new head and break the link
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create linked list from array
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    vector<int> values = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = createList(values);
    cout << "Original List: ";
    printList(head);

    Solution solution;
    ListNode* rotated = solution.rotateRight(head, k);

    cout << "Rotated List: ";
    printList(rotated);

    return 0;
}
