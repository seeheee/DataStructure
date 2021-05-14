#include "list.h"
#include <iostream>
using namespace std;

listClass::listClass() {
    // 데이터 초기화
	Count = 0;
    int Data[MAX] = { 0 };
}

listClass::~listClass() {
    // 리스트가 소멸하면서 소멸자가 실행할 때 데이터 값 출력(4번문제에서 사용)
    for (int i = 1; i < Length()+1; i++)
    {
        cout << "남은 인원은 " << Data[i] << "입니다." << endl;
    }
}

void listClass::Insert(int Position, int item) {
    if (Count == MAX) {
        cout << "리스트가 꽉 차 데이터를 추가할 수 없습니다." << endl;
    }
    else if ((Position > (Count + 1)) || (Position < 1))
    {
        cout <<  "인덱스의 범위를 벗어났습니다." << endl;
    }
    else
    {
        for (int i = (Count - 1); i >= (Position - 1); i--) {
            Data[i + 1] = Data[i];
        }
        Data[Position] = item;
        Count += 1;
    }
}

void listClass::Delete(int Position) {
    if (IsEmpty()) {
        cout << "리스트가 비어있어 데이터를 삭제할 수 없습니다." << endl;
    }
    else if ((Position > (Count)) || (Position < 1)) {
        cout << "인덱스의 범위를 벗어났습니다." << endl;
    }
    else {
        for (int i = Position; i < (Count); i++) {
            Data[i] = Data[i + 1];
        }
        Count -= 1;
    }
}

int listClass::Retrieve(int Position) {
    return Data[Position];
}

bool listClass::IsEmpty() {
    if (Count == 0) {
        return true;
    }
    else {
        return false;
    }
}

int listClass::Length() {
    return Count;
}

// 스택 구현
stackClass::stackClass() {
    cout << "stackClass 생성자 실행" << endl;
}

stackClass::~stackClass() {
    cout << "stackClass 소멸자 실행" << endl;
}

void stackClass::Push(int Item) {
    L.Insert(L.Length()+1, Item);
}

void stackClass::Pop() {
    return L.Delete(L.Length());
}

bool stackClass::IsEmpty() {
    if (L.IsEmpty() == true) {
        return true;
    }
    else
    {
        return false;
    }
}

bool stackClass::IsFull() {
    if (L.Length() == 100) { //Count == 100이면이라는 뜻, 배열의 길이가 100임으로
        return true;
    }
    else
    {
        return false;
    }
}

// 큐 구현
queueClass::queueClass() {
    cout << "queueClass 생성자 실행" << endl;
}

queueClass::~queueClass() {
    cout << "queueClass 소멸자 실행" << endl;
}

void queueClass::Add(int Item) {
    L.Insert(L.Length()+1, Item);
}

void queueClass::Remove() {
    return L.Delete(1); // 인덱스가 1부터 시작하기 때문
}

bool queueClass::IsEmpty() {
    if (L.IsEmpty() == true) {
        return true;
    }
    else
    {
        return false;
    }
}

bool queueClass::IsFull() {
    if (L.Length() == 100) { //Count == 100이면이라는 뜻, 배열의 길이가 100임으로
        return true;
    }
    else
    {
        return false;
    }
}
