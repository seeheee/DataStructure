#define MAX 100
#include <stdbool.h>

typedef struct {
	int Count; // Count ��: 0, 1, 2 <-- ����Ʈ�ȿ� �ִ� �ǹ� �ִ� ���� ����
	int Data[MAX];
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