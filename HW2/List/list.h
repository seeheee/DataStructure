#define MAX 100

class listClass {
public:
	listClass(); // ����Ʈ ������
	~listClass();// ����Ʈ �Ҹ���
	void Insert(int Position, int Item); //����Ʈ ���� �ֱ�
	void Delete(int Position); // ����Ʈ ���� ����
	int Retrieve(int Position); //����Ʈ ���� ��ȯ
	bool IsEmpty(); // ����Ʈ�� ����ִ��� Ȯ��(������ ��ȯŸ��:bool��)
	int Length(); // 
private: // �迭�� �����ؼ� ����
	int Count;
	int Data[MAX];
};

class stackClass {
public:
	stackClass(); // ����Ŭ���� ������
	~stackClass(); // ���� Ŭ���� �Ҹ���
	void Push(int Item); // ���ÿ� ���� �ֱ�
	void Pop(); // ���ÿ��� �� ������ ���� ������
	bool IsEmpty(); // ������ ����ִ��� Ȯ��(������ ��ȯŸ��:bool��)
	bool IsFull(); // ������ ���� �� �ִ��� Ȯ��(������ ��ȯŸ��:bool��)
private:
	listClass L; // ����ũ Ŭ���� ��ü�� ����
};

class queueClass {
public:
	queueClass(); // ťŬ���� ������
	~queueClass(); // ťŬ���� �Ҹ���
	void Add(int Item); // ť�� ���� �ֱ�
	void Remove(); // ť���� �� �� ���� ���� (pop(0))
	bool IsEmpty(); // ť�� ����ִ��� Ȯ��
	bool IsFull(); // ť�� ���� �� �ִ��� Ȯ��(������ ��ȯŸ��:bool��)
private:
	listClass L; // ����ũ Ŭ���� ��ü�� ����
};