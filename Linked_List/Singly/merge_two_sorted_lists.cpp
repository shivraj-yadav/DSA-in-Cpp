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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if (head1 == nullptr || head2 == nullptr) {
            return head1 == nullptr ? head2 : head1;
        }

        if (head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test mergeTwoLists
int main() {
    Solution solution;

    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    ListNode* l1 = createLinkedList(arr1, 3);
    ListNode* l2 = createLinkedList(arr2, 3);

    cout << "List 1: ";
    printLinkedList(l1);

    cout << "List 2: ";
    printLinkedList(l2);

    ListNode* merged = solution.mergeTwoLists(l1, l2);

    cout << "Merged List: ";
    printLinkedList(merged);

    return 0;
}
