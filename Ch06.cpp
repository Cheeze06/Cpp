#include <iostream>
using namespace std;

// 클래스와 객체
// 
// 구조체 : C언어에서 시작. 관련된 데이터들을 묶어서 사용자 정의 데이터 타입을 만들수 있다.
// 기본적으로 모두 허용된 (public)의로 취급.
// 추가적인 접근 제어ㅣ 지시자를 사용하지 않는 이상 외부에서 접근 가능
// 상속 X, 가상 함수 개념 X
// 
// 클래스 : 멤버 변수와 멤버함수 모두 가질 수 있다.
// 데이터와 해당 동작을 함께 캡슐화 한다.
// 기본적으로 private(허용하지 않는) 접근 제한이며, 필요한 경우 public protected 등의 접근 제어 지시자를 사용해야한다.
// 

//// 클래스 예제 :
//class Point {
//public:
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point p;
//	p.x = 10;
//	p.y = 20;
//}

// 클래스 (붕어빵 틀) : 객체지향 프로그래밍에서 중요한 개념이다.
// 객체를 생성하는데 사용되는 템플릿.
// 클래스는 데이터(멤버변수)와 해당 데이터를 다루는 동작(메서드)를 포함하며, 객체를 생성할 때 클래스의 구조에 따라 초기화된다.

//객체 : 클래스를 기반으로 실제로 메모리에 할당된 인스턴스이다.
//객체는 클래스의 인스턴스이며, 클래스에서 정의한 데이터와 동작을 포함한다.
//객체를 프로그램의 실행중에 실제로 사용되며 데이터의 상태를 저장하고 메서드를 통해 작업을 수행한다.

//인스턴스 : 객체지향 프로그래밍에서 클래스를 기반으로 생성된 실제 데이터를 가리킨다.
// 클래스는 객체의 설계도나 템플릿이다.
// 인스턴스는 클래스의 멤버 변수에 대한 실제 데이터값들을 가지며 클래스에서 정의한 메서드를 통해 동작을 수행한다.
//

//class Person {
//public:
//	string name;
//	int age;
//
//	void introduce() {
//		cout << "안녕하세요, 저는 " << name << "이고, " << age << "살 입니다.\n";
//	}
//};
//
//int main()
//{
//	//person1 인스턴스
//	Person person1;	// 객체
//	person1.name = "Alice";	// name 속성값
//	person1.age = 25; // age 속성값
//
//	Person person2; // 객체
//	person2.name = "Bob";
//	person2.age = 30;
//
//	person1.introduce();
//	person2.introduce();
//}

// 문제 01
// Computer 클래스를 만들고 필요한 속성을 부여하시오.
// Computer 클래스에서 전원켜기, 전원끄기, 컴퓨터스펙 멤버함수를 추가하시오.
// 전원켜기: void PowerOn();
// 전원끄기: void PowerOff();
// 컴퓨터 스펙: void introduce();

//class Computer {
//public:
//	int id;
//	string who;
//	string CPU;
//	string RAM;
//	bool power;
//	void PowerOn() {
//		cout << "전원이 켜졌다.\n";
//		power = 1;
//	}
//	void PowerOff() {
//		cout << "전원이 꺼졌다.\n";
//		power = 0;
//	}
//	void introduce() {
//		cout << endl;
//		cout << "컴퓨터 소유자: " << who << endl;
//		cout << "일련번호: " << id << endl;
//		cout << "CPU 스펙: " << CPU << endl;
//		cout << "RAM 스펙: " << RAM << endl;
//		if (power == false) {
//			cout << "전원 상태: 꺼짐" << endl;
//		}
//		else {
//			cout << "전원 상태: 켜짐" << endl;
//		}
//		// (power ? 켜짐! : 꺼짐!) <- 삼항 연산자 사용가능
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Computer myComputer;
//	myComputer.id = 123456;
//	myComputer.who = "나";
//	myComputer.CPU = "Intel Core i7";
//	myComputer.RAM = "16GB DDR4";
//	myComputer.power = 0;
//
//	myComputer.introduce();
//
//	myComputer.PowerOn();
//
//	myComputer.introduce();
//
//	myComputer.PowerOff();
//
//	myComputer.introduce();
//}

// 문제점: 외부에서 아무런 제한없이 변수들에 접근해 값을 변경할 수 있다.
// 코드의 예측불가능성과 유지 보수의 어려움을 초래할 수 있다.

// 클래스의 접근 제어자

// 1. public: 멤버변수와 멤버함수는 클래스 외부에서도 접근이 가능하다.
// 클래스 인스턴스를 통하지 않고 직접 접근이 가능하다.

// 2. private : 선언된 멤버변수와 멤버함수는 클래스 내부에서만 접근이 가능하다.
// 외부에서 직접 접근하거나 호출할 수가 없다.

// 3. protected  : 멤버변수와 멤버함수는 클래스 내부에서 접근이 가능하며, 파생클래스에서도 접근가능하다.


// 1. 캡슐화		: 클래스는 관련된 데이터와 데이터를 조작하는 기능을 묶어서 제공하는 것이 목적이다
// 멤버변수를 private로 선언함으로 클래스 내부에서 데이터를 적절하게 처리하고 제어할 수 있다.

// 2. 정보은닉	: 클래스의 내부 구현 세부사항을 외부로부터 감추는 것을 의미한다.
// 외부에서는 클래스이 내부 구현에 대해 알 수가 없으며 오직 공개된 인터페이스를 통해서만 상호작용한다.


// 생성자

// C++에서 생성자는 객체가 생성될 떄 호출되는 특별한 멤버 함수이다.
// 생성자는 객체의 초기화를 담당한다.
// 클래스의 인스턴스를 생성할 때 멤버변수들을 초기화하거나 다른 초기화 작업을 수행하는 역할을 한다.
// 생성자는 클래스 이름과 동일한 이름을 가지며, 반환 타입을 가지지 않는다.

// 생성자의 주요 역할 : 멤버변수의 초기화, 동적 메모리할당, 다른 초기화 작업

//class Car {
//public:
//	// 매개변수가 없는 생성자
//	Car() { // Overloading
//		cout << "차가 생성되었습니다." << endl;
//	}
//	// 매개변수가 있는 생성자
//	Car(int initspeed) {
//		cout << "차는 속도를 가지고 생성되었습니다." << endl;
//		speed = initspeed;	// 매개변수로 초기화
//	}
//	void Accelerate(int increment) {
//		speed += increment;
//	}
//	void DisplaySpeed() {
//		cout << "속도는: " << speed << "km/h" << endl;
//	}
//private:
//	int speed;
//};
//
//int main()
//{
//	Car car1;
//	//car1.DisplaySpeed();
//
//	Car car2(50);
//	car2.Accelerate(20);
//	car2.DisplaySpeed();
//}

// 문제: 생성자를 써서 매개변수로 받는건 가능하나.
// 외부접근이 불가능하게 코드를 유지, 보수하시오

//class Computer {
//public:
//	Computer(string a, int b, string c, string d, bool e) {
//		who = a;
//		id = b;
//		CPU = c;
//		RAM = d;
//		power = e;
//	}
//	void PowerOn() {
//		cout << "전원이 켜졌다.\n";
//		power = 1;
//	}
//	void PowerOff() {
//		cout << "전원이 꺼졌다.\n";
//		power = 0;
//	}
//	void introduce() {
//		cout << endl;
//		cout << "컴퓨터 소유자: " << who << endl;
//		cout << "일련번호: " << id << endl;
//		cout << "CPU 스펙: " << CPU << endl;
//		cout << "RAM 스펙: " << RAM << endl;
//		if (power == false) {
//			cout << "전원 상태: 꺼짐" << endl;
//		}
//		else {
//			cout << "전원 상태: 켜짐" << endl;
//		}
//		// (power ? 켜짐! : 꺼짐!) <- 삼항 연산자 사용가능
//		cout << endl;
//	}
//private:
//	int id;
//	string who;
//	string CPU;
//	string RAM;
//	bool power;
//};
//
//int main()
//{
//	Computer pc1("나", 123456, "Intel Core i7", "16GB DDR4", 0);
//	pc1.introduce();
//	pc1.PowerOn();
//	pc1.introduce();
//	pc1.PowerOff();
//	pc1.introduce();
//}

// 소멸자 : 클래스의 인스턴스가 파괴될 때 호출되는 특별한 함수이다.
// 소멸자는 객체가 메모리에서 해제되기 직전에 자동으로 호출되며
// 주로 객체 내부에서 동적으로 할당한 메모리나 리소스의 정리 작업을 수행하는데 사용된다.
// 게임에서 주로 사용됨, HP가 0이 될때 몬스터 삭제

//class Simple
//{
//public:
//	int num;
//	
//	Simple(int n) :num(n) {
//		cout << num << ": 생성자 호출\n";
//	}
//	~Simple()
//	{
//		cout << num << ": 소멸자 호출\n";
//	}
//};
//
//int main()
//{
//	Simple obj1(10);
//	Simple obj2(20);
//	Simple obj3(30);
//	// 스택 형식임
//}


// 문제: 직원 클래스 구현하기
// 1. Employee 클래스를 생성하시오.
// 2. 이 클래스는 직원의 이름(name), 직위(position), 연봉(salary)를 저장할 수 있는 멤버 변수를 포함하시오.
// 3. 생성자를 통해 이름, 직위, 연봉을 초기화할 수 있도록 하시오.
// 4. 이름, 직위 연봉을 반환하는 getName(), getPosition(), getSalary() 멤버 함수를 작성하시오.
// 5. 연봉을 인상시키는 raiseSalary() 멤버 함수를 작성하시오.
// 6. 멤버 변수는 외부에서 값을 입력할 수 없습니다. (오로지 생성자를 통해서 값 입력)

//class Employee {
//public:
//	string name;
//	string position;
//	int salary;
//
//	Employee(string a, string b, int c) {
//		name = a;
//		position = b;
//		salary = c;
//	}
//	string getName() {
//		return name;
//	}
//	string getPosition() {
//		return position;
//	}
//	int getSalary() {
//		return salary;
//	}
//	int raiseSalary(int a) {
//		salary += salary / 10;
//		return salary;
//	}
//};
//int main() {
//	Employee emp1("홍길동", "매니저", 50000);
//
//	cout << "Employee: " << emp1.getName() << endl;
//	cout << "Position: " << emp1.getPosition() << endl;
//	cout << "Salary: $" << emp1.getSalary() << endl;
//
//	emp1.raiseSalary(10);
//	cout << "10% 인상, raise, new salary: $" << emp1.getSalary() << endl;
//
//	return 0;
//}

class Employee {
public:
	Employee(string a, string b, int c) {
		name = a;
		position = b;
		salary = c;
	}
	string getName() {
		return name;
	}
	string getPosition() {
		return position;
	}
	int getSalary() {
		return salary;
	}
	int raiseSalary(int a) {
		salary += salary / a;
		return salary;
	}
private:
	string name;
	string position;
	int salary;
};

int main() {
	Employee emp1("홍길동", "매니저", 50000);

	cout << "Employee: " << emp1.getName() << endl;
	cout << "Position: " << emp1.getPosition() << endl;
	cout << "Salary: $" << emp1.getSalary() << endl;

	emp1.raiseSalary(10);
	cout << "10% 인상, raise, new salary: $" << emp1.getSalary() << endl;

	return 0;
}