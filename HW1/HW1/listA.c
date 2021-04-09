#include <stdio.h>
#include "listA.h"
#include <stdbool.h>

void Init(listType* Lptr) {
    Lptr->Count = 0;
    if (Lptr->Data) {
        for (int i = 0; i < Lptr->Count; i++) {
            Lptr->Data[i] = Lptr->Data[i + 1];
        }
        --Lptr->Count;
    }
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
    else if((Position>(Lptr->Count-1)) || (Position < 1))
    {
        printf("�ε����� ������ ������ϴ�.");
    }
    else
    {
        for (int i = (Lptr->Count - 1); i >= (Position - 1); i--) {
            Lptr->Data[i + 1] = Lptr->Data[i];
            Lptr->Data[Position - 1] = Item;
            Lptr->Count += 1;
        }
    }
}
void Delete(listType* Lptr, int Position) {

}
void main() {

}