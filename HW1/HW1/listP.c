#include <stdio.h>
#include <stdlib.h>
#include "listP.h"
#include <stdbool.h>


void Init(listType* Lptr) {
	Lptr->Count = 0;
	Lptr->Head = NULL;
	printf("�����Ͱ� �ʱ�ȭ �Ǿ����ϴ�.\n");
}

bool IsEmpty(listType* Lptr) {
	if (Lptr->Count == 0) {
		return true;
	}
	else
	{
		return false;
	}
}

int Length(listType* Lptr) {
	return Lptr->Count;
}

void Insert(listType* Lptr, int Position, int Item) {
	if ((Position > (Lptr->Count+1)) || (Position < 1)) {
		printf("�ε����� ������ ������ϴ�.");
	}
	else
	{
		Nptr n = (node*)malloc(sizeof(node));
		n->Data = Item;
		n->Next = NULL;
		if (Position == 1) {
			n->Next = Lptr->Head;
			Lptr->Head = n;
		}
		else
		{
			Nptr m = Lptr->Head;
			for (int i = 1; i < (Position - 1); i++) {
				m = m->Next;
			}
			n->Next = m->Next;
			m->Next = n;
		}
		Lptr->Count += 1;
		printf("%d�� ����Ʈ %d��° ���ҷ� �����Ͽ����ϴ�.\n", Item, Position);
	}
}

void Delete(listType* Lptr, int Position) {
	if (IsEmpty(Lptr)) {
		printf("����Ʈ�� ����־� �����͸� ������ �� �����ϴ�.");
	}
	else if ((Position > (Lptr->Count)) || (Position < 1))
	{
		printf("�ε����� ������ ������ϴ�.");
	}
	else {
		if (Position == 1) {
			Nptr n = Lptr->Head;
			Lptr->Head = Lptr->Head->Next;
			free(n);
		}
		else
		{
			Nptr m = Lptr->Head;
			for (int i = 1; i < (Position - 1); i++) {
				m = m->Next;
			}
			Nptr n = m->Next;
			m->Next = n->Next;
			free(n);
		}
		Lptr->Count -= 1;
		printf("%d��° �����Ͱ� �����Ǿ����ϴ�.\n", Position);
	}
}

void Update(listType* Lptr, int Position, int Item) {
	if (IsEmpty(Lptr)) {
		printf("����Ʈ�� ����־� �����͸� ������ �� �����ϴ�.");
	}
	else if ((Position > (Lptr->Count)) || (Position < 1))
	{
		printf("�ε����� ������ ������ϴ�.");
	}
	else {
		Nptr m;
		m = Lptr->Head;
		for (int i = 0; i < Position - 1; i++) {
			m = m->Next;
		}
		m->Data = Item;
		printf("%d�� ����Ʈ %d��° ���ҷ� �����Ͽ����ϴ�.\n", Item, Position);
	}
}

int Retrieve(listType* Lptr, int Position) {
	Nptr p;
	p = Lptr->Head;
	for (int i = 0; i < Position - 1; i++) {
		p = p->Next;
	}
	return p->Data;
}

void RetrieveAll(listType* Lptr) {
	printf("�Ʒ��� ����Ʈ�� ��� ���Ҹ� ����մϴ�.\n");
	Nptr p;
	p = Lptr->Head;
	while (p != NULL) {
		printf("%d ", p->Data);
		p = p->Next;
	}
}

int main(void) {
	listType list;

	// 1. ����Ʈ �ʱ�ȭ
	Init(&list);

	// 2. ����Ʈ�� ���� 10�� �Է�
	for (int i = 1; i <= 10; i++) {
		Insert(&list, i, i);
	}

	// 3. ����Ʈ�� 4��° ���Ҹ� ���
	printf("����Ʈ 4��° ���Ҵ� %d�Դϴ�.\n", Retrieve(&list, 4));

	// 4. ����Ʈ�� 4��° ���Ҹ� ����
	Delete(&list, 4);

	// 5. ����Ʈ�� 4��° ���Ҹ� ����
	Delete(&list, 4);

	// 6. ����Ʈ ���� ���� ���� ���
	printf("����Ʈ�� ������ ������ %d�Դϴ�.\n", Length(&list));

	// 7. ����Ʈ�� ��� �ִ��� ���θ� ���
	if (IsEmpty(&list)) {
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}

	// 8. ����Ʈ�� 4��° ���Ҹ� ���
	printf("����Ʈ 4��° ���Ҵ� %d�Դϴ�.\n", Retrieve(&list, 4));

	// 9. ���� �� 100�� ����Ʈ�� 1��° ���ҷ� ����
	Insert(&list, 1, 100);

	// 10. ���� �� 200�� ����Ʈ�� ������ ���ҷ� ����
	Insert(&list, Length(&list) + 1, 200);

	// 11. ����Ʈ�� 4��° ���Ҹ� 444�� ����
	Update(&list, 4, 444);

	// 12. ����Ʈ ������ ��� ���
	RetrieveAll(&list);
	printf("\n");

	// 13. ����Ʈ�� �ʱ�ȭ
	Init(&list);

	// 14. ����Ʈ�� ����ִ��� ���θ� ���
	if (IsEmpty(&list)) {
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
}