#include<iostream>
#include"list.h"

using namespace std;

int main()
{
	int count; // 인원 수를 담는 변수
	int interval; // 죽는 간격을 담는 변수
	
	cout << "4번 요세푸스 문제" << endl;
	
	cout << "인원 수를 입력: "; 
	cin >> count; //인원 수 메모리에 할당
	
	cout << "간격을 입력: ";
	cin >> interval; // 간격을 메모리에 할당

	queueClass que; // 큐 클래스 인스턴스 생성
	listClass L; // 리스트 클래스 인스턴스 생성
	
	for (int i = 1; i < count + 1; i++)
	{
		que.Add(i); // 큐에 인원을 넣기(인덱스는 1부터 시작)
		L.Insert(L.Length() + 1, i); // 리스트에 인원을 넣기(인덱스는 1부터 시작)
	}

	int i = 1;
	while (count != interval - 1) // 인원이 간격-1값과 같으면 반복문을 빠져나온다.
	{
		if (i == interval) // 인원값과 간격값이 같을 경우
		{
			que.Remove(); // 큐에서 인원 값을 제거하고
			L.Delete(1); // 리스트 인덱스가 1인 값을 제거
			count--; // 인원 수를 줄여줌 
			i = 1; // 인원의 값을 1로 설정
		}
		else // 인원값과 간격값이 다를 경우
		{
			int x = L.Retrieve(1); // 리스트에 가장 첫번째 인덱스의 값을 x로 설정
			que.Add(x); // 큐에 x값을 넣음
			L.Insert(L.Length() + 1, x); // 리스트에 x값을 넣음
			que.Remove(); // 큐에서 x값 삭제
			L.Delete(1); // 리스트의 첫번째 인덱스 삭제
			i++; // 인원을 다음 숫자로 이동시킴
		}
	}

	L.~listClass(); // 남아있는 인원의 데이터 출력
	

	for (int i = 1; i < count + 1; i++)
	{
		que.Remove();
		L.Delete(1);
	}
}

