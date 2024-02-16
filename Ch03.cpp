// namespace

// C++�� ���ӽ����̽�(namespace)�� �ڵ��� ���ȭ�� �̸� �浹�� �����ϱ� ���� ����̴�.
// ���α׷��� �پ��� ��ҵ��� �и��Ͽ� ��������,
// ���� �ٸ� �������� �ٸ� �̸��� ���� ��ҵ��� �浹���� �ʵ��� �����ش�.

//#include <iostream>
//
//namespace Best {
//	void Func(void) {
//		std::cout << "Best�� ������ �Լ���." << std::endl;
//	}
//}
//
//namespace Prog {
//	void Func(void) {
//		std::cout << "Prog�� ������ �Լ���." << std::endl;
//	}
//}
//
//int main()
//{
//	Best::Func();
//	Prog::Func();
//	//std�� namespace�� �����ִ�!
//}

//#include <iostream>
//
//// ���� ������ ���� ���ӽ����̽�
//namespace MathOperations {
//	int add(int a, int b) {
//		return a + b;
//	}
//	int subtract(int a, int b) {
//		return a - b;
//	}
//}
//
//// ��� ���� ����� ���� ���ӽ����̽�
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

// Using ���� : 
// Ư�� ���� ������ Ư�� �ĺ��ڸ� ����ϵ��� �����ϴµ� ���ȴ�.
// Ư�� ������� ���� ������ �������µ� ������ �ȴ�.

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
	

	// 1. using ���þ ����Ͽ� namespace A�� value�� ���� ������ �������ÿ�.
	using namespace A;

	// 2. using ������ ����Ͽ� namespace�� B�� display �Լ��� ���� ������ �������ÿ�.
	using B::display;

	// 3. ������ �� value�� � value�� ������ ������ ���ÿ�.
	std::cout << "Value in main: " << value << std::endl;

	// 4. namespace A�� display �Լ��� namespace B�� display �Լ��� ���� ȣ���Ͻÿ�.
	display();
	A::display();
}