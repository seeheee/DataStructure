/*#include <iostream>
#include <string>
#include <vector>
#include"list.h"
#include <fstream>
using namespace std;

int main()
{
    stackClass stack; // 스택클래스 인스턴스 생성
   

    ifstream readFile;
    readFile.open("text.txt"); // 텍스트 파일 읽어오기
    vector<string> strList; // 데이터 타입이 문자열인 데이터 담기

    if (readFile.is_open())
    {
        while (!readFile.eof())
        {
            string str;
            getline(readFile, str);
            strList.push_back(str); // 한 줄씩 읽어서 문자열 배열에 담기
        }

        for (int i = 0; i < strList.size(); i++) { // 문자열 배열을 돌면서
            if (strList[i].find("{") or strList[i].find("}")) // 문자열에서 {,}을 찾으면
            {
                stack.Push(i); // 인덱스 번호를 스택에 넣기
                   // 내가 의도한 방향: 0,3,5,7,9이 담겨짐
                   // 실제: 0,1,2,3,4,5,6,7,8,9 담겨짐
            }
        }
    }
    readFile.close();
}*/