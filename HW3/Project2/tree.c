#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

typedef struct nodeRecord {
	int key;
	struct nodeRecord* LChild;
	struct nodeRecord* RChild;
} node;

typedef node* Nptr; // ����ü�� ������ ����

Nptr Insert(Nptr T, int key) {

	// Ʈ���� ���ų� �ش� �������� �����Ͱ� null�� ��� ���� ������ִ� ���� �ǹ�
	if (T == NULL) {
		T = (node *)malloc(sizeof(node));
		T->LChild = T->RChild = NULL;
		T->key = key;

	}
	// Ʈ���� �ִٸ�
	else {
		// Ʈ���� ������ ���� ���� ������ ������ Ŭ ���(�����ʿ��� �θ��庸�� ū ��)
		// ���� ������ ���� ������ ���� ��ͷ� �Ѱܼ� Ʈ���� ����
		if (T->key > key) {
			T->LChild = Insert(T->LChild, key);
		}
		// Ʈ���� ������ ���� ���� ������ ������ ���� ���(���ʿ��� �θ��庸�� ���� ��)
		// ���� ������ ���� ������ ���� ��ͷ� �Ѱܼ� Ʈ���� ����
		else
		{
			T->RChild = Insert(T->RChild, key);
		}
	}
	return T;
}

// �ش� ������ ���� �ִ��� Ȯ��
Nptr Check_Data(Nptr T, int key) {
	if (T == NULL) {
		return NULL;
	}

	// ���� Ž���ϴ� ������ ���� ã������ ������ ���� ���� ��� ������ ��ȯ
	if (T->key == key) {
		return T;
	}

	// ���� Ž���ϴ� ������ ���� ã������ ������ �� �� Ž���ϴ� ������ ���� Ŭ ���
	// ���� Ʈ�� Ž���� �� �ְ� ���� Ʈ�� �����Ϳ� ������ ���� ��ͷ� ȣ��
	else if (T->key > key) {
		return Check_Data(T->LChild, key);
	}
	
	// ���� Ž���ϴ� ������ ���� ã������ ������ �� �� Ž���ϴ� ������ ���� ���� ���
	// ������ Ʈ�� Ž���� �� �ְ� ������ Ʈ�� �����Ϳ� ������ ���� ��ͷ� ȣ��
	else
	{
		return Check_Data(T->RChild, key);
	}
}

// ���� Ž�� ����
int InOrder(Nptr T) {
	if (T) {
		InOrder(T->LChild);
		printf("%d ", T->key);
		InOrder(T->RChild);
	}
}

int main(void) {
	Nptr tree = NULL; //���� �� �ʱ�ȭ
	int data; // Ʈ���� �� �����͸� ���� �� �ִ� ����
	int value; // Ʈ���� �� �����͸� ã�� ����

	for (int i = 1; i <= 20; i++) {
		printf("%d��° �����͸� �Է��ϼ���: ", i);
		scanf_s("%d", &data);
		tree = Insert(tree, data);
	}

	printf("\n");
	printf("���� Ž�� Ʈ�� ���� �Ϸ�");
	printf("\n");
	printf("\n");
	printf("����Ʈ�� ���� ��ȸ���: ");
	InOrder(tree);
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("\n");
		printf("ã������ ������ ���� �Է��ϼ���: ");
		scanf_s("%d", &value);

		if (Check_Data(tree, value)) { // ��ȯ���� �����ϸ�
			printf("�ش� ���Ұ� Ʈ���� �����մϴ�.");
			printf("\n");
		}
		else {
			printf("�ش� ���Ҵ� Ʈ���� �������� �ʽ��ϴ�.");
			printf("\n");
		}
		;
	}

	return 0;
}