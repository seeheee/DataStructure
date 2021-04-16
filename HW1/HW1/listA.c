/*#include <stdio.h>
#include <stdlib.h>
#include "listA.h"
#include <stdbool.h>
#define MAX 100

void Init(listType* Lptr) {
    Lptr->Count = 0;
    printf("�����Ͱ� �ʱ�ȭ �Ǿ����ϴ�.\n");
}

bool IsEmpty(listType* Lptr) {
    if (Lptr->Count == 0) {
        return true;
    }
    else {
        return false;
    }
}
int Length(listType* Lptr) {
    return Lptr->Count;
}

void Insert(listType* Lptr, int Position, int Item) {
    if (Lptr->Count == MAX) {
        printf("����Ʈ�� �� �� �����͸� �߰��� �� �����ϴ�.");
    }
    else if((Position > (Lptr->Count + 1)) || (Position < 1))
    {
        printf("�ε����� ������ ������ϴ�.");
    }
    else
    {
        for (int i = (Lptr->Count - 1); i >= (Position - 1); i--) {
            Lptr->Data[i + 1] = Lptr->Data[i];
        }
        Lptr->Data[Position] = Item;
        Lptr->Count += 1;
        printf("%d�� ����Ʈ %d��° ���ҷ� �����Ͽ����ϴ�.\n", Item, Position);
    }

}
void Delete(listType* Lptr, int Position) {
    int i;
    if (IsEmpty(Lptr)) {
        printf("����Ʈ�� ����־� �����͸� ������ �� �����ϴ�.");
    }
    else if ((Position >= (Lptr->Count)) || (Position < 1)) {
        printf("�ε����� ������ ������ϴ�.");
    }
    else {
        for (i = Position; i < (Lptr->Count); i++) {
            Lptr->Data[i] = Lptr->Data[i + 1];
        }
        Lptr->Count -= 1;
        printf("%d��° �����Ͱ� �����Ǿ����ϴ�.\n", Position);
    }
}

void Update(listType* Lptr, int Position, int Item) {
    if (IsEmpty(Lptr)) {
        printf("����Ʈ�� ����־� �����͸� ������ �� �����ϴ�.");
    }
    else if((Position>(Lptr->Count)) || (Position<1))
    {
        printf("�ε����� ������ ������ϴ�.");
    }
    else
    {
        Lptr->Data[Position] = Item;
        printf("%d�� ����Ʈ %d��° ���ҷ� �����Ͽ����ϴ�.\n", Item, Position);
    }
    
}

int Retrieve(listType* Lptr, int Position) {
    return Lptr->Data[Position];
}

void RetrieveAll(listType* Lptr) {
    printf("�Ʒ��� ����Ʈ�� ��� ���Ҹ� ����մϴ�.\n");
    for (int i = 1; i <= Lptr->Count; i++) {
        printf("%d ", Lptr->Data[i]);
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
    Insert(&list, Length(&list)+1, 200);
    
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
}*/