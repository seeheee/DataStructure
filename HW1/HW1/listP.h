#define MAX 100
#include <stdbool.h>


typedef struct nodeRecord {
	int Data;
	struct nodeRecord* Next;
} node;

typedef node* Nptr;

typedef struct {
	int Count;
	Nptr Head;
} listType;

void Init(listType* Lptr);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� �ʱ�ȭ ��Ŵ. ��, ���� ����Ʈ�� �����ϴ� ���Ұ� ���� ��� �̵��� ��� ������.

bool IsEmpty(listType* Lptr);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� ��������� �������� '������� ������ ���������� ��ȯ

int Length(listType* Lptr);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� ��� �ִ� �ǹ��ִ� ������ ������ ��ȯ

void Insert(listType* Lptr, int Position, int Item);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� Position ��°�� Item ���� ����

void Delete(listType* Lptr, int Position);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� Position ��° ������ ������

void Update(listType* Lptr, int Position, int Item);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� Position ��° ������ Item �������� ������

int Retrieve(listType* Lptr, int Position);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� Position ��° ������ ã�� ��ȯ��

void RetrieveAll(listType* Lptr);
// Lptr�� ����Ű�� �ִ� ����Ʈ�� ��� ���ҵ��� ȭ�鿡 �����