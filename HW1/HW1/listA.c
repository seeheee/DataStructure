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
        printf("리스트가 꽉 차 데이터를 추가할 수 없습니다.");
    }
    else if((Position>(Lptr->Count-1)) || (Position < 1))
    {
        printf("인덱스의 범위가 벗어났습니다.");
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