#include <stdio.h>
#include <stdlib.h>

// Definition for the binary search tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node with the given value
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to insert a new node into the BST
struct Node* insert(struct Node* root, int data) {
    // If the tree is empty, return a new node
    if (root == NULL) {
        return newNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        // Insert in the left subtree
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        // Insert in the right subtree
        root->right = insert(root->right, data);
    }

    // return the (unchanged) node pointer
    return root;
}

// Function for inorder traversal of the BST
void inorder(struct Node* root) {
    if (root == NULL)
        return;
    
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Main function to test the binary search tree
int main() {
    struct Node* root = NULL;
    
    // Inserting elements into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    
    // Print the inorder traversal of the BST
    printf("Inorder traversal of the BST: ");
    inorder(root);

    return 0;
}
