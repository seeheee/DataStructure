#include<iostream>
#include"list.h"

using namespace std;

int main()
{
	int count; // �ο� ���� ��� ����
	int interval; // �״� ������ ��� ����
	
	cout << "4�� �似Ǫ�� ����" << endl;
	
	cout << "�ο� ���� �Է�: "; 
	cin >> count; //�ο� �� �޸𸮿� �Ҵ�
	
	cout << "������ �Է�: ";
	cin >> interval; // ������ �޸𸮿� �Ҵ�

	queueClass que; // ť Ŭ���� �ν��Ͻ� ����
	listClass L; // ����Ʈ Ŭ���� �ν��Ͻ� ����
	
	for (int i = 1; i < count + 1; i++)
	{
		que.Add(i); // ť�� �ο��� �ֱ�(�ε����� 1���� ����)
		L.Insert(L.Length() + 1, i); // ����Ʈ�� �ο��� �ֱ�(�ε����� 1���� ����)
	}

	int i = 1;
	while (count != interval - 1) // �ο��� ����-1���� ������ �ݺ����� �������´�.
	{
		if (i == interval) // �ο����� ���ݰ��� ���� ���
		{
			que.Remove(); // ť���� �ο� ���� �����ϰ�
			L.Delete(1); // ����Ʈ �ε����� 1�� ���� ����
			count--; // �ο� ���� �ٿ��� 
			i = 1; // �ο��� ���� 1�� ����
		}
		else // �ο����� ���ݰ��� �ٸ� ���
		{
			int x = L.Retrieve(1); // ����Ʈ�� ���� ù��° �ε����� ���� x�� ����
			que.Add(x); // ť�� x���� ����
			L.Insert(L.Length() + 1, x); // ����Ʈ�� x���� ����
			que.Remove(); // ť���� x�� ����
			L.Delete(1); // ����Ʈ�� ù��° �ε��� ����
			i++; // �ο��� ���� ���ڷ� �̵���Ŵ
		}
	}

	L.~listClass(); // �����ִ� �ο��� ������ ���
	

	for (int i = 1; i < count + 1; i++)
	{
		que.Remove();
		L.Delete(1);
	}
}

