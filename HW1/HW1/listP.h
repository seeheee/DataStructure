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
// Lptr이 가리키고 있는 리스트를 초기화 시킴. 단, 현재 리스트를 구성하는 원소가 있을 경우 이들을 모두 삭제함.

bool IsEmpty(listType* Lptr);
// Lptr이 가리키고 있는 리스트가 비어있으면 ‘참‘을 '비어있지 않으면 ’거짓‘을 반환

int Length(listType* Lptr);
// Lptr이 가리키고 있는 리스트에 들어 있는 의미있는 값들의 개수를 반환

void Insert(listType* Lptr, int Position, int Item);
// Lptr이 가리키고 있는 리스트의 Position 번째에 Item 값을 삽입

void Delete(listType* Lptr, int Position);
// Lptr이 가리키고 있는 리스트의 Position 번째 내용을 삭제함

void Update(listType* Lptr, int Position, int Item);
// Lptr이 가리키고 있는 리스트의 Position 번째 내용을 Item 내용으로 변경함

int Retrieve(listType* Lptr, int Position);
// Lptr이 가리키고 있는 리스트의 Position 번째 내용을 찾아 반환함

void RetrieveAll(listType* Lptr);
// Lptr이 가리키고 있는 리스트의 모든 원소들을 화면에 출력함