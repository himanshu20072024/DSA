#include <stdio.h>

int tree[] = {1, 2, 3, 4, 5, 6};
int size = sizeof(tree) / sizeof(tree[0]);

void inorder(int index) {
    if (index >= size) return;
    inorder(2 * index + 1);         // Left child
    printf("%d ", tree[index]);     // Root
    inorder(2 * index + 2);         // Right child
}

void preorder(int index) {
    if (index >= size) return;
    printf("%d ", tree[index]);     // Root
    preorder(2 * index + 1);        // Left child
    preorder(2 * index + 2);        // Right child
}

void postorder(int index) {
    if (index >= size) return;
    postorder(2 * index + 1);       // Left child
    postorder(2 * index + 2);       // Right child
    printf("%d ", tree[index]);     // Root
}

int main() {
    printf("Inorder Traversal: ");
    inorder(0);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(0);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(0);
    printf("\n");

    return 0;
}
