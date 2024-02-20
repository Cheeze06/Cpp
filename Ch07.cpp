#include <iostream>
using namespace std;
// 문제 : 사각형 클래스 구현하기
// 사각형 클래스를 구현해보시오. 이 클래스는 사각형의 가로와 세로 길이를 저장하고.
// 사각형의 넓이를 계산하는 기능을 제공해야한다.

// 속성
// width (가로)
// height (세로)

// 메서드
// 가로와 세로 길이를 설정하는 메서드
// 사각형의 넓이를 계산하여 반환하는 메서드

//class Rectangle {
//public:
//	double width;
//	double height;
//
//	void setDimensions(double a, double b) {
//		width = a;
//		height = b;
//	}
//	double getArea() {
//		return width*height;
//	}
//};
//
//int main() {
//	Rectangle rect;	// rect : 인스턴스
//	rect.setDimensions(5.0, 3.0);
//	cout << "사각형의 넓이: " << rect.getArea() << endl;
//	return 0;
//}

// C++의 멤버 이니셜라이저

// 클래스의 생성자에서 멤버 변수를 초기화하는 기술이다.
// 객체가 생성될 때 멤버 변수의 초기값을 설정하는데 사용된다.
// 객체의 초기화 과정을 더 효율적으로 처리하고, 불필요한 중복 작업을 피할수 있다.

class Myclass {
private:
	int x;
	double y;

public:
	// 생성자의 초기화 목록을 사용한 멤버 이니셜라이저 예제
	Myclass(int xVal, double yVal) : x(xVal), y(yVal) {
		//생성자 본체
		// 초기화 목록 이후에 추가적인 초기화 작업 가능
	}
};

// x와 y의 멤버 변수를 초기화하기 위해 이니셜라이저를 사용하고 있다
// 장점:
// 1. 효율성	: 멤버 이니셜라이저를 사용하면 생성자 본체 내에서 멤버변수를 초기화 하는 대신, 초기화가 객체 생성과 동시에 이루어진다.
// 2. 상수 멤버 변수 초기화 : 멤버 이니셜라이저를 사용하면 생성자 본체 내에서 쵝화할 수 없으므로 멤버 이니셜라이저를 사용해야한다.
// 3. 참조 멤버 변수 초기화 : 참조(reference) 멤버 변수도 생성시 초기화 목록을 사용해야 한다.

// 상수 멤버 변수 초기화 예제
//class Circle {
//private:
//	const double pi = 3.14;	// 상수 멤버 변수
//	double radius;	// 반지름
//
//public:
//	Circle(double radiusVal) : radius(radiusVal) {
//		// 생성자 본체
//		// 초기화 목록 이후에 추가적인 초기화 작업 가능
//	}
//	double getArea() {
//		return pi * radius * radius;
//	}
//};
//
//int main() {
//	Circle c(5.0);
//	cout << "원의 지름은 " << c.getArea() << endl;
//}

// const 함수

// const함수는 멤버 변수를 정의할 때 사용되는 방법이다.
// const 함수는 해당 함수가 호출된 객체의 내부상태를 변경하지 않음을 보장한다.
// 이는 객체의 멤버 변수를 수정하지 않는다 라는 의미이다.

// 1. 객체의 내부 상태를 보호하여 논리적 불변성을 유지할 수 있다.
// 2. const 함수를 사용하면 const로 선언된 객체에 대해서만 호출할 수 있다.

// const 함수를 정의하는 방법은 함수 선언과 정의에서 모두 적용된다.
// 함수의 매개 변수 리스트 뒤에 const 키워드를 추가하여 함수가 객체의 내부 상태를 변경하지 않는다는 것을 나타낸다.
// 또한 함수의 반환 타입 앞에 const 키워드를 추가하여 반환 값도 수정할 수 없음을 나타낼 수 있다.


//class MyClass {
//public:
//	int getValue() const;	// const 함수 선언
//	void setValue(int val);	// 비 - const 함수 선언
//private:
//	int data;
//};
//
//int MyClass::getValue() const {
//	//data = 10;	// 이코드는 컴파일 에러가 발생
//	return data;
//}
//
//void MyClass::setValue(int val) {
//	data = val;
//}

// getValue 함수는 const함수로 선언되었으며, data 멤버변수를 수정하지 않는다.
// const로 선언된 객체에서만 호출할 수 있다.
// const 함수를 사용하여 객체의 내부 상태를 보호하고 의도하지 않은 수정을 방지할 수 있다.

// const를 사용하는 이유 : 변수의 상수성을 표시하기 이함
// 매개변수를 const로 선언하면 함수 내에서 변경 X

// getter 메서드들
// getter는 객체의 private 멤버 변수에 접근하기 위한 메서드로 멤버 변수 값을 읽는 용도로 사용된다.
// 클래스 내부에서 private 멤버 변수를 외부로 노출시키지 않으면서도 클래스 외부에서 이 값을 읽을 수 있게 해주는 역할을 한다.

//	string getName() const {
//		return name;
//	}
//	int getAge() const {
//		return age;
//	}
//	string getPosition() const {
//		return position;
//	}
//
//	// 멤버 정보 출력 함수
//	void display() {
//		cout << "이름 : " << getName() << ", 나이: " << getAge() << ", 포지션: " << getPosition() << endl;
//	}
//
//private:
//	string name;
//	int age;
//	string position;
//};
//
//int main() {
//	// member 클래스의 객체 생성 및 정보 출력
//	Member member1("C++", 50, "C");
//	member1.display();
//	Member member2("Java", 30, "웹개발");
//	member2.display();
//}

// 객체 배열
// C++ 프로그래밍 여러개의 객체를 저장하고 관리하기 편리한 방법
// 객체 배열은 동일한 클래스 또는 구조의 객체들을 하나의 재열에 저장하여 사용할 수 있게 해주며
// 데이터의 집합을 효율적으로 다루는 데 사용

// 기본 생성자를 만드는 이유 : 배열 생성자 초기화
// C++에서 컴파일러가 객체를 생성할 때 가본 생성자를 호출해준다.
// 대표적 예시 java : super();
// 기본적 생성자가 없고 객체를 생성할 때 기본으로 생성자를 호출해준다.
// 개본 생성자가 없고, 사용자 정의 생성자만 있다면 검파일러는 객체를 어떠헥 호출될까?

// 객체 배열을 사용할 때 주의점
// 배열의 각 요소가 객체의 복사본을 포함한다.
// 객체가 크거나 복잡한 경우 잘 안된다.