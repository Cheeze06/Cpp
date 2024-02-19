#include <iostream>
using std::cout;
using std::endl;

// 함수 오버로딩

// C언어에서는 다음고 같이 동일한 이름이 함수가 정의되는 것을 허용하지 않는다.
// 두 함수의 이름이 같기 때문에 컴파일 오류가 발생한다.

//#include <stdio.h>
//int Myfunc(int num) {
//	num++;
//	return num;
//}
//
//int Myfunc(int num1, int num2) {
//	return num1 + num2;
//}
//
//int main() {
//	printf("%d\n", Myfunc(20));
//	printf("%d\n", Myfunc(30, 40));
//
//}

// 함수 호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하기 때문에
// 매개변수의 선언 형태가 다르다면, 동일한 이름의 함수정의를 허용할 수 있다. C++은 허용하고 있다.

//#include <iostream>
//using std::cout;
//using std::endl;
//
//// 정수형 매개변수를 받는 함수 오버로딩
//void printNumber(int num) {
//	cout << "정수 : " << num << endl;
//}
//
//// 실수형 매개변수를 받는 함수 오버로딩
//void printNumber(double num) {
//	cout << "실수 : " << num << endl;
//}
//
//// 문자열 매개변수를 받는 함수 오버로딩
//void printNumber(const char* str) {
//	cout << "문자열 : " << str << endl;
//}
//
//int main()
//{
//	printNumber(5);
//	printNumber(3.14);
//	printNumber("Hello");
//}

// 문제:
// 다음과 같은 기능을 수행하는 calculate 함수를 오버로딩을 이용하여 구현하시오.

// 정수 2개를 입력받아 더한 결과를 반환하는 함수
// 정수 3개를 입력받아 곱한 결과를 반환하는 함수
// 실수 2개를 입력받아 평균을 계산하여 반환하는 함수
// main 함수에서 각각의 오버로딩된 버전을 호출하여 결과를 출력해보세요.

//#include <iostream>
//using std::cout;
//using std::endl;
//
//int calculate(int a, int b) {
//	return a + b;
//}
//
//int calculate(int a, int b, int c) {
//	return a*b*c;
//}
//
//double calculate(double a, double b) {
//	return (a + b) / 2;
//}
//
//int main()
//{
//	int sumResult = calculate(5, 3);
//	int productResult = calculate(2, 4, 3);
//	double averageResult = calculate(3.5, 7.2);
//
//	cout << "정수 2개 더하기 결과: " << sumResult << endl;
//	cout << "정수 3개 곱하기 결과: " << productResult << endl;
//	cout << "실수 2개 평균 결과: " << averageResult << endl;
//}

// 매개변수의 디폴트값

// C++에서 함수를 정의할 때, 매개변수에 기본값을 설정하는 것을 "매개변수 디폴트값" 이라고 한다.
// 함수를 호출할 때 해당 매개변수에 값을 전달하지 않아도 자동으로 사용된다.

//void printNumber(int number = 10) {
//	cout << "Number: " << number << endl;
//}
//int main()
//{
//	printNumber();
//	printNumber(20);
//}

// 위의 예시 코드에서 printNumber 함수는 number라는 매개변수를 가지며,
// 매개변수의 디폴트 값으로 10을 설정 했다.
// 함수를 호출할 때 매개변수를 전달하지 않으면 기본값인 10이 사용된다.

// C++에서 매개변수 디폴트값은 함수 정의 부분에서만 지정할 수 있다.
// 함수 선언 부분에서는 매개변수의 디폴트값을 지정할 수 없다.
// 매개변수 디폴트값이 있는 매개변수들은 항상 함수의 맨 뒤에 위치해야 한다.

// 함수 정의시 매개변수 디폴트값 설정
//void printMessageAndNumber(const char* message, int number = 0) {
//	cout << "Message : " << message << ", Number: " << number << endl;
//}
//
//int main()
//{
//	printMessageAndNumber("Hello");
//	printMessageAndNumber("World", 42);
//}

// 매개변수 중 하나에만 디폴트값을 설정할 수 있고, 여러 매개변수에 모두 디폴트값을 설정할 수도 있다.

//문제:
// 함수 calculate_cost는 물품의 가격과 수량을 인자로 받아서 총 비용을 계산하는 함수입니다.
// 수량이 주어지지 않으면 수량은 1로 간주합니다. 이 함수를 정의하고 테스트해보세요.

// 물품의 가격입력 > 수량입력(입력X -> 수량 1로 간주) -> 사용자가 입력한 값 또는 디폴트 값을 이용하여 총 비용 계산

//int calculate_cost(int a, int b = 1) {
//	return a * b;
//}
//
//int main() {
//	int prise, cost;
//	cout << "물품의 가격을 입력하세요: " << endl;
//	std::cin >> prise;
//	cout << "물품의 수를 입력하세요: " << endl;
//	std::cin >> cost;
//
//	cout << "\n총 비용 : " << calculate_cost(prise, cost) << endl;
//
//	return 0;
//}

