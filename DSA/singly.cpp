#include <iostream>
using namespace std;

struct Node {
    int info;
    Node *next;
};

Node *head = nullptr;

void insertBeginning() {
    Node *ptr = new Node();
    if (!ptr) {
        cout << "Overflow" << endl;
        return;
    }
    cout << "Enter the value: ";
    int data;
    cin >> data;
    ptr->info = data;
    ptr->next = head;
    head = ptr;
    cout << "Node inserted at the beginning" << endl;
}

void insertEnd() {
    Node *newNode = new Node();
    if (!newNode) {
        cout << "Overflow" << endl;
        return;
    }
    cout << "Enter the value: ";
    int data;
    cin >> data;
    newNode->info = data;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
        return;
    }
    Node *ptr = head;
    while (ptr->next) ptr = ptr->next;
    ptr->next = newNode;
    cout << "Node inserted at the end" << endl;
}

void insertAtLocation() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the location: ";
    int loc;
    cin >> loc;
    Node *newNode = new Node();
    cout << "Enter the value: ";
    int data;
    cin >> data;
    newNode->info = data;
    if (loc == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        Node *ptr = head;
        for (int i = 0; i < loc - 1 && ptr; ++i)
            ptr = ptr->next;
        if (!ptr) {
            cout << "Invalid location" << endl;
            return;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    cout << "Node inserted at location " << loc << endl;
}

void display() {
    cout << "The linked list is: H";
    Node *ptr = head;
    while (ptr) {
        cout << " --> " << ptr->info;
        ptr = ptr->next;
    }
    cout << " --> NULL" << endl;
}

void search() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the item to find: ";
    int item;
    cin >> item;
    Node *ptr = head;
    int pos = 0;
    while (ptr) {
        if (ptr->info == item) {
            cout << "Item found at position " << pos << endl;
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    cout << "Item not found" << endl;
}

void deleteBeginning() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    Node *ptr = head;
    head = head->next;
    delete ptr;
    cout << "Node deleted from the beginning" << endl;
}

void deleteEnd() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    if (!head->next) {
        delete head;
        head = nullptr;
        cout << "Only node of the list deleted" << endl;
        return;
    }
    Node *ptr = head;
    while (ptr->next && ptr->next->next)
        ptr = ptr->next;
    delete ptr->next;
    ptr->next = nullptr;
    cout << "Node deleted from the end" << endl;
}

void deleteAtLocation() {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the location to delete: ";
    int loc;
    cin >> loc;
    if (loc == 0) {
        Node *ptr = head;
        head = head->next;
        delete ptr;
    } else {
        Node *ptr = head;
        for (int i = 0; i < loc - 1 && ptr; ++i)
            ptr = ptr->next;
        if (!ptr || !ptr->next) {
            cout << "Invalid location" << endl;
            return;
        }
        Node *temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
    }
    cout << "Node deleted at location " << loc << endl;
}

int main() {
    while (true) {
        cout << "\n1. Insert at Beginning\n2. Insert at End\n3. Insert at Location\n4. Display\n5. Search\n6. Delete at Beginning\n7. Delete at End\n8. Delete at Location\n9. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: insertBeginning(); break;
            case 2: insertEnd(); break;
            case 3: insertAtLocation(); break;
            case 4: display(); break;
            case 5: search(); break;
            case 6: deleteBeginning(); break;
            case 7: deleteEnd(); break;
            case 8: deleteAtLocation(); break;
            case 9: exit(0); break;
            default: cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
