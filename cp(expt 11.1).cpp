#include <iostream>
using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to create a new node
TreeNode* createNode(int value) {
    return new TreeNode(value);
}

// Function to insert nodes into the binary tree
TreeNode* insertNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to print the binary tree in-order
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    // Insert nodes into the binary tree
    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 3);
    root = insertNode(root, 7);

    // Print the binary tree in-order
    cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}