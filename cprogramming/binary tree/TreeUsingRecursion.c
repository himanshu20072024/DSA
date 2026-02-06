#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create()
{
    int x;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data or -1 for no node: \n");
    scanf("%d",&x);
    if(x == -1)
        return NULL;
    else
        newNode -> data = x;
    
    printf("Enter left child of %d\n",x);
    newNode -> left = create();
    printf("Enter right child of %d\n",x);
    newNode -> right = create();
    return newNode;
}

void preorder(struct Node* root)
{
    if(root == NULL)  return;
    printf("%d ",root -> data);
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(struct Node* root)
{
    if(root == NULL)    return;
    inorder(root -> left);
    printf("%d ",root -> data);
    inorder(root -> right);
}

void postorder(struct Node* root)
{
    if(root == NULL)    return;
    postorder(root -> left);
    postorder(root -> right);
    printf("%d ",root -> data);
}

int main()
{
    struct Node* root = NULL;
    root = create();

    preorder(root);

    inorder(root);

    postorder(root);

    return 0;
}