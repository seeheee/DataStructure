/*#include <iostream>
#include <string>
#include <vector>
#include"list.h"
#include <fstream>
using namespace std;

int main()
{
    stackClass stack; // ����Ŭ���� �ν��Ͻ� ����
   

    ifstream readFile;
    readFile.open("text.txt"); // �ؽ�Ʈ ���� �о����
    vector<string> strList; // ������ Ÿ���� ���ڿ��� ������ ���

    if (readFile.is_open())
    {
        while (!readFile.eof())
        {
            string str;
            getline(readFile, str);
            strList.push_back(str); // �� �پ� �о ���ڿ� �迭�� ���
        }

        for (int i = 0; i < strList.size(); i++) { // ���ڿ� �迭�� ���鼭
            if (strList[i].find("{") or strList[i].find("}")) // ���ڿ����� {,}�� ã����
            {
                stack.Push(i); // �ε��� ��ȣ�� ���ÿ� �ֱ�
                   // ���� �ǵ��� ����: 0,3,5,7,9�� �����
                   // ����: 0,1,2,3,4,5,6,7,8,9 �����
            }
        }
    }
    readFile.close();
}*/