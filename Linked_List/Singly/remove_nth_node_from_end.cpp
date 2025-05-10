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

// Solution class with the core logic
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Dummy node to handle edge cases like deleting the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move first pointer n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        // Move both pointers until first reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Skip the node to delete
        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;  // Free memory

        return dummy->next;
    }
};

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print linked list
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test the code
int main() {
    Solution solution;

    // Test case 1
    int arr[] = {1, 2, 3, 4, 5};
    int n = 2;
    ListNode* head = createLinkedList(arr, 5);

    cout << "Original List: ";
    printLinkedList(head);

    head = solution.removeNthFromEnd(head, n);

    cout << "After Removing " << n << "th Node From End: ";
    printLinkedList(head);

    return 0;
}
