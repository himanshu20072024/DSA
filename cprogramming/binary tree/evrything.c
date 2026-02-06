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
        root->left = insert(root->left, data);  // Insert in the left subtree
    } else if (data > root->data) {
        root->right = insert(root->right, data);  // Insert in the right subtree
    }

    return root;
}

// Function for inorder traversal of the BST
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);  // Traverse the left subtree
    printf("%d ", root->data);  // Print the current node
    inorder(root->right);  // Traverse the right subtree
}

// Function for preorder traversal of the BST
void preorder(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);  // Print the current node
    preorder(root->left);  // Traverse the left subtree
    preorder(root->right);  // Traverse the right subtree
}

// Function for postorder traversal of the BST
void postorder(struct Node* root) {
    if (root == NULL) return;
    postorder(root->left);  // Traverse the left subtree
    postorder(root->right);  // Traverse the right subtree
    printf("%d ", root->data);  // Print the current node
}

// Function to find the minimum value node in the BST
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    // Loop to find the leftmost node (minimum value)
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    // Base case: If the tree is empty
    if (root == NULL) return root;

    // Find the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);  // Recur down the left subtree
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);  // Recur down the right subtree
    } else {
        // Node to be deleted is found
        // Case 1: Node has only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);  // Free the node
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);  // Free the node
            return temp;
        }

        // Case 2: Node has two children
        struct Node* temp = minValueNode(root->right);  // Find the inorder successor
        root->data = temp->data;  // Copy the inorder successor's content to this node
        root->right = deleteNode(root->right, temp->data);  // Delete the inorder successor
    }
    return root;
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

    // Printing the BST in different traversals
    printf("Inorder traversal of the BST: ");
    inorder(root);  // Inorder traversal
    printf("\n");

    printf("Preorder traversal of the BST: ");
    preorder(root);  // Preorder traversal
    printf("\n");

    printf("Postorder traversal of the BST: ");
    postorder(root);  // Postorder traversal
    printf("\n");

    // Deleting a node (e.g., node with value 20)
    printf("\nDeleting node 20 from the BST.\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal after deletion: ");
    inorder(root);  // Inorder traversal after deletion
    printf("\n");

    return 0;
}
