#include <iostream>
#include <cstdlib> // For malloc and free
using namespace std;

// Define the structure for a node
struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

// Create a new Node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Insert on the left of the node
struct Node* insertLeft(struct Node* root, int value) {
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct Node* insertRight(struct Node* root, int value) {
    root->right = createNode(value);
    return root->right;
}

// Print the tree (in-order traversal)
void print(struct Node* rootNode) {
    if (rootNode != nullptr) {
        print(rootNode->left);
        cout << rootNode->value << endl;
        print(rootNode->right);
    }
}

int main() {
    struct Node* root = createNode(1); // Create root node
    insertLeft(root, 2);               // Insert to the left of root
    insertRight(root, 3);              // Insert to the right of root
    insertLeft(root->left, 4);         // Insert to the left of the left child
    print(root);                       // Print the tree

    // Free the allocated memory (optional but good practice)
    free(root->left->left);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}

