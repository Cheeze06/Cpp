#include <iostream>
using namespace std;
// C++ 함수 오버라이딩

// 상속 관계에 있는 클래스 간에 부모 클래스의 멤버 함수를 자식 클래스에서 재정의하는 것을 말한다.
// 자식 클래스는 부모 클래스의 동작을 변경하거나 확장할 수 있다.
// 
// C++에서 함수 오버라이딩을 사용하려면 다음 규칙을 따라야 함.
// 
// 1. 상속관계 : 함수 오버라이딩을 하려면 부모 ㅋ르래스와 자식 클래스 사이에 상속 관계가 있어야 한다.
// 
// 2. 함수 시그니처 동일성 : 자식 클래스에서 오버라이딩하는 함수의 시그니처
// (함수이름, 매개변수 타입 및 개수, 반환타입)은 부모 클래스의 함수와 동일해야 한다.
// 
// 3. 가상 함수 선언 : 부모 클래스에서 오버라이딩을 허용하려면 부모 클래스에서 해당 함수를 가상 함수로 선언해야 한다,
// C++에서는 vitual 키워드를 사용하여 가상 함수를 선언할 수 있다.

//class Animal {
//public:
//	virtual void Sound() {
//		cout << "동물이 소리를 낸다." << endl;
//	}
//};
//
//class cat : public Animal {
//public:
//	void Sound() override {
//		cout << "야옹" << endl;
//	}
//};
//
//class dog : public Animal {
//public:
//	void Sound() override {
//		cout << "멍멍" << endl;
//	}
//};
//
//int main()
//{
//	Animal* Catptr = new cat();
//	Animal* Dogptr = new dog();
// 
//  // 여기서 정의된 객체들은 Animal 클래스의 포인터이기 때문에
//  // Animal 클래스에 정의된 멤버 함수에만 직접 접근할 수 있음
//  // ㄴ> cat클래스에 정의된 함수들은 사용 X
//
//	Catptr->Sound();
//	Dogptr->Sound();
//
//	delete Catptr;
//	delete Dogptr;
// 
//}


// 문제
// main의 내용을 확인해 실행결과를 보고 구현하시오

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
//	cout << "더하기: " << addCalc->calculate(5, 3) << endl;
//	cout << "빼기: " << subCalc->calculate(10, 4) << endl;
//
//	delete addCalc;
//	delete subCalc;
//}

// C++의 예외처리
//
// 예외 처리: 프로그램 실행 중에 발생할 수 있는 예기치 않은 상황 또는 오류를 처리하는 매커니즘이다.
// 비정상적으로 종료되는것을 방지하고, 오류가 발생할 시 프로그램의 흐름을 제어하고 복구할 수 있다.
// C++ 예외처리는 try, catch, throw, finally
// 
// try 블록: 예외가 발생할 수 있는 코드 블록을 try 블록 내에 배치한다.
// 블록 안에서 예외가 발생할 시 적절한 catch 블록으로 이동시킨다.
// 
// catch 블록: try 블록에서 발생한 예외를 처리하는 블록이다.
// 하나 이상의 catch 블록을 사용하여 다양한 종류의 예외를 청리할 수 있다.
// 
// throw: 예외를 발생시키는데 사용되며 throw 키워드 다음에 발생시킬 예외 객체를 지정한다.
// 
// finally : C++에서는 공식적으로 finally 블록이 있다.

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
//			throw runtime_error("0으로 나눌 수 없습니다.");
//		}
//		int result = 10 / a;
//		cout << "Result: " << result << endl;
//	}
//	catch (const std::exception& e) {
//		cerr << "어떤 오류인가: " << e.what() << endl;
//	}
//}

// 템플릿
// 그냥 JAVA Generic이랑 똑같음 ㅅㅂㅋㅋ
// 실무에서 앵간하면 이거만 쓴다.

// 함수나 클래스를 작성할 때 특정한 데이터 형식에 의존하지 않고 일반적인 형식으로 코드를 작성할 수 있다.
// 이를 통해 코드의 재사용성과 유연성을 크게 향상시킨다,.

// 템플릿은 크게 두가지 유형으로 나뉜다.
// 1. 함수 템플릿
// 2. 클래스 템플릿


//// 함수 템플릿
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
//	// 템플릿을 2개 만들었기 때문에
//	// 각각 달라도 상관 X
//	swapValues(a, d);
//	// 템플릿을 1개만 썻다면 오류 생김
//
//	cout << a << " " << b << endl;
//	cout << c << " " << d << endl;
//	cout << a << " " << d << endl;
//}

//// 클래스 템플릿:
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


// 문제 : 템플릿 함수 findMax를 작성하시오

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

// STL : 라이브러리 일부

// 세가지 구성요소
// 1. 컨테이너	: 데이터를 저장하는 객체, 다양한 종류의 컨테이너가 있으며 특정한 데이터 구조를 나타낸다. (vector, list, set, map)
// set : 각 요소는 중복 X, 정렬된 상태를 유지한다. -> 요소를 삽입할 때 자동으로 정렬되므로 이진검색 트리를 기반으로 구현한다.
// map : 정렬된 키-값 쌍의 컨테이너.	-> 딕셔너리	-> 이진 검색 트리를 기반으로 만들어 낸다.
// vector : 자동으로 메모리가 할당되는 배열		-> 자료구조 스택(FIFO)과 비슷한 느낌
// 
// 2. 반복자		: 컨테이너의 요소를 순회하거나 특정 요소에 접근할 수 있게 된다.
// 
// 3. 알고리즘	: 데이터 처리를 위한 함수들의 모임, 정렬알고리즘, 이진 검색 알고리즘

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