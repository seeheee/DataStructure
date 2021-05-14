#define MAX 100

class listClass {
public:
	listClass(); // 리스트 생성자
	~listClass();// 리스트 소멸자
	void Insert(int Position, int Item); //리스트 원소 넣기
	void Delete(int Position); // 리스트 원소 삭제
	int Retrieve(int Position); //리스트 원소 반환
	bool IsEmpty(); // 리스트가 비어있는지 확인(데이터 반환타입:bool형)
	int Length(); // 
private: // 배열을 선택해서 구현
	int Count;
	int Data[MAX];
};

class stackClass {
public:
	stackClass(); // 스택클래스 생성자
	~stackClass(); // 스택 클래스 소멸자
	void Push(int Item); // 스택에 원소 넣기
	void Pop(); // 스택에서 맨 마지막 원소 꺼내기
	bool IsEmpty(); // 스택이 비어있는지 확인(데이터 반환타입:bool형)
	bool IsFull(); // 스택이 가득 차 있는지 확인(데이터 반환타입:bool형)
private:
	listClass L; // 리스크 클래스 객체가 변수
};

class queueClass {
public:
	queueClass(); // 큐클래스 생성자
	~queueClass(); // 큐클래스 소멸자
	void Add(int Item); // 큐에 원소 넣기
	void Remove(); // 큐에서 맨 앞 원소 빼기 (pop(0))
	bool IsEmpty(); // 큐가 비어있는지 확인
	bool IsFull(); // 큐가 가득 차 있는지 확인(데이터 반환타입:bool형)
private:
	listClass L; // 리스크 클래스 객체가 변수
};