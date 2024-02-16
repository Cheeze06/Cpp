// namespace

// C++의 네임스페이스(namespace)는 코드의 모듈화와 이름 충돌을 방지하기 위한 기능이다.
// 프로그램의 다양한 요소들을 분리하여 구분짓고,
// 서로 다른 영역에서 다른 이름을 가진 요소들이 충돌하지 않도록 도와준다.

//#include <iostream>
//
//namespace Best {
//	void Func(void) {
//		std::cout << "Best가 정의한 함수다." << std::endl;
//	}
//}
//
//namespace Prog {
//	void Func(void) {
//		std::cout << "Prog가 정의한 함수다." << std::endl;
//	}
//}
//
//int main()
//{
//	Best::Func();
//	Prog::Func();
//	//std도 namespace에 속해있다!
//}

//#include <iostream>
//
//// 수학 연산을 위한 네임스페이스
//namespace MathOperations {
//	int add(int a, int b) {
//		return a + b;
//	}
//	int subtract(int a, int b) {
//		return a - b;
//	}
//}
//
//// 출력 관련 기능을 위한 네임스페이스
//namespace Output {
//	void displayResult(int result) {
//		std::cout << "Result: " << result << std::endl;
//	}
//}
//
//int main()
//{
//	int x = 10, y = 5;
//	int sum = MathOperations::add(x, y);
//	int difference = MathOperations::subtract(x, y);
//
//	Output::displayResult(sum);
//	Output::displayResult(difference);
//}

//#include <iostream>
//#include <string>
//
//namespace Math {
//	int multiply(int a, int b) {
//		return a * b;
//	}
//}
//
//namespace Text {
//	std::string multiply(std::string str, int b) {
//		std::string result;
//		for (int i = 0; i < b; ++i) {
//			result += str + " ";
//		}
//		return result;
//	}
//}
//
//int main()
//{
//	int num1 = 5, num2 = 3;
//	std::string text = "Hello";
//
//	int mathResult = Math::multiply(num1, num2);
//	std::cout << "Math result: " << mathResult << std::endl;
//
//	std::string TextResult = Text::multiply(text, num1);
//	std::cout << "Test result: " << TextResult << std::endl;
//}

// Using 선언 : 
// 특정 범위 내에서 특정 식별자를 사용하도록 지정하는데 사용된다.
// 특정 멤버만을 현재 범위로 가져오는데 도움이 된다.

//#include <iostream>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	
//	cout << "Hello world" << endl;
//}

#include <iostream>

namespace A {
	int value = 5;
	void display() {
		std::cout << "Value from namespace A " << value << std::endl;
	}
}

namespace B {
	int value = 10;
	void display() {
		std::cout << "Value from namespace B " << value << std::endl;
	}
}

int main()
{
	

	// 1. using 지시어를 사용하여 namespace A의 value를 현재 범위로 가져오시오.
	using namespace A;

	// 2. using 선언을 사용하여 namespace의 B의 display 함수를 현재 범위로 가져오시오.
	using B::display;

	// 3. 다음에 들어갈 value는 어떤 value가 나오나 생각해 보시오.
	std::cout << "Value in main: " << value << std::endl;

	// 4. namespace A의 display 함수와 namespace B의 display 함수를 각각 호출하시오.
	display();
	A::display();
}