#include <iostream>
using namespace std;

// Ŭ������ ��ü
// 
// ����ü : C���� ����. ���õ� �����͵��� ��� ����� ���� ������ Ÿ���� ����� �ִ�.
// �⺻������ ��� ���� (public)�Ƿ� ���.
// �߰����� ���� ����� �����ڸ� ������� �ʴ� �̻� �ܺο��� ���� ����
// ��� X, ���� �Լ� ���� X
// 
// Ŭ���� : ��� ������ ����Լ� ��� ���� �� �ִ�.
// �����Ϳ� �ش� ������ �Բ� ĸ��ȭ �Ѵ�.
// �⺻������ private(������� �ʴ�) ���� �����̸�, �ʿ��� ��� public protected ���� ���� ���� �����ڸ� ����ؾ��Ѵ�.
// 

//// Ŭ���� ���� :
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

// Ŭ���� (�ؾ Ʋ) : ��ü���� ���α׷��ֿ��� �߿��� �����̴�.
// ��ü�� �����ϴµ� ���Ǵ� ���ø�.
// Ŭ������ ������(�������)�� �ش� �����͸� �ٷ�� ����(�޼���)�� �����ϸ�, ��ü�� ������ �� Ŭ������ ������ ���� �ʱ�ȭ�ȴ�.

//��ü : Ŭ������ ������� ������ �޸𸮿� �Ҵ�� �ν��Ͻ��̴�.
//��ü�� Ŭ������ �ν��Ͻ��̸�, Ŭ�������� ������ �����Ϳ� ������ �����Ѵ�.
//��ü�� ���α׷��� �����߿� ������ ���Ǹ� �������� ���¸� �����ϰ� �޼��带 ���� �۾��� �����Ѵ�.

//�ν��Ͻ� : ��ü���� ���α׷��ֿ��� Ŭ������ ������� ������ ���� �����͸� ����Ų��.
// Ŭ������ ��ü�� ���赵�� ���ø��̴�.
// �ν��Ͻ��� Ŭ������ ��� ������ ���� ���� �����Ͱ����� ������ Ŭ�������� ������ �޼��带 ���� ������ �����Ѵ�.
//

//class Person {
//public:
//	string name;
//	int age;
//
//	void introduce() {
//		cout << "�ȳ��ϼ���, ���� " << name << "�̰�, " << age << "�� �Դϴ�.\n";
//	}
//};
//
//int main()
//{
//	//person1 �ν��Ͻ�
//	Person person1;	// ��ü
//	person1.name = "Alice";	// name �Ӽ���
//	person1.age = 25; // age �Ӽ���
//
//	Person person2; // ��ü
//	person2.name = "Bob";
//	person2.age = 30;
//
//	person1.introduce();
//	person2.introduce();
//}

// ���� 01
// Computer Ŭ������ ����� �ʿ��� �Ӽ��� �ο��Ͻÿ�.
// Computer Ŭ�������� �����ѱ�, ��������, ��ǻ�ͽ��� ����Լ��� �߰��Ͻÿ�.
// �����ѱ�: void PowerOn();
// ��������: void PowerOff();
// ��ǻ�� ����: void introduce();

//class Computer {
//public:
//	int id;
//	string who;
//	string CPU;
//	string RAM;
//	bool power;
//	void PowerOn() {
//		cout << "������ ������.\n";
//		power = 1;
//	}
//	void PowerOff() {
//		cout << "������ ������.\n";
//		power = 0;
//	}
//	void introduce() {
//		cout << endl;
//		cout << "��ǻ�� ������: " << who << endl;
//		cout << "�Ϸù�ȣ: " << id << endl;
//		cout << "CPU ����: " << CPU << endl;
//		cout << "RAM ����: " << RAM << endl;
//		if (power == false) {
//			cout << "���� ����: ����" << endl;
//		}
//		else {
//			cout << "���� ����: ����" << endl;
//		}
//		// (power ? ����! : ����!) <- ���� ������ ��밡��
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Computer myComputer;
//	myComputer.id = 123456;
//	myComputer.who = "��";
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

// ������: �ܺο��� �ƹ��� ���Ѿ��� �����鿡 ������ ���� ������ �� �ִ�.
// �ڵ��� �����Ұ��ɼ��� ���� ������ ������� �ʷ��� �� �ִ�.

// Ŭ������ ���� ������

// 1. public: ��������� ����Լ��� Ŭ���� �ܺο����� ������ �����ϴ�.
// Ŭ���� �ν��Ͻ��� ������ �ʰ� ���� ������ �����ϴ�.

// 2. private : ����� ��������� ����Լ��� Ŭ���� ���ο����� ������ �����ϴ�.
// �ܺο��� ���� �����ϰų� ȣ���� ���� ����.

// 3. protected  : ��������� ����Լ��� Ŭ���� ���ο��� ������ �����ϸ�, �Ļ�Ŭ���������� ���ٰ����ϴ�.


// 1. ĸ��ȭ		: Ŭ������ ���õ� �����Ϳ� �����͸� �����ϴ� ����� ��� �����ϴ� ���� �����̴�
// ��������� private�� ���������� Ŭ���� ���ο��� �����͸� �����ϰ� ó���ϰ� ������ �� �ִ�.

// 2. ��������	: Ŭ������ ���� ���� ���λ����� �ܺηκ��� ���ߴ� ���� �ǹ��Ѵ�.
// �ܺο����� Ŭ������ ���� ������ ���� �� ���� ������ ���� ������ �������̽��� ���ؼ��� ��ȣ�ۿ��Ѵ�.


// ������

// C++���� �����ڴ� ��ü�� ������ �� ȣ��Ǵ� Ư���� ��� �Լ��̴�.
// �����ڴ� ��ü�� �ʱ�ȭ�� ����Ѵ�.
// Ŭ������ �ν��Ͻ��� ������ �� ����������� �ʱ�ȭ�ϰų� �ٸ� �ʱ�ȭ �۾��� �����ϴ� ������ �Ѵ�.
// �����ڴ� Ŭ���� �̸��� ������ �̸��� ������, ��ȯ Ÿ���� ������ �ʴ´�.

// �������� �ֿ� ���� : ��������� �ʱ�ȭ, ���� �޸��Ҵ�, �ٸ� �ʱ�ȭ �۾�

//class Car {
//public:
//	// �Ű������� ���� ������
//	Car() { // Overloading
//		cout << "���� �����Ǿ����ϴ�." << endl;
//	}
//	// �Ű������� �ִ� ������
//	Car(int initspeed) {
//		cout << "���� �ӵ��� ������ �����Ǿ����ϴ�." << endl;
//		speed = initspeed;	// �Ű������� �ʱ�ȭ
//	}
//	void Accelerate(int increment) {
//		speed += increment;
//	}
//	void DisplaySpeed() {
//		cout << "�ӵ���: " << speed << "km/h" << endl;
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

// ����: �����ڸ� �Ἥ �Ű������� �޴°� �����ϳ�.
// �ܺ������� �Ұ����ϰ� �ڵ带 ����, �����Ͻÿ�

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
//		cout << "������ ������.\n";
//		power = 1;
//	}
//	void PowerOff() {
//		cout << "������ ������.\n";
//		power = 0;
//	}
//	void introduce() {
//		cout << endl;
//		cout << "��ǻ�� ������: " << who << endl;
//		cout << "�Ϸù�ȣ: " << id << endl;
//		cout << "CPU ����: " << CPU << endl;
//		cout << "RAM ����: " << RAM << endl;
//		if (power == false) {
//			cout << "���� ����: ����" << endl;
//		}
//		else {
//			cout << "���� ����: ����" << endl;
//		}
//		// (power ? ����! : ����!) <- ���� ������ ��밡��
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
//	Computer pc1("��", 123456, "Intel Core i7", "16GB DDR4", 0);
//	pc1.introduce();
//	pc1.PowerOn();
//	pc1.introduce();
//	pc1.PowerOff();
//	pc1.introduce();
//}

// �Ҹ��� : Ŭ������ �ν��Ͻ��� �ı��� �� ȣ��Ǵ� Ư���� �Լ��̴�.
// �Ҹ��ڴ� ��ü�� �޸𸮿��� �����Ǳ� ������ �ڵ����� ȣ��Ǹ�
// �ַ� ��ü ���ο��� �������� �Ҵ��� �޸𸮳� ���ҽ��� ���� �۾��� �����ϴµ� ���ȴ�.
// ���ӿ��� �ַ� ����, HP�� 0�� �ɶ� ���� ����

//class Simple
//{
//public:
//	int num;
//	
//	Simple(int n) :num(n) {
//		cout << num << ": ������ ȣ��\n";
//	}
//	~Simple()
//	{
//		cout << num << ": �Ҹ��� ȣ��\n";
//	}
//};
//
//int main()
//{
//	Simple obj1(10);
//	Simple obj2(20);
//	Simple obj3(30);
//	// ���� ������
//}


// ����: ���� Ŭ���� �����ϱ�
// 1. Employee Ŭ������ �����Ͻÿ�.
// 2. �� Ŭ������ ������ �̸�(name), ����(position), ����(salary)�� ������ �� �ִ� ��� ������ �����Ͻÿ�.
// 3. �����ڸ� ���� �̸�, ����, ������ �ʱ�ȭ�� �� �ֵ��� �Ͻÿ�.
// 4. �̸�, ���� ������ ��ȯ�ϴ� getName(), getPosition(), getSalary() ��� �Լ��� �ۼ��Ͻÿ�.
// 5. ������ �λ��Ű�� raiseSalary() ��� �Լ��� �ۼ��Ͻÿ�.
// 6. ��� ������ �ܺο��� ���� �Է��� �� �����ϴ�. (������ �����ڸ� ���ؼ� �� �Է�)

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
//	Employee emp1("ȫ�浿", "�Ŵ���", 50000);
//
//	cout << "Employee: " << emp1.getName() << endl;
//	cout << "Position: " << emp1.getPosition() << endl;
//	cout << "Salary: $" << emp1.getSalary() << endl;
//
//	emp1.raiseSalary(10);
//	cout << "10% �λ�, raise, new salary: $" << emp1.getSalary() << endl;
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
	Employee emp1("ȫ�浿", "�Ŵ���", 50000);

	cout << "Employee: " << emp1.getName() << endl;
	cout << "Position: " << emp1.getPosition() << endl;
	cout << "Salary: $" << emp1.getSalary() << endl;

	emp1.raiseSalary(10);
	cout << "10% �λ�, raise, new salary: $" << emp1.getSalary() << endl;

	return 0;
}