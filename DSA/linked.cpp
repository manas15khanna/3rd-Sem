#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* head = NULL;

void insertAtBeginning() {
    Node* ptr = new Node;
    if (ptr == NULL) {
        cout << "Overflow" << endl;
        return;
    }
    int data;
    cout << "Enter the value: ";
    cin >> data;
    ptr->info = data;
    ptr->next = head;
    head = ptr;
}

void insertAtEnd() {
    Node* newNode = new Node;
    if (newNode == NULL) {
        cout << "Overflow" << endl;
        return;
    }
    int data;
    cout << "Enter the value: ";
    cin >> data;
    newNode->info = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
}

void insertAtLocation() {
    int loc, data, count = 0;
    cout << "Enter the location: ";
    cin >> loc;
    Node* ptr = head;
    while (ptr != NULL) {
        ptr = ptr->next;
        count++;
    }
    if (loc <= count) {
        Node* newNode = new Node;
        if (newNode == NULL) {
            cout << "Overflow" << endl;
            return;
        }
        cout << "Enter the value: ";
        cin >> data;
        newNode->info = data;
        Node* temp = head;
        ptr = head;
        for (int i = 0; i < loc; i++)
            ptr = ptr->next;
        for (int i = 0; i < loc - 1; i++)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = ptr;
    } else {
        cout << "Invalid location" << endl;
    }
}

void display() {
    cout << "The linked list is: H";
    Node* ptr = head;
    while (ptr != NULL) {
        cout << "-->" << ptr->info;
        ptr = ptr->next;
    }
    cout << "-->NULL" << endl;
}

void search() {
    int item, loc = 0;
    cout << "Enter the item to find its location: ";
    cin >> item;
    Node* ptr = head;
    while (ptr != NULL) {
        if (item == ptr->info) {
            cout << "Item found at location = " << loc << endl;
            return;
        }
        ptr = ptr->next;
        loc++;
    }
    cout << "Item not found" << endl;
}

void deleteAtBeginning() {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Only node of the list deleted" << endl;
    } else {
        Node* ptr = head;
        head = head->next;
        delete ptr;
        cout << "Node deleted" << endl;
    }
}

void deleteAtEnd() {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Only node of the list deleted" << endl;
    } else {
        Node* ptr = head;
        Node* ptrPrev = NULL;
        while (ptr->next != NULL) {
            ptrPrev = ptr;
            ptr = ptr->next;
        }
        ptrPrev->next = NULL;
        delete ptr;
        cout << "Deleted Node" << endl;
    }
}

void deleteAtLocation() {
    int loc, count = 0;
    cout << "Enter the location: ";
    cin >> loc;
    Node* ptr = head;
    while (ptr != NULL) {
        ptr = ptr->next;
        count++;
    }
    if (loc == count) {
        deleteAtEnd();
    } else if (loc < count) {
        Node* ptrPrev = NULL;
        ptr = head;
        for (int i = 0; i < loc; i++) {
            ptrPrev = ptr;
            ptr = ptr->next;
        }
        Node* temp = head;
        for (int i = 0; i < loc - 2; i++)
            temp = temp->next;
        temp->next = ptr;
        delete ptrPrev;
        cout << "Deleted Node" << endl;
    } else {
        cout << "Invalid location" << endl;
    }
}

int main() {
    int choice;
    while (1) {
        cout << "\nEnter your choice:\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at a Given Location\n4. Display\n5. Search\n6. Delete at Beginning\n7. Delete at End\n8. Delete at Location\n9. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: insertAtBeginning(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtLocation(); break;
            case 4: display(); break;
            case 5: search(); break;
            case 6: deleteAtBeginning(); break;
            case 7: deleteAtEnd(); break;
            case 8: deleteAtLocation(); break;
            case 9: exit(0); break;
            default: cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}

