#include <iostream>
using namespace std;
// C++ �Լ� �������̵�

// ��� ���迡 �ִ� Ŭ���� ���� �θ� Ŭ������ ��� �Լ��� �ڽ� Ŭ�������� �������ϴ� ���� ���Ѵ�.
// �ڽ� Ŭ������ �θ� Ŭ������ ������ �����ϰų� Ȯ���� �� �ִ�.
// 
// C++���� �Լ� �������̵��� ����Ϸ��� ���� ��Ģ�� ����� ��.
// 
// 1. ��Ӱ��� : �Լ� �������̵��� �Ϸ��� �θ� ���������� �ڽ� Ŭ���� ���̿� ��� ���谡 �־�� �Ѵ�.
// 
// 2. �Լ� �ñ״�ó ���ϼ� : �ڽ� Ŭ�������� �������̵��ϴ� �Լ��� �ñ״�ó
// (�Լ��̸�, �Ű����� Ÿ�� �� ����, ��ȯŸ��)�� �θ� Ŭ������ �Լ��� �����ؾ� �Ѵ�.
// 
// 3. ���� �Լ� ���� : �θ� Ŭ�������� �������̵��� ����Ϸ��� �θ� Ŭ�������� �ش� �Լ��� ���� �Լ��� �����ؾ� �Ѵ�,
// C++������ vitual Ű���带 ����Ͽ� ���� �Լ��� ������ �� �ִ�.

//class Animal {
//public:
//	virtual void Sound() {
//		cout << "������ �Ҹ��� ����." << endl;
//	}
//};
//
//class cat : public Animal {
//public:
//	void Sound() override {
//		cout << "�߿�" << endl;
//	}
//};
//
//class dog : public Animal {
//public:
//	void Sound() override {
//		cout << "�۸�" << endl;
//	}
//};
//
//int main()
//{
//	Animal* Catptr = new cat();
//	Animal* Dogptr = new dog();
// 
//  // ���⼭ ���ǵ� ��ü���� Animal Ŭ������ �������̱� ������
//  // Animal Ŭ������ ���ǵ� ��� �Լ����� ���� ������ �� ����
//  // ��> catŬ������ ���ǵ� �Լ����� ��� X
//
//	Catptr->Sound();
//	Dogptr->Sound();
//
//	delete Catptr;
//	delete Dogptr;
// 
//}


// ����
// main�� ������ Ȯ���� �������� ���� �����Ͻÿ�

//class Calculator {
//public:
//	virtual int calculate(int a, int b) {
//		return 0;
//	}
//};
//
//class AddCalculator : public Calculator {
//	int calculate(int a, int b) override {
//		return a + b;
//	}
//};
//
//class SubtractCalculator : public Calculator {
//	int calculate(int a, int b) override {
//		return a - b;
//	}
//};
//
//int main() {
//	Calculator* addCalc = new AddCalculator();
//	Calculator* subCalc = new SubtractCalculator();
//
//	cout << "���ϱ�: " << addCalc->calculate(5, 3) << endl;
//	cout << "����: " << subCalc->calculate(10, 4) << endl;
//
//	delete addCalc;
//	delete subCalc;
//}

// C++�� ����ó��
//
// ���� ó��: ���α׷� ���� �߿� �߻��� �� �ִ� ����ġ ���� ��Ȳ �Ǵ� ������ ó���ϴ� ��Ŀ�����̴�.
// ������������ ����Ǵ°��� �����ϰ�, ������ �߻��� �� ���α׷��� �帧�� �����ϰ� ������ �� �ִ�.
// C++ ����ó���� try, catch, throw, finally
// 
// try ���: ���ܰ� �߻��� �� �ִ� �ڵ� ����� try ��� ���� ��ġ�Ѵ�.
// ��� �ȿ��� ���ܰ� �߻��� �� ������ catch ������� �̵���Ų��.
// 
// catch ���: try ��Ͽ��� �߻��� ���ܸ� ó���ϴ� ����̴�.
// �ϳ� �̻��� catch ����� ����Ͽ� �پ��� ������ ���ܸ� û���� �� �ִ�.
// 
// throw: ���ܸ� �߻���Ű�µ� ���Ǹ� throw Ű���� ������ �߻���ų ���� ��ü�� �����Ѵ�.
// 
// finally : C++������ ���������� finally ����� �ִ�.

//int main() {
//	//int a = 1;
//	//int b = 0;
//
//	//int result = a / b;
//	//cout << "result: " << result << endl;
//	try
//	{
//		int a = 0;
//		if (a == 0) {
//			throw runtime_error("0���� ���� �� �����ϴ�.");
//		}
//		int result = 10 / a;
//		cout << "Result: " << result << endl;
//	}
//	catch (const std::exception& e) {
//		cerr << "� �����ΰ�: " << e.what() << endl;
//	}
//}

// ���ø�
// �׳� JAVA Generic�̶� �Ȱ��� ��������
// �ǹ����� �ް��ϸ� �̰Ÿ� ����.

// �Լ��� Ŭ������ �ۼ��� �� Ư���� ������ ���Ŀ� �������� �ʰ� �Ϲ����� �������� �ڵ带 �ۼ��� �� �ִ�.
// �̸� ���� �ڵ��� ���뼺�� �������� ũ�� ����Ų��,.

// ���ø��� ũ�� �ΰ��� �������� ������.
// 1. �Լ� ���ø�
// 2. Ŭ���� ���ø�


//// �Լ� ���ø�
//template <typename T, typename Y>
//void swapValues(T& a, Y& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	swapValues(a, b);
//
//	double c = 3.14;
//	double d = 5.98;
//	swapValues(c, d);
//
//	// ���ø��� 2�� ������� ������
//	// ���� �޶� ��� X
//	swapValues(a, d);
//	// ���ø��� 1���� ���ٸ� ���� ����
//
//	cout << a << " " << b << endl;
//	cout << c << " " << d << endl;
//	cout << a << " " << d << endl;
//}

//// Ŭ���� ���ø�:
//template <typename T>
//class Array {
//private:
//	T* array;
//	int size;
//public:
//	Array(int a) : size(a) {
//		array = new T[size];
//	}
//};

//template <typename T>
//T getMax(T a, T b) {
//	return(a > b) ? a : b;
//}
//
//int main()
//{
//	int intResult = getMax(5, 10);
//	cout << intResult << endl;
//
//	double doubleResult = getMax(3.14, 2.71);
//	cout << doubleResult << endl;
//}


// ���� : ���ø� �Լ� findMax�� �ۼ��Ͻÿ�

//template <typename T, typename Y>
//T fineMax(T* a, Y b, Y c) {
//	T max = NULL;
//	for (int i = 0; i < c; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//
//	return max;
//}
//
//int main() {
//	int intArr[] = { 5, 12, 7, 27, 8, 10 };
//	double doubleArr[] = { 3.14, 2.71, 1.718, 0.577 };
//
//	int intMax = fineMax(intArr, 0, 5);
//	int doubleMax = fineMax(doubleArr, 0, 3);
//
//	cout << "Max int: " << intMax << endl;
//	cout << "Max double: " << doubleMax << endl;
//}

// STL : ���̺귯�� �Ϻ�

// ������ �������
// 1. �����̳�	: �����͸� �����ϴ� ��ü, �پ��� ������ �����̳ʰ� ������ Ư���� ������ ������ ��Ÿ����. (vector, list, set, map)
// set : �� ��Ҵ� �ߺ� X, ���ĵ� ���¸� �����Ѵ�. -> ��Ҹ� ������ �� �ڵ����� ���ĵǹǷ� �����˻� Ʈ���� ������� �����Ѵ�.
// map : ���ĵ� Ű-�� ���� �����̳�.	-> ��ųʸ�	-> ���� �˻� Ʈ���� ������� ����� ����.
// vector : �ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭		-> �ڷᱸ�� ����(FIFO)�� ����� ����
// 
// 2. �ݺ���		: �����̳��� ��Ҹ� ��ȸ�ϰų� Ư�� ��ҿ� ������ �� �ְ� �ȴ�.
// 
// 3. �˰���	: ������ ó���� ���� �Լ����� ����, ���ľ˰���, ���� �˻� �˰���

#include <vector>
int main(void) {
	vector<int> v;

	//for (int i = 0; i < 64; i++) {
	//	v.push_back(i + 1);
	//	cout << "[" << v[i] << ", " << v.size() << "]" << endl;
	//}

	v.push_back(21);
	v.push_back(32);
	v.push_back(53);

	//for (int i = 0; i <3; i++) {
	//	cout << "[" << v[i] << ", " << v.size() << "]" << endl;
	//}

	v.pop_back();
	for (int i = 0; i < 3; i++) {
		cout << "[" << v[i] << ", " << v.size() << "]" << endl;
	}
 }