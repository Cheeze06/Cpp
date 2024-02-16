#include <iostream>
// 표준입력 (input)과 출력 (output)을 다루기 위해 필요한 기능들을 포함하는 "iostream"라이브러리를 현재 파일에 포함하는 역할

// std : 표준 라이브러리 (Standard Library)에 정의된 클래스, 함수, 객체등을 포함하는 네임 스페이스
// std::cout 출력함수 (C언어의 printf와 같다라고 생각하면 된다) (console output)
// cout 장점 : 서식 문자 없이 문자열, 문자, 숫자 출력이 가능해진다. (편하다)

// std::cin		: 입력함수 (scanf)라고 생각하면 편하다.
// std::endl	: 개행 \n으로 보면 편하다.
// ::			: 범위 지정 연산자로 사용되는 기호.

//int main()
//{
//	std::cout << "Hello world" << std::endl;
//	std::cout << "Hello world\n";
//	std::cout << "1 + 2 = " << 1 + 2 << "입니다.\n";
//}

// C언어의 printf 와 cout의 차이점 :

// 1. 문법 및 사용법 :

//printf()	: 서식 지정자를 사용하여 출력 형식 방법을 지정해야 한다.
// cout		: 출력 스트림 객체로 << 연산자를 사용하여 데이터를 출력해야 한다.
// 
// 2. 타입 안정성 :
// 
// printf() : 서식 지정자와 실제 인자의 타입이 일치하지 않으면 예기치 못한 결과가 발생할 수 있다.
// cout		: 타입 안정성을 가지며, 데이터의 타입에 따라 적절한 표준방식을 선택한다.
//			  이를 통해 타입 불일치에 따른 문제를 방지할 수 있다.

//int main()
//{
//	int num = 0;
//	std::cout << "표준 기능 확인" << std::endl;
//	std::cout << "값 입력 : ";
//	std::cin >> num;
//	std::cout << "입력한 값 : " << num << std::endl;
//}

// << 와 >> 는 비트 시프트 연산자, 출력과 입력 스트림에 대한 연산자로도 사용
// 
// << : 출력 스트림 연산자.
// >> : 입력 스트림 연산자.

// scanf와 cin의 차이

// 1. 타입 안정성 :

// cin : 데이터의 타입에 따라 적절한 변환을 수행한다.
//		 타입 불일치로 인한 문제가 발생 X

// scanf : 서식 지정자와 실제 인자의 타입이 일치 하지 않는다면
//		   예상치 못한 동작이 발생한다.

// 2. 버퍼 처리

// cin : 기본저긍로 버퍼를 처리한다.
//		 사용자가 입력한 데이터를 엔터로 입력할 때까지 받아들인다.

// scanf : 버퍼를 처리하지 않고 사용자가 입력한 데이터를 바로 사용한다.
//		   (버퍼 오버플로우)

//int main()
//{
//	int num = 20;
//	std::cout << "Hello World" << std::endl;
//	std::cout << "Hello" << "World" << std::endl;
//	std::cout << num << "A" << 3.14 << std::endl;
//	return 0;
//}

//int main()
//{
//	int val1;
//	std::cout << "첫 번째 숫자 입력 : ";
//	std:: cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자 입력 : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "덧셈결과: " << result << std::endl;
//	return 0;
//}

//int main()
//{
//	char name[100];
//	char lang[200];
//
//	std::cout << "이름이 무엇입니까?";
//	std::cin >> name;
//
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
//	std::cin >> lang;
//
//	std::cout << "내 이름은 " << name << " 입니다\n";
//	std::cout << "내가 제일 좋아하는 프로그래밍 언어는 " << lang << " 입니다";
//}

// 문제1
// 사용자로부터 총 5개의 정수를 입력받아서, 그합을 출력하는 프로그램을 작성해 보자
// 단, 프로그램의 실행은 다음과 같이 이뤄져야 한다.

//int main()
//{
//	int a, b, c, d, e;
//
//	std::cout << "1번째 정수 입력 : ";
//	std::cin >> a;
//
//	std::cout << "2번째 정수 입력 : ";
//	std::cin >> b;
//
//	std::cout << "3번째 정수 입력 : ";
//	std::cin >> c;
//
//	std::cout << "4번째 정수 입력 : ";
//	std::cin >> d;
//
//	std::cout << "5번째 정수 입력 : ";
//	std::cin >> e;
//
//	int tot = a+b+c+d+e;
//	std::cout << "합계 : " << tot;
//}

//int main()
//{
//	int tot=0, a=0;
//	for (int i = 1; i < 6; i++) {
//		std::cout << i << "번째 정수 입력 : ";
//		std::cin >> a;
//		tot += a;
//	}
//	std::cout << "합계 : " << tot;
//}

// 문제2
// 숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자

//int main()
//{
//	int a;
//	std::cout << "숫자 입력 : ";
//	std::cin >> a;
//
//	for (int i = 1; i < 10; i++) {
//		std::cout << a << " x " << i << " = " << a * i << std::endl;
//	}
//}

// String

// std::string은 C++ 표준 라이브러리에서 제공하는 문자열을 다루는 클래스이다.
// 문자열을 생성, 조작, 처리를 할 수 있다.

// std::string 주요 특징 및 사용법 : 

// 동적 크기 조정 : 동적으로 크기를 조정할 수 있는 문자열을 제공한다.
// 문자열 길이에 대한 크기 제한 없이 문자열을 추가, 삭제, 수정할 수 있다.

// 안전한 메모리 관리 : 메모리 할당 및 해제를 내부적으로 처리한다.
// 메모리 관리에 대한 걱정을 덜 수 있다.

// 다양한 멤버 함수 : 문자열을 조작하기 위한 다양한 멤버 함수를 제공한다.
// 문자열 붙이기, 길이확인, 문자열 비교, 부분 문자열 추출, 정렬 등 사용가능하다.

#include <string>

//int main()
//{
//	std::string greeting = "Hello";
//	std::string name = "Alice";
//
//	std::string message = greeting + name;	// 문자열 결합
//	std::cout << message << std::endl;
//
//	std::cout << "Length of message : " << message.length() << std::endl;
//
//	if (name == "Alice") {
//		std::cout << "Hello, Alice" << std::endl;
//	}
//}
