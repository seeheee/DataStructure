#include "list.h"
#include <iostream>
using namespace std;

listClass::listClass() {
    // ������ �ʱ�ȭ
	Count = 0;
    int Data[MAX] = { 0 };
}

listClass::~listClass() {
    // ����Ʈ�� �Ҹ��ϸ鼭 �Ҹ��ڰ� ������ �� ������ �� ���(4���������� ���)
    for (int i = 1; i < Length()+1; i++)
    {
        cout << "���� �ο��� " << Data[i] << "�Դϴ�." << endl;
    }
}

void listClass::Insert(int Position, int item) {
    if (Count == MAX) {
        cout << "����Ʈ�� �� �� �����͸� �߰��� �� �����ϴ�." << endl;
    }
    else if ((Position > (Count + 1)) || (Position < 1))
    {
        cout <<  "�ε����� ������ ������ϴ�." << endl;
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
        cout << "����Ʈ�� ����־� �����͸� ������ �� �����ϴ�." << endl;
    }
    else if ((Position > (Count)) || (Position < 1)) {
        cout << "�ε����� ������ ������ϴ�." << endl;
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

// ���� ����
stackClass::stackClass() {
    cout << "stackClass ������ ����" << endl;
}

stackClass::~stackClass() {
    cout << "stackClass �Ҹ��� ����" << endl;
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
    if (L.Length() == 100) { //Count == 100�̸��̶�� ��, �迭�� ���̰� 100������
        return true;
    }
    else
    {
        return false;
    }
}

// ť ����
queueClass::queueClass() {
    cout << "queueClass ������ ����" << endl;
}

queueClass::~queueClass() {
    cout << "queueClass �Ҹ��� ����" << endl;
}

void queueClass::Add(int Item) {
    L.Insert(L.Length()+1, Item);
}

void queueClass::Remove() {
    return L.Delete(1); // �ε����� 1���� �����ϱ� ����
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
    if (L.Length() == 100) { //Count == 100�̸��̶�� ��, �迭�� ���̰� 100������
        return true;
    }
    else
    {
        return false;
    }
}
