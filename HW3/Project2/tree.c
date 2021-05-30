#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

typedef struct nodeRecord {
	int key;
	struct nodeRecord* LChild;
	struct nodeRecord* RChild;
} node;

typedef node* Nptr; // 구조체의 포인터 선언

Nptr Insert(Nptr T, int key) {

	// 트리가 없거나 해당 데이터의 포인터가 null일 경우 새로 만들어주는 것을 의미
	if (T == NULL) {
		T = (node *)malloc(sizeof(node));
		T->LChild = T->RChild = NULL;
		T->key = key;

	}
	// 트리가 있다면
	else {
		// 트리의 데이터 값이 현재 데이터 값보다 클 경우(오른쪽에는 부모노드보다 큰 값)
		// 왼쪽 포인터 값과 데이터 값을 재귀로 넘겨서 트리를 생성
		if (T->key > key) {
			T->LChild = Insert(T->LChild, key);
		}
		// 트리의 데이터 값이 현재 데이터 값보다 작을 경우(왼쪽에는 부모노드보다 작은 값)
		// 왼쪽 포인터 값과 데이터 값을 재귀로 넘겨서 트리를 생성
		else
		{
			T->RChild = Insert(T->RChild, key);
		}
	}
	return T;
}

// 해당 데이터 값이 있는지 확인
Nptr Check_Data(Nptr T, int key) {
	if (T == NULL) {
		return NULL;
	}

	// 현재 탐색하는 데이터 값과 찾으려는 데이터 값이 같을 경우 포인터 반환
	if (T->key == key) {
		return T;
	}

	// 현재 탐색하는 데이터 값과 찾으려는 데이터 값 중 탐색하는 데이터 값이 클 경우
	// 왼쪽 트리 탐색할 수 있게 왼쪽 트리 포인터와 데이터 값을 재귀로 호출
	else if (T->key > key) {
		return Check_Data(T->LChild, key);
	}
	
	// 현재 탐색하는 데이터 값과 찾으려는 데이터 값 중 탐색하는 데이터 값이 작을 경우
	// 오른쪽 트리 탐색할 수 있게 오른쪽 트리 포인터와 데이터 값을 재귀로 호출
	else
	{
		return Check_Data(T->RChild, key);
	}
}

// 중위 탐색 진행
int InOrder(Nptr T) {
	if (T) {
		InOrder(T->LChild);
		printf("%d ", T->key);
		InOrder(T->RChild);
	}
}

int main(void) {
	Nptr tree = NULL; //선언 후 초기화
	int data; // 트리에 들어갈 데이터를 담을 수 있는 변수
	int value; // 트리에 들어갈 데이터를 찾는 변수

	for (int i = 1; i <= 20; i++) {
		printf("%d번째 데이터를 입력하세요: ", i);
		scanf_s("%d", &data);
		tree = Insert(tree, data);
	}

	printf("\n");
	printf("이진 탐색 트리 생성 완료");
	printf("\n");
	printf("\n");
	printf("이진트리 중위 순회결과: ");
	InOrder(tree);
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("\n");
		printf("찾으려는 데이터 값을 입력하세요: ");
		scanf_s("%d", &value);

		if (Check_Data(tree, value)) { // 반환값이 존재하면
			printf("해당 원소가 트리에 존재합니다.");
			printf("\n");
		}
		else {
			printf("해당 원소는 트리에 존재하지 않습니다.");
			printf("\n");
		}
		;
	}

	return 0;
}