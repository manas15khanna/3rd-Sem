#include <iostream>
#include <cstdlib> // For malloc
using namespace std;

// Define the structure for a node
struct Node {
    int item;
    struct Node* left;
    struct Node* right;
};

// Inorder traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL) return;
    else {
        inorderTraversal(root->left);
        cout << root->item << "\t";
        inorderTraversal(root->right);
    }
}

// Preorder traversal
void preorderTraversal(struct Node* root) {
    if (root == NULL) return;
    else {
        cout << root->item << "\t";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder traversal
void postorderTraversal(struct Node* root) {
    if (root == NULL) return;
    else {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->item << "\t";
    }
}

// Create a new Node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
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

int main() {
    struct Node* root = createNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertLeft(root->left->left, 7);
    insertRight(root->left, 5);
    insertRight(root->right, 6);

    cout << "Inorder traversal:\n";
    inorderTraversal(root);
    cout << "\nPreorder traversal:\n";
    preorderTraversal(root);
    cout << "\nPostorder traversal:\n";
    postorderTraversal(root);

    return 0;
}

