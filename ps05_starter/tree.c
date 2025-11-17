/* Implementing a binary search tree in C */

#include <stdio.h>
#include <stdlib.h>

/* Structure of a node in BST */ 
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    /* TODO: create a new node. */
    Node* newNode = malloc(sizeof(Node));
    if(!newNode){
        perror("Memory allocation failed");
        exit(1);
    }
    *newNode = (Node){value, NULL, NULL}; // struct initializer
    return newNode;
}

Node* insert(Node* root, int value) {
    /* TODO: insert the given value in the BST. The BST property must not be violated. */
    Node* newNode = createNode(value);
    if(!root) return newNode;

    Node* parent = NULL;
    Node* current = root;

    while(current){
        parent = current;
        if (value < current->data) current = current->left;
        else if (value > current->data) current = current->right;
        else { // value already exists
            free(newNode);
            return root;
        }
    }

    if(value < parent->data) parent->left = newNode;
    else parent->right = newNode;

    return root;

}

Node* search(Node* root, int value) {
    /* TODO: search the tree for the given value. You must use the BST property. */
    while(root){
        if(value == root->data) return root;
        root = (value < root->data) ? root->left : root->right;
    }
    return NULL;

}

void inOrderTraversal(Node* root) {
    /* TODO: traverse the tree in order to print values in ascending order. */
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

void freeTree(Node* root) {
    /* TODO: free any allocated memory */
    void freeTree(Node* root) {
    if(!root){
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
}

int main() { 
    int n;
    printf("Enter the number of values to be inserted: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter %d integers in random order: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", values+i);
    }

    Node* root = NULL;
    /* Insert values into BST */ 
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    /* Print values in a sorted manner using in-order traversal */
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    /* Search for a value in BST */
    int searchValue;
    printf("Enter a value to be searched: ");
    scanf("%d", &searchValue);
    if (search(root, searchValue)) {
        printf("%d found in BST.\n", searchValue);
    } else {
        printf("%d not found in BST.\n", searchValue);
    }

    freeTree(root); /* free the tree */

    return 0;
}
