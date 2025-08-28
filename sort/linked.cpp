#include <iostream>
#include <memory>

using namespace std; // Add this line to use the standard namespace

struct Node {
    int data;
    shared_ptr<Node> link;
};

shared_ptr<Node> head = nullptr;

void in_atpos() {
    int ele, pos;
    cout << "\nEnter Element: ";
    cin >> ele;
    cout << "\nEnter Position: ";
    cin >> pos;

    auto temp = make_shared<Node>();
    temp->data = ele;
    temp->link = nullptr;

    if (head == nullptr) {
        head = temp;
    } else {
        auto q = head;
        for (int i = 0; i < pos - 2 && q != nullptr; i++) {
            q = q->link;
        }
        temp->link = q->link;
        q->link = temp;
    }
}

void de_atpos() {
    if (head == nullptr) {
        cout << "\nList is empty!";
    } else {
        int pos;
        cout << "\nEnter Position: ";
        cin >> pos;

        auto q = head;
        if (pos == 1) {
            head = q->link;
        } else {
            auto r = q->link;
            for (int i = 0; i < pos - 2 && q != nullptr; i++) {
                q = q->link;
                r = r->link;
            }
            if (q != nullptr && r != nullptr) {
                q->link = r->link;
            }
        }
    }
}

void traverse() {
    if (head == nullptr) {
        cout << "\nList is Empty!!!";
    } else {
        auto q = head;
        while (q != nullptr) {
            cout << q->data << "\t";
            q = q->link;
        }
        cout << "\n";
    }
}

int main() {
    int ch;
    do {
        cout << "\n1. Insert at Position";
        cout << "\n2. Delete at Position";
        cout << "\n3. Traverse";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                in_atpos();
                break;
            case 2:
                de_atpos();
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nInvalid choice!";
        }
    } while (ch != 4);

    return 0;
}

