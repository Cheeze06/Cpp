#include <iostream>
using namespace std;

// ���� : ģ�� Ŭ������ ��������

// 1. Ŭ���� A�� B���� friend ���踦 �����Ͽ� ������ �ذ��Ͻÿ�.
// 2. �� Ŭ������ getSecretA()�� getSecretB() �Լ��� ����Ͽ� �ش� Ŭ������ ��� ������ �����ϰ� ����ϴ� �ڵ带 �ۼ��Ͻÿ�.
// 3. main�Լ��� ����� ���ÿ�.

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
//	// Ŭ���� B���� Ŭ���� A�� ��� ���� secretA�� �����Ͽ� ���
//	objB.printSecretA(objA);
//	// objA�� ���� ����: printSecretA �Լ��� A Ŭ������ private ����� �����ϱ� ���� A Ŭ������ ��ü�� �Ű������� �ʿ�� �ϱ� �����̴�.
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
//	// Ŭ���� A�� ģ���� ����
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
//	// Ŭ���� B���� Ŭ���� A�� ��� ���� secretA�� �����Ͽ� ���
//	objB.printSecretA(objA);
//	// objA�� ���� ����: printSecretA �Լ��� A Ŭ������ private ����� �����ϱ� ���� A Ŭ������ ��ü�� �Ű������� �ʿ�� �ϱ� �����̴�.
//	
//	return 0;
//}


// C++�� ���

// C++�� ��ü ���� ���α׷��� ����̹Ƿ� ����̶�� �߿��� ������ �����Ѵ�.
// ����� �� Ŭ������ �ٸ� Ŭ������ Ư���� ����� �����޴� ��Ŀ�����̴�.
// 
// �⺻���� ��� ���� :
//
// class �θ� Ŭ���� {
//	// �θ� Ŭ������ �����
// };
// 
// class �ڽ� Ŭ���� : public �θ�Ŭ���� {
//	// �ڽ� Ŭ������ �����
// };


// �θ�Ŭ������ ������ ������ Ŭ������ ����� ��� �ڽ��� Ư���� ����� �ڽ� Ŭ�������� �����Ѵ�.

// �ڽ� Ŭ������ ���ο� Ŭ������, �θ� Ŭ�����κ��� ��ӹ��� ������� Ȯ���ϰų� ������ �� �ִ�.
// �ڽ� Ŭ������ �θ� Ŭ������ ��� ����� ������ �� �ִ�.
// 
// 
// ����� Ư¡
// 
// 1. �ڵ� ���뼺	: �θ� Ŭ������ ���ǵ� ������� �ڽ� Ŭ������ �ٽ� �������� �ʾƵ� �ȴ�.
// 
// 2. ���� ����		: ���� ������ Ŭ������ ����� �ϳ��� Ŭ������ �ٸ� Ŭ������ Ȯ���ϰ� ������ �� �ִ� ������ ���� �� �ִ�.
// 
// 3. ������			: ����� ���� �θ� Ŭ������ �����ͳ� ������ ����Ͽ� ���� ������ �ڽ� Ŭ���� ��ü�� �ٷ� �� �ִ�.
//					�̸� ���� ���� �ð��� � �޼��尡 ȣ��� �� �������� ������ �� �ִ�.
// 
// 4. ��������		: ��� ���迡���� �θ� Ŭ�������� private�� ����� ������� �ڽ� Ŭ�������� ������ �� ����.
//					protected�� public���� ����� ����鸸 ������ �� �ִ�.
// 
// 5. �����Լ�		: �����Լ��� ���� ���ε��� �����ϱ� ���� ��������, �θ�Ŭ�������� ����ǰ� �ڽ� Ŭ�������� ������ �� �� �ִ�.
//					�̸� ���� ����ð��� �ùٸ� �Լ��� ȣ��ǵ��� ������ �� �ִ�.
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
//	// ������ �̵�
//	void move(int x, int y) {
//		xPos += x;
//		yPos += y;
//	}
//
//	// ���� ��ġ ���
//	void displayPosition() {
//		cout << "������ ��ġ : (" << xPos << ", " << yPos << ")" << endl;
//	}
//};
//
//class Circle : public Shape {
//private:
//	double radius;
//public:
//	Circle(int x, int y, double r) : Shape(x, y) , radius(r) {} // Shape(x, y)�� JAVA���� Super() ����� �����
//
//	// ���� ������ ���
//	double getArea() {
//		return 3.14159 * radius * radius;
//	}
//};
//
//int main() {
//	Circle myCircle(3, 4, 5.0);
//
//	// ���� ��ġ ���
//	myCircle.displayPosition();
//
//	// ���� ���� ���
//	 
//	cout << "���� ����: " << myCircle.getArea() << endl;
//
//	// ���� dlehd
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
//		cout << "������: " << wheels << ", �ӵ���: " << speed << "Km/h" << endl;
//	}
//};
//
//// �ڽ�Ŭ����
//class Car : public Vehicle {
//public :
//	Car(int s) : Vehicle(4, s) {}	// Car Ŭ������ �׻� 4���� ������ ������.
//
//	void honk() {
//		cout << "�� ����!" << endl;
//	}
//};
//
//// �ڽ�Ŭ����
//class bicycle : public Vehicle {
//public:
//	bicycle(int s) : Vehicle(2, s) {}	// bicycle Ŭ������ �׻� 2���� ������ ������.
//	
//	void ringBell() {
//		cout << "������ ������" << endl;
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


// �л� Ŭ���� ����

// 1. Person Ŭ������ �����Ͻÿ�. �� Ŭ������ �̸��� ���̸� �����ϴ� ��������� �ִ�.
// 2. �����ڸ� �����Ͽ� �̸��� ���̸� �ʱ�ȭ
// 3. Person Ŭ�������� �̸��� ���̸� ����ϴ� �Լ��� �����ؾ��Ѵ�.
// 4. Student Ŭ���� : Person Ŭ������ ��ӹ޴´�. �߰��� �г��� �����ϴ� ��������� �ִ�.
// 5. Graduate Ŭ���� : Person Ŭ������ ��ӹ޴´�. ���� �о߸� �����ϴ¸�������� �������Ѵ�.
// �����ڸ� �����Ͽ� �̸�, ����, �����γ� �ʱ�ȭ, ����Լ��� �����
// 6. main�Լ����� 4, 5���� ��ü�� ���� �����ϰ� �� ��ü�� ������ ����Ͻÿ�.

class Person {
private:
	int age;
	string name;
public:
	Person(string a, int b) : name(a), age(b) {}
	void printInfo() {
		cout << "�̸� : " << name << endl << "����: " << age << endl;
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
		cout << "�г�: " << grade << endl;
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
		cout << "����: " << major << endl;
	}
};

int main() {
	Student student("ȫ�浿", 20, 3);
	Graduate graduate("�迵��", 25, "��ǻ�� ����");

	cout << "�л�����: " << endl;
	student.printInfo();
	student.displayGrade();

	cout << "\n����������: " << endl;
	graduate.printInfo();
	graduate.displayMajor();
}