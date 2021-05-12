#include <stdio.h>
#include <stdlib.h>
#include "listA.h"
#include <stdbool.h>
#define MAX 100

void Init(listType* Lptr) {
    Lptr->Count = 0;
    printf("데이터가 초기화 되었습니다.\n");
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
    else if((Position > (Lptr->Count + 1)) || (Position < 1))
    {
        printf("인덱스의 범위를 벗어났습니다.");
    }
    else
    {
        for (int i = (Lptr->Count - 1); i >= (Position - 1); i--) {
            Lptr->Data[i + 1] = Lptr->Data[i];
        }
        Lptr->Data[Position] = Item;
        Lptr->Count += 1;
        printf("%d을 리스트 %d번째 원소로 삽입하였습니다.\n", Item, Position);
    }

}
void Delete(listType* Lptr, int Position) {
    int i;
    if (IsEmpty(Lptr)) {
        printf("리스트가 비어있어 데이터를 삭제할 수 없습니다.");
    }
    else if ((Position >= (Lptr->Count)) || (Position < 1)) {
        printf("인덱스의 범위를 벗어났습니다.");
    }
    else {
        for (i = Position; i < (Lptr->Count); i++) {
            Lptr->Data[i] = Lptr->Data[i + 1];
        }
        Lptr->Count -= 1;
        printf("%d번째 데이터가 삭제되었습니다.\n", Position);
    }
}

void Update(listType* Lptr, int Position, int Item) {
    if (IsEmpty(Lptr)) {
        printf("리스트가 비어있어 데이터를 변경할 수 없습니다.");
    }
    else if((Position>(Lptr->Count)) || (Position<1))
    {
        printf("인덱스의 범위를 벗어났습니다.");
    }
    else
    {
        Lptr->Data[Position] = Item;
        printf("%d을 리스트 %d번째 원소로 변경하였습니다.\n", Item, Position);
    }
    
}

int Retrieve(listType* Lptr, int Position) {
    return Lptr->Data[Position];
}

void RetrieveAll(listType* Lptr) {
    printf("아래에 리스트의 모든 원소를 출력합니다.\n");
    for (int i = 1; i <= Lptr->Count; i++) {
        printf("%d ", Lptr->Data[i]);
    }
}


int main(void) {
    listType list;

    // 1. 리스트 초기화
    Init(&list);
    
    // 2. 리스트에 원소 10개 입력
    for (int i = 1; i <= 10; i++) {
        Insert(&list, i, i);
    }
   
    // 3. 리스트의 4번째 원소를 출력
    printf("리스트 4번째 원소는 %d입니다.\n", Retrieve(&list, 4));

    // 4. 리스트의 4번째 원소를 삭제
    Delete(&list, 4);
    
    // 5. 리스트의 4번째 원소를 삭제
    Delete(&list, 4);
    
    // 6. 리스트 구성 원소 갯수 출력
    printf("리스트의 원소의 개수는 %d입니다.\n", Length(&list));

    // 7. 리스트가 비어 있는지 여부를 출력
    if (IsEmpty(&list)) {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    // 8. 리스트의 4번째 원소를 출력
    printf("리스트 4번째 원소는 %d입니다.\n", Retrieve(&list, 4));

    // 9. 원소 값 100을 리스트의 1번째 원소로 삽입
    Insert(&list, 1, 100);
    
    // 10. 원소 값 200을 리스트의 마지막 원소로 삽입
    Insert(&list, Length(&list)+1, 200);
    
    // 11. 리스트의 4번째 원소를 444로 변경
    Update(&list, 4, 444);

    // 12. 리스트 내용을 모두 출력
    RetrieveAll(&list);
    printf("\n");

    // 13. 리스트를 초기화
    Init(&list);
    
    // 14. 리스트가 비어있는지 여부를 출력
    if (IsEmpty(&list)) {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
}
