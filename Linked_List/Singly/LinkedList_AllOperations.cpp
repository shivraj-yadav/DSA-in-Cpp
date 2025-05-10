#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class List {
    Node* head;

public:
    List() {
        head = nullptr;
    }

    void push_front(int val) {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }

    void push_back(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = newnode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void insert_at(int pos, int val) {
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node* newnode = new Node(val);
        Node* temp = head;
        for (int i = 0; temp && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (!temp) {
            cout << "Position out of bounds\n";
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void delete_front() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void delete_back() {
        if (!head) return;
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->next) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void delete_at(int pos) {
        if (pos == 0) {
            delete_front();
            return;
        }
        Node* temp = head;
        for (int i = 0; temp && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (!temp || !temp->next) {
            cout << "Position out of bounds\n";
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    bool search(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    int length() {
        int len = 0;
        Node* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Sample test
int main() {
    List li;
    li.push_front(30);
    li.push_back(40);
    li.insert_at(1, 35);
    li.display();

    li.delete_front();
    li.display();

    li.delete_back();
    li.display();

    li.reverse();
    li.display();

    cout << "Length: " << li.length() << endl;
    cout << "Search 35: " << (li.search(35) ? "Found" : "Not Found") << endl;

    return 0;
}
