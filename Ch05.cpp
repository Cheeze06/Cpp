#include <iostream>
using namespace std;

// true / false Ű������ ����

//int main()
//{
//	cout << "true: " << true << endl;
//	cout << "false: " << false << endl;
//	cout << "sizeof 1: " << sizeof(1) << endl;
//	cout << "sizeof 0: " << sizeof(0) << endl;
//	cout << "sizeof true: " << sizeof(true) << endl;
//	cout << "sizeof false: " << sizeof(false) << endl;
//}

// bool �ڷ���

//bool IsPositive(int num) {
//	if (num < 1) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//int main()
//{
//	bool isPos;
//	int num;
//	cout << "input number ";
//	cin >> num;
//
//	isPos = IsPositive(num);
//	if (isPos) {// true�� false��
//		cout << "��" << endl;
//	}
//	else {
//		cout << "����" << endl;
//	}
//}

// ������

// C++���� ������(Reference)�� ������ �ٸ� �̸��� �����ϴ� ��� �� �ϳ��̴�.
// �����Ϳ� ����� ���������� ������ ���� ��Ŀ��� ���̰� �ִ�.
// �����ڴ� �⺻ ������ ��Ī���� �ۿ��ϸ� ������ �޸� �ּҸ� ���� �ٷ��� �ʰ� �����ϰ� �ٸ� ������ ������ �� �ִ�.

// �������� �ֿ� Ư¡]

// 1. ������ ��Ī	: ���� ������ ��Ī���� �����Ѵ�.
//					  �����ڸ� ���� ������ �����ϸ� ������ �� ������ �����ϴ� �Ͱ� ���� ȿ���� �߻��Ѵ�.

// 2. ����� �ʱ�ȭ	: �����ڴ� ����� ���ÿ� �ݵ�� �ʱ�ȭ�Ǿ�� �Ѵ�.
//					  �ѹ� �����Ǵ� ������ ��� �����ؾ� �ϹǷ�, �ʱ�ȭ ���� ���� �����ڸ� ���� �� ����.

// 3. �޸� �ּ� ���� ���	: �����Ϳ� �޸� �����ڴ� �޸� �ּҸ� ������� �ʴ´�.
//							  �����ڸ� ���� �Ǽ��� �߸��� �޸� ��ġ�� �����ϴ� ������ �������ش�.

// 4. ������ Ȱ��	: �����ڸ� ����� ���� ������ ������(*)�� ������� �ʰ�, �Ϲ� ����ó�� ��� �����ϴ�.\

//int original = 42;
//int& reference = original;	// ������ ���� �� �ʱ�ȭ
//reference = 73;				// �����ڸ� ���� ���� �����ϸ� ���� ������ ����

// int& �� C++���� ������(int) ������ ���� ������(reference)�� ��Ÿ����.
// int��� ������ Ÿ���� ������ ���� ������ ����� ���� �ǹ��ϸ�, ���������� ������ �� �ִ� ����� �����Ѵ�.

// ������ �⺻ ��Ģ
// 1) ������� �Ұ��� (int& ref = 20) X
// 2) �����ڴ� �ٷ� �ʱ�ȭ�ؾ��Ѵ�.
// 3) �����ڴ� NULL�� �ʱ�ȭ�ؼ��� �ȵȴ�.

//int main()
//{
//	int num = 12; 
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;		// ref ��� num�� ���� ������ �����Ѵ�. ref�� num�� ����Ų��.
//	int* (&pref) = ptr; // pref��� ptr�� ���� ������ �����Ѵ�. pref�� ptr�� ����Ų��.
//	int** (&dpref) = dptr;	// dpref��� dptr ���� ������ �����Ѵ�. dpref�� dptr�� ����Ų��.
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//}

//int main()
//{
//	int arr[3] = { 1,3,5 };
//	int& ref1 = arr[0];
//	int& ref2 = arr[1];
//	int& ref3 = arr[2];
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//}

// �����ڸ� ����ϸ� �Լ� ���ο��� �Ű������� ���� ����� �� �ִ�.
// �̸� ����ϸ� �Լ��� ���� ��ȯ�ϴ� �� �̿ܿ��� ���� �����ϴ� �������� ����� �� �ִ�.

//int add(int a, int b) {
//	return a + b;
//}
//
//int main()
//{
//	int x = 5;
//	int y = 7;
//	int sum = add(x, y);
//	cout << "Sum: " << sum << endl;
//}

// �� ���� ������ �޾Ƽ� ���� ��, �� ����� �ϳ��� �Ű������� ���� ��ȯ�ϰڴ�.
// ���� �������� �ʰ�, ����� ��ȯ

//void add(int& a, int& b)
//{
//	a = a + b;
//}
//
//int main()
//{
//	int x = 5;
//	int y = 7;
//	add(x, y);
//	cout << "x: " << x << endl;
//}

// add �Լ��� ù ��° �Ű����� a�� ������ �޾Ƶ��̰�, �� ���� �����Ѵ�.
// �Լ��� ȣ���ϸ� x�� ���� y�� ��ŭ �����Ǿ� ��µȴ�.

//int Value(int& x) {
//	x = 10;
//	return x;
//}
//
//int main()
//{
//	int x = 5;
//	cout << "�ٲ����: " << x << endl;
//
//	Value(x);
//	cout << "�ٲ� ��: " << x << endl;
//}

// Main �Լ��� �����Ͽ� ���� �䱸���׿� �����ϴ� �Լ��� ���� �����Ͽ���
// �Լ��� �Ű������� ������������ �Ѵ�.
//	-> ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
//	-> ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ� (+�̸� -��, -�̸� +��)

//void AddOne(int& num) {
//	num++;
//}
//
//void CodeChange(int& num) {
//	num = -num;	// �ݴ� ��ȣ�� ���� ������ �ٲٰ� �ȴ�.
//}
//
//int main()
//{
//	int num = 10;
//	AddOne(num);
//	cout << num << endl;
//	CodeChange(num);
//	cout << num << endl;
//	CodeChange(num);
//	cout << num << endl;
//
//	return 0;
//}

// �迭�� �޾Ƽ� ��� ����� ���� 2��� �����ϴ� �Լ��� �ۼ��غ��ÿ�.
// (�迭�� �����ڷ� ������ �迭 ���� ���� ���� �����ǵ��� �Ͻÿ�.)

//void doubleArrayElements(int* a, int b) {
//	for (int i = 0; i < b; ++i) {
//		a[i] *= 2;
//	}
//}
//
//int main()
//{
//	int numbers[] = { 1,2,3,4,5,6,7,100 };
//	// ���� size�� ����ÿ�
//	int size = sizeof(numbers)/4;
//
//	cout << sizeof(numbers);
//
//	std::cout << "Original Array: ";
//	for (int i = 0; i < size; ++i) {
//		std::cout << numbers[i] << " ";
//	}
//	std::cout << std::endl;
//
//	//doubleArrayElements�� �����Ͻÿ�
//	doubleArrayElements(numbers, size);
//
//	std::cout << "Modified Array: ";
//	for (int i = 0; i < size; ++i) {
//		std::cout << numbers[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}

//#include <string.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//char* MakeStrAdr(int len) {
//	char* str = (char*)malloc(sizeof(char)* len);
//}
//
//int main()
//{
//	char* str = MakeStrAdr(20);
//	strcpy(str, "I'm so happy");
//	cout << str << endl;
//	free(str);
//}

// ������ : 

// 1. ������ ����Ʈ ũ������� �����ؾ� �Ѵ�.
// 2. ��ȯ���� void�� �����ͱ� ������ ������ ��ȯ�� ����� �Ѵ�.

// new & delete

// �� ���°�?

// 1. �ڷ��� ������(Type Safety)
// new : ��ü�� �����ڸ� ȣ���� �ʱ�ȭ�ϹǷ� �ڷ��� �������� ����.
//		 ��ü�� ������ �� ������ �����ڰ� ȣ��Ǳ� ������ �ʱ�ȭ ������ �����Ѵ�.
// malloc : �޸� ���� �Ҵ縸 ���ش�. �ʱ�ȭ �۾� X
//			�̷����� �ʱ�ȭ���� ���� �޸𸮸� ����ϰų�, ��ü�� ����� �ʱ�ȭ���� �ʴ� ������ �߻��Ѵ�.


// 2. �����ε��� new ������
// new : Ŭ������ �°� ����� ���ǰ� �����ϴ�.
//		 new �����ڸ� �����ε��Ͽ� �޸� �Ҵ� �� �ʱ�ȭ�۾��� ����ڰ� ������� �� �� �ִ�.


// 3. ����ó��
// new	  : �޸� �Ҵ翡 ������ ��� ���ܸ� �˾Ƽ� �����ش�.
// malloc : NULL �����͸� ��ȯ�� ���α׷��Ӱ� ���� �Ҵ� ���и� Ȯ���ϰ� ó���ؾ� �Ѵ�.


// 4. �迭�Ҵ�
// new	  : �� ��ü�� �����ڸ� ȣ���� �ʱ�ȭ�� �� �ִ�.
//			�迭 ��ҵ��� ��Ȯ�ϰ� �ʱ�ȭ�ϴµ� ������ �ش�.
// malloc : ���� ��ҵ��� �ʱ�ȭ�� �۾��� ����

// 2���� �迭 �����Ҵ� ��, ���� ���Ƿ� ���� �ް� ���� �ϳ��ϳ� ���� �� �ְ� �Ǵ� ���α׷��� �����Ͻÿ�.

int main()
{
	int row=0, col=0;

	cout << "���� ������ �Է��ϼ��� ";
	cin >> row;
	cout << "���� ������ �Է��ϼ��� ";
	cin >> col;

	int **arr = new int*[row];
	for (int i = 0; i < col; ++i) {
		arr[i] = new int[col];
	}

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << "�� " << i << "�� " << j << "�� ���� �Է��ϼ���. ";
			cin >> arr[i][j];
		}
	}

	cout << "�Է��� ��: \n";
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}