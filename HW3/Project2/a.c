/*#include <stdio.h>
#include <stdlib.h> 

typedef struct nodeRecord {
	int key;
	struct nodeRecord* left;
	struct nodeRecord* right;
}node;

typedef node* Nptr;
node* insert_node(node* root, int value) // 트리에 값 삽입하기
{
	if (root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root->left = root->right = NULL;
		root->key = value;
	}
	else
	{
		if (root->key > value) root->left = insert_node(root->left, value);
		// 부모노드보다 값이 크면 왼쪽으로 보낸디
		else root->right = insert_node(root->right, value);
	}
	return root;
}



void ino(node* root) // 트리 출력하기 : 중위 순회
{
	if (root)
	{
		ino(root->left);
		printf("%d ", root->key);
		ino(root->right);
	}
}



int main()
{
	node* root = NULL;
	root = insert_node(root, 10);
	root = insert_node(root, 5);
	root = insert_node(root, 7);
	root = insert_node(root, 13);
	root = insert_node(root, 1);
	root = insert_node(root, 17); // 값 삽입하기

	printf("이진트리 중위 순회 : ");
	ino(root);
	printf("\n\n");



	return 0;
}*/
