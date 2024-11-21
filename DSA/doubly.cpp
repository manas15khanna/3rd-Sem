#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *head = nullptr;

void insertBeginning() {
    Node *ptr = new Node();
    if (!ptr) {
        cout << "Overflow" << endl;
        return;
    }
    cout << "Enter item value: ";
    int item;
    cin >> item;
    ptr->data = item;
    ptr->prev = nullptr;
    ptr->next = head;
    if (head) {
        head->prev = ptr;
    }
    head = ptr;
    cout << "Node inserted at the beginning" << endl;
}

void insertLast() {
    Node *ptr = new Node();
    if (!ptr) {
        cout << "Overflow" << endl;
        return;
    }
    cout << "Enter item value: ";
    int item;
    cin >> item;
    ptr->data = item;
    ptr->next = nullptr;
    if (!head) {
        ptr->prev = nullptr;
        head = ptr;
    } else {
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = ptr;
        ptr->prev = temp;
    }
    cout << "Node inserted at the end" << endl;
}

void insertAtLocation() {
    Node *ptr = new Node();
    if (!ptr) {
        cout << "Overflow" << endl;
        return;
    }
    cout << "Enter the location: ";
    int loc;
    cin >> loc;
    cout << "Enter item value: ";
    int item;
    cin >> item;
    ptr->data = item;
    if (loc == 0) {
        ptr->prev = nullptr;
        ptr->next = head;
        if (head) head->prev = ptr;
        head = ptr;
    } else {
        Node *temp = head;
        for (int i = 0; i < loc - 1 && temp; ++i)
            temp = temp->next;
        if (!temp) {
            cout << "Invalid location" << endl;
            delete ptr;
            return;
        }
        ptr->next = temp->next;
        ptr->prev = temp;
        if (temp->next) temp->next->prev = ptr;
        temp->next = ptr;
    }
    cout << "Node inserted at location " << loc << endl;
}

void deleteBeginning() {
    if (!head) {
        cout << "Underflow" << endl;
        return;
    }
    Node *ptr = head;
    head = head->next;
    if (head) head->prev = nullptr;
    delete ptr;
    cout << "Node deleted from the beginning" << endl;
}

void deleteLast() {
    if (!head) {
        cout << "Underflow" << endl;
        return;
    }
    if (!head->next) {
        delete head;
        head = nullptr;
        cout << "Only node of the list deleted" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
    cout << "Node deleted from the end" << endl;
}

void deleteSpecified() {
    if (!head) {
        cout << "Underflow" << endl;
        return;
    }
    cout << "Enter the data after which the node is to be deleted: ";
    int val;
    cin >> val;
    Node *temp = head;
    while (temp && temp->data != val)
        temp = temp->next;
    if (!temp || !temp->next) {
        cout << "Can't delete; node not found or no node exists after the given data" << endl;
        return;
    }
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next)
        toDelete->next->prev = temp;
    delete toDelete;
    cout << "Node deleted after the given data" << endl;
}

void display() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Doubly linked list: ";
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void search() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the item to search: ";
    int item;
    cin >> item;
    Node *temp = head;
    int pos = 0;
    while (temp) {
        if (temp->data == item) {
            cout << "Item found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Item not found" << endl;
}

int main() {
    while (true) {
        cout << "\n1. Insert at Beginning\n2. Insert at Last\n3. Insert at Location\n4. Delete from Beginning\n5. Delete from Last\n6. Delete Specified\n7. Search\n8. Display\n9. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: insertBeginning(); break;
            case 2: insertLast(); break;
            case 3: insertAtLocation(); break;
            case 4: deleteBeginning(); break;
            case 5: deleteLast(); break;
            case 6: deleteSpecified(); break;
            case 7: search(); break;
            case 8: display(); break;
            case 9: exit(0); break;
            default: cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
