#include <iostream>
using namespace std;

// 문제 : 친구 클래스와 접근제어

// 1. 클래스 A와 B간의 friend 관계를 설정하여 문제를 해결하시오.
// 2. 각 클래스의 getSecretA()와 getSecretB() 함수를 사용하여 해당 클래스의 비밀 변수에 접근하고 출력하는 코드를 작성하시오.
// 3. main함수도 만들어 보시오.

// Ver. ME
//class A {
//private:
//	int privateA;
//public:
//	A(int a) : privateA(a) {}
//	
//	int getSecretA() {
//		return privateA;
//	}
//
//	friend class B;
//};
//
//class B {
//private:
//	int privateB;
//public:
//	B(int a) : privateB(a) {}
//	int getSecretB() {
//		return privateB;
//	}
//	void printSecretA(A& a) {
//			cout << "Secret A accessed from class B: " << a.privateA << endl;
//	}
//};
//
//int main() {
//	A objA(42);
//	B objB(99);
//
//	cout << "Secret A: " << objA.getSecretA() << endl;
//	cout << "Secret B: " << objB.getSecretB() << endl;
//
//	// 클래스 B에서 클래스 A의 멤버 변수 secretA에 접근하여 출력
//	objB.printSecretA(objA);
//	// objA를 적는 이유: printSecretA 함수는 A 클래스의 private 멤버에 접근하기 위해 A 클래스의 객체를 매개변수로 필요로 하기 때문이다.
//
//	return 0;
//}


// Ver. T
//class A;
//
//class B {
//private:
//	int secretB;
//
//public:
//	B(int secret) : secretB(secret) {}
//	
//	// 클래스 A를 친구로 선언
//	friend class A;
//
//	int getSecretB() const {
//		return secretB;
//	}
//
//	void printSecretA(const A& objA) {
//
//	}
//};
//
//class A {
//private:
//	int secretA;
//public:
//	A(int secret) : secretA(secret) {}
//	
//	int getSecretA() const {
//		return secretA;
//	}
//
//	friend void B::printSecretA(const A& objA);
//};
//
//void B::printSecretA(const A& objA) {
//	cout << "Secret A accessed from class B: " << a.privateA << endl;
//}
//
//int main() {
//	A objA(42);
//	B objB(99);
//	
//	cout << "Secret A: " << objA.getSecretA() << endl;
//	cout << "Secret B: " << objB.getSecretB() << endl;
//	
//	// 클래스 B에서 클래스 A의 멤버 변수 secretA에 접근하여 출력
//	objB.printSecretA(objA);
//	// objA를 적는 이유: printSecretA 함수는 A 클래스의 private 멤버에 접근하기 위해 A 클래스의 객체를 매개변수로 필요로 하기 때문이다.
//	
//	return 0;
//}


// C++의 상속

// C++은 객체 지향 프로그래밍 언어이므로 상속이라는 중요한 개념을 제공한다.
// 상속은 한 클래스가 다른 클랫스의 특성과 기능을 물려받는 매커니즘이다.
// 
// 기본적인 상속 구문 :
//
// class 부모 클래스 {
//	// 부모 클래스의 멤버들
// };
// 
// class 자식 클래스 : public 부모클래스 {
//	// 자식 클래스의 멤버들
// };


// 부모클래스는 기존에 정의한 클래스로 상속을 토앻 자신의 특성과 기능을 자식 클래스에게 전달한다.

// 자식 클래스는 새로운 클래스로, 부모 클래스로부터 상속받은 멤버들을 확장하거나 수정할 수 있다.
// 자식 클래스는 부모 클래스의 모든 멤버에 접근할 수 있다.
// 
// 
// 상속의 특징
// 
// 1. 코드 재사용성	: 부모 클래스에 정의된 멤버들을 자식 클래스에 다시 구현하지 않아도 된다.
// 
// 2. 계층 구조		: 여러 계층의 클래스를 만들어 하나의 클래스가 다른 클래스를 확장하고 보완할 수 있는 구조를 만들 수 있다.
// 
// 3. 다형성			: 상속을 통해 부모 클래스의 포인터나 참조를 사용하여 여러 종류의 자식 클래스 객체를 다룰 수 있다.
//					이를 통해 실행 시간에 어떤 메서드가 호출될 지 동적으로 결정할 수 있다.
// 
// 4. 접근제어		: 상속 관계에서는 부모 클래스에서 private로 선언된 멤버들은 자식 클래스에서 접근할 수 없다.
//					protected나 public으로 선언된 멤버들만 접근할 수 있다.
// 
// 5. 가상함수		: 가상함수는 동적 바인딩을 지원하기 위한 개념으로, 부모클래스에서 선언되고 자식 클래스에서 재정의 할 수 있다.
//					이를 통해 실행시간에 올바를 함수가 호출되도록 보장할 수 있다.
//

//class Animal {
//public:
//	void speak() {
//		cout << "Animal speaks!" << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void speak() {
//		cout << "Dog barks!" << endl;
//	}
//};
//
//int main() {
//	Dog mydog;
//	mydog.speak();
//
//	Animal* animalPtr = &mydog;
//	animalPtr->speak();
//}

//class Shape {
//private:
//	int xPos;
//	int yPos;
//public:
//	Shape(int x, int y) : xPos(x), yPos(y) {}
//	// 도형을 이동
//	void move(int x, int y) {
//		xPos += x;
//		yPos += y;
//	}
//
//	// 현재 위치 출력
//	void displayPosition() {
//		cout << "도형의 위치 : (" << xPos << ", " << yPos << ")" << endl;
//	}
//};
//
//class Circle : public Shape {
//private:
//	double radius;
//public:
//	Circle(int x, int y, double r) : Shape(x, y) , radius(r) {} // Shape(x, y)가 JAVA에서 Super() 개념과 비슷함
//
//	// 원의 면적을 계산
//	double getArea() {
//		return 3.14159 * radius * radius;
//	}
//};
//
//int main() {
//	Circle myCircle(3, 4, 5.0);
//
//	// 원래 위치 출력
//	myCircle.displayPosition();
//
//	// 원의 면적 출력
//	 
//	cout << "원의 지름: " << myCircle.getArea() << endl;
//
//	// 원의 dlehd
//	myCircle.move(2, -1);
//	myCircle.displayPosition();
//}

//class Vehicle {
//private:
//	int wheels;
//	int speed;
//public:
//	Vehicle(int w, int s) : wheels(w), speed(s) {}
//
//	void displayInfo() {
//		cout << "바퀴는: " << wheels << ", 속도는: " << speed << "Km/h" << endl;
//	}
//};
//
//// 자식클래스
//class Car : public Vehicle {
//public :
//	Car(int s) : Vehicle(4, s) {}	// Car 클래스는 항상 4개의 바퀴를 가진다.
//
//	void honk() {
//		cout << "차 경적!" << endl;
//	}
//};
//
//// 자식클래스
//class bicycle : public Vehicle {
//public:
//	bicycle(int s) : Vehicle(2, s) {}	// bicycle 클래스는 항상 2개의 바퀴를 가진다.
//	
//	void ringBell() {
//		cout << "자전거 따릉이" << endl;
//	}
//};
//
//int main() {
//	Car myCar(100);
//	myCar.displayInfo();
//	myCar.honk();
//
//	bicycle myBicycle(25);
//	myBicycle.displayInfo();
//	myBicycle.ringBell();
//}


// 학생 클래스 구현

// 1. Person 클래스를 정의하시오. 이 클래스는 이름과 나이를 저장하는 멤버변수가 있다.
// 2. 생성자를 구현하여 이름과 나이를 초기화
// 3. Person 클래스에는 이름과 나이를 출력하는 함수도 포함해야한다.
// 4. Student 클래스 : Person 클래스를 상속받는다. 추가로 학년을 저장하는 멤버변수가 있다.
// 5. Graduate 클래스 : Person 클래스를 상속받는다. 전공 분야를 저장하는멤버변수를 가져야한다.
// 생성자를 구현하여 이름, 나이, 전공부냥 초기화, 출력함수도 만들기
// 6. main함수에서 4, 5번의 객체를 각각 생성하고 각 객체의 정보를 출력하시오.

class Person {
private:
	int age;
	string name;
public:
	Person(string a, int b) : name(a), age(b) {}
	void printInfo() {
		cout << "이름 : " << name << endl << "나이: " << age << endl;
	}
};

class Student : public Person {
private:
	int grade;
public:
	Student(string a, int b, int c) : Person(a, b) {
		grade = c;
	}
	void displayGrade() {
		cout << "학년: " << grade << endl;
	}
};

class Graduate : public Person {
private:
	string major;
public:
	Graduate(string a, int b, string c) : Person(a, b) {
		major = c;
	}
	void displayMajor() {
		cout << "전공: " << major << endl;
	}
};

int main() {
	Student student("홍길동", 20, 3);
	Graduate graduate("김영희", 25, "컴퓨터 과학");

	cout << "학생정보: " << endl;
	student.printInfo();
	student.displayGrade();

	cout << "\n졸업생정보: " << endl;
	graduate.printInfo();
	graduate.displayMajor();
}