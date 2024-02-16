#include <iostream>
using namespace std;

// true / false 키워드의 존재

//int main()
//{
//	cout << "true: " << true << endl;
//	cout << "false: " << false << endl;
//	cout << "sizeof 1: " << sizeof(1) << endl;
//	cout << "sizeof 0: " << sizeof(0) << endl;
//	cout << "sizeof true: " << sizeof(true) << endl;
//	cout << "sizeof false: " << sizeof(false) << endl;
//}

// bool 자료형

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
//	if (isPos) {// true냐 false냐
//		cout << "참" << endl;
//	}
//	else {
//		cout << "거짓" << endl;
//	}
//}

// 참조자

// C++에서 참조자(Reference)는 변수의 다른 이름을 생성하는 방법 중 하나이다.
// 포인터와 비슷한 개념이지만 사용법과 동작 방식에서 차이가 있다.
// 참조자는 기본 변수의 별칭으로 작용하며 변수의 메모리 주소를 직접 다루지 않고 간단하게 다른 변수에 연결할 수 있다.

// 참조자의 주요 특징]

// 1. 변수의 별칭	: 기존 변수의 별칭으로 동작한다.
//					  참조자를 통해 변수에 접근하면 실제로 그 변수에 접근하는 것과 같은 효과가 발생한다.

// 2. 선언과 초기화	: 참조자는 선언과 동시에 반드시 초기화되어야 한다.
//					  한번 참조되는 변수를 계속 참조해야 하므로, 초기화 하지 않은 참조자를 만들 수 없다.

// 3. 메모리 주소 없이 사용	: 포인터와 달리 참조자는 메모리 주소를 사용하지 않는다.
//							  참조자를 통해 실수로 잘못된 메모리 위치를 참조하는 오류를 방지해준다.

// 4. 연산자 활용	: 참조자를 사용할 때는 포인터 연산자(*)을 사용하지 않고, 일반 변수처럼 사용 가능하다.\

//int original = 42;
//int& reference = original;	// 참조자 선언 및 초기화
//reference = 73;				// 참조자를 통한 값을 변경하면 원본 변수도 변경

// int& 는 C++에서 정수형(int) 변수에 대한 참조자(reference)를 나타낸다.
// int라는 데이터 타입의 벼수에 대한 참조를 만드는 것을 의미하며, 직접적으로 변경할 수 있는 기능을 제공한다.

// 참조자 기본 규칙
// 1) 상수에는 불가능 (int& ref = 20) X
// 2) 참조자는 바로 초기화해야한다.
// 3) 참조자는 NULL로 초기화해서는 안된다.

//int main()
//{
//	int num = 12; 
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;		// ref 라는 num의 참조 변수를 선언한다. ref는 num을 가리킨다.
//	int* (&pref) = ptr; // pref라는 ptr의 참조 변수를 선언한다. pref는 ptr을 가리킨다.
//	int** (&dpref) = dptr;	// dpref라는 dptr 참조 변수를 선언한다. dpref는 dptr을 가리킨다.
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

// 참조자를 사용하면 함수 내부에서 매개변수의 값이 변경될 수 있다.
// 이를 사용하면 함수가 값을 반환하는 것 이외에도 값을 수정하는 목적으로 사용할 수 있다.

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

// 두 개의 정수를 받아서 더한 후, 그 결과를 하나의 매개변수를 통해 반환하겠다.
// 값을 변경하지 않고, 결과만 반환

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

// add 함수는 첫 번째 매개변수 a를 참조로 받아들이고, 그 값을 수정한다.
// 함수를 호출하면 x의 값이 y값 만큼 증가되어 출력된다.

//int Value(int& x) {
//	x = 10;
//	return x;
//}
//
//int main()
//{
//	int x = 5;
//	cout << "바뀌기전: " << x << endl;
//
//	Value(x);
//	cout << "바뀐 후: " << x << endl;
//}

// Main 함수를 참고하여 다음 요구사항에 부합하는 함수를 각각 정의하여라
// 함수의 매개변수는 참조자형으로 한다.
//	-> 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
//	-> 인자로 전달된 int형 변수의 부호를 바꾸는 함수 (+이면 -로, -이면 +로)

//void AddOne(int& num) {
//	num++;
//}
//
//void CodeChange(int& num) {
//	num = -num;	// 반대 부호를 가진 값으로 바꾸게 된다.
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

// 배열을 받아서 모든 요소의 값을 2배로 변경하는 함수를 작성해보시오.
// (배열은 참조자로 전달해 배열 내의 값이 직접 수정되도록 하시오.)

//void doubleArrayElements(int* a, int b) {
//	for (int i = 0; i < b; ++i) {
//		a[i] *= 2;
//	}
//}
//
//int main()
//{
//	int numbers[] = { 1,2,3,4,5,6,7,100 };
//	// 변수 size를 만드시오
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
//	//doubleArrayElements를 구현하시오
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

// 문제점 : 

// 1. 무조건 바이트 크기단위로 전달해야 한다.
// 2. 반환형이 void형 포인터기 때문에 적절한 반환을 해줘야 한다.

// new & delete

// 왜 쓰는가?

// 1. 자료형 안전성(Type Safety)
// new : 객체의 생성자를 호출해 초기화하므로 자료형 안정성이 높다.
//		 객체가 생성될 때 적절한 생성자가 호출되기 때문에 초기화 문제를 방지한다.
// malloc : 메모리 블럭을 할당만 해준다. 초기화 작업 X
//			이로인해 초기화되지 않은 메모리를 사용하거나, 객체가 제대로 초기화되지 않는 문제가 발생한다.


// 2. 오버로딩된 new 연산자
// new : 클래스에 맞게 사용자 정의가 가능하다.
//		 new 연산자를 오버로딩하여 메모리 할당 및 초기화작업을 사용자가 마음대로 할 수 있다.


// 3. 예외처리
// new	  : 메모리 할당에 실패할 경우 예외를 알아서 던져준다.
// malloc : NULL 포인터를 반환해 프로그래머가 직접 할당 실패를 확인하고 처리해야 한다.


// 4. 배열할당
// new	  : 각 객체의 생성자를 호출해 초기화할 수 있다.
//			배열 요소들을 정확하게 초기화하는데 도움을 준다.
// malloc : 개별 요소들을 초기화해 작업이 복잡

// 2차원 배열 동적할당 행, 열은 임의로 값을 받고 숫자 하나하나 받을 수 있게 되는 프로그램을 구현하시오.

int main()
{
	int row=0, col=0;

	cout << "행의 개수를 입력하세요 ";
	cin >> row;
	cout << "열의 개수를 입력하세요 ";
	cin >> col;

	int **arr = new int*[row];
	for (int i = 0; i < col; ++i) {
		arr[i] = new int[col];
	}

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << "행 " << i << "열 " << j << "의 값을 입력하세요. ";
			cin >> arr[i][j];
		}
	}

	cout << "입력한 값: \n";
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}