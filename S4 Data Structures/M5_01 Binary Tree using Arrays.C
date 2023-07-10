#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int constructBinaryTree(int arr[], int root_index, int n, int binaryTree[]) {
    if (root_index < n) {
	binaryTree[root_index] = arr[root_index];
	constructBinaryTree(arr, 2 * root_index + 1, n, binaryTree);
	constructBinaryTree(arr, 2 * root_index + 2, n, binaryTree);
    }
}

void inorderTraversal(int root_index, int binaryTree[], int n) {
    if (root_index < n) {
	inorderTraversal(2 * root_index + 1, binaryTree, n);
	printf("%d ", binaryTree[root_index]);
	inorderTraversal(2 * root_index + 2, binaryTree, n);
    }
}

void preorderTraversal(int root_index, int binaryTree[], int n) {
    if (root_index < n) {
	printf("%d ", binaryTree[root_index]);
	preorderTraversal(2 * root_index + 1, binaryTree, n);
	preorderTraversal(2 * root_index + 2, binaryTree, n);
    }
}

void postorderTraversal(int root_index, int binaryTree[], int n) {
    if (root_index < n) {
	postorderTraversal(2 * root_index + 1, binaryTree, n);
	postorderTraversal(2 * root_index + 2, binaryTree, n);
	printf("%d ", binaryTree[root_index]);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int binaryTree[MAX_SIZE];
    constructBinaryTree(arr, 0, n, binaryTree);
    printf("Inorder traversal: ");
    inorderTraversal(0, binaryTree, n);
    printf("\nPreorder traversal: ");
    preorderTraversal(0, binaryTree, n);
    printf("\nPostorder traversal: ");
    postorderTraversal(0, binaryTree, n);
    getch();
}
