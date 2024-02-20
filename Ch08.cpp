// ��ü �����͹迭 (��ü�� ����Ű�� ������ �迭)
// C++���� ��ü ������ �迭�� ��ü�� ����Ű�� �����͵��� �����̴�. �������� ��ü�� �����ϰ������ �� �ִ�.
// ���� ��� ���� �������� �����ϰų� ��ü���� �������� �����ϰ� �����ϴ� ��쿡 ���� Ȱ��ȴ�.

// 1. ��ü ������ �迭 ����
// ��ü ������ �迭�� �����Ϸ���, ��ü�������͵��� ������ �迭�� �ž��Ѵ�.

// MyClass* objArray[10];

// 2. ��ü ���� �� ������ ����
// ��ü�� �������� �����ϰ� �� �����͸� �迭�� ������ �� �ִ�.
// ��ü ������ �ش� ��ü�� �����͸� �迭��ҿ� �����Ѵ�
// objArray[0] = new MyClass(); // ��ü ���� �� ������ ����

// 3. ��ü ��� �� �޸� ���� : 
// ��ü ������ �迭�� ����� ��ü �����͵��� ����Ͽ� ��ü�� �����ϰ� �޼ҵ带 ȣ���� �� �ִ�.
// �۾��� ������ �޸� ������ �����ϱ� ���� ���� ��ü���� �����ؾ� �Ѵ�.

// objArray[0] -> simeMethod();	// ��ü �޼ҵ� ȣ��
// delete objArray[0];	// ��ü �޸� ����

// 4. ��� ��ü ���� : 
// ��ü ���̆� �迭�� ����� ��� ��ü���� �����ϱ� ���ؼ��� �迭�� ��ȸ�ϸ鼭 �� ��ü�� �����ؾ��Ѵ�.
 

//for (int i = 0; i < 10; i++) {
//	delete objArray[i];
//}

//5. nullptr ó��:
// ��ü ������ �迭�� ��Ұ� ���� ��ü�� ����Ű�� ���� ���, �ʱ�ȭ�� ���� nullptr�� �ʱ�ȭ �ϴ°��� ����.
// �̸� ���� �޸� �ּҰ� ��ȿ���� ���� ���¸� ��Ÿ�� �� �ִ�.

//#include <iostream>
//using namespace std;
//class myClass {
//public:
//	myClass(int val) : value(val) {}
//	void printValue() {
//		cout << "Value: " << value << endl;
//	}
//private:
//	int value;
//};
//
//int main()
//{
//	const int array_size = 5;
//	myClass* objectArray[array_size] = { nullptr };
//
//	// ��ü ���� �� �迭�� ����
//	for (int i = 0; i < array_size; i++) {
//		objectArray[i] = new myClass(i + 1);
//	}
//
//	//��ü �޼��� ȣ��
//	for (int i = 0; i < array_size; i++) {
//		objectArray[i]->printValue();
//	}
//	// ��ü �޸� ����
//	for (int i = 0; i < array_size; i++) {
//		delete objectArray[i];
//	}
//}

// ���� : �������� �ý���
// 1. Book Ŭ������ �ۼ�, �� Ŭ������ ������ ���� ��� ������ ��� �Լ��� ������ �Ѵ�.

// title : ���� ����, ���ڿ�
// author : ���� ����, ���ڿ�
// Book :  ������, ����� ���ڸ� �Ű������� ����
// display : ������ ���� ���, �������

// main
// ���� ��ü 3�� ����, ���� ����
// ��ü ������ �迭�� ����Ͽ� ������ ������ ���� ��ü ����
// �ݺ����� ���� ��ü ������ �迭�� ����� �� ���� ���� ���

#include <iostream>
#include <string>
using namespace std;
//
//class book {
//public:
//	book(string a, string b) : booktitle(a), author(b) {}
//	void display() {
//		cout << "����: " << booktitle << ", ����: " << author << endl;
//	}
//private:
//	string booktitle;
//	string author;
//};
//
//int main()
//{
//	// ��ü ����
//	book book1("�̰��� �ڹٴ�", "�ڹ�");
//	book book2("�̰��� ��������", "������");
//	book book3("�̰��� C��", "C");
//
//	book1.display();
//	book2.display();
//	book3.display();
//
//	return 0;
//}

// this�� ��� �Լ� ������ ���Ǵ� Ư���� �������̴�.
// �� �����ʹ� ���� ��ü�� �ּҸ� ����Ű��.
// ��� �Լ� ������ ��ü �ڽ��� ����Ű�µ� ���ȴ�.
// this �����͸� ����Ͽ� ��ü�� ��� ������ ��� �Լ��� ������ �� �ִ�.

//class Myclass {
//public:
//	Myclass(int val) : value(val) {}
//	void printValue() {
//		// this �����͸� ����Ͽ� ���� ��ü�� ��� ������ �����Ѵ�.
//		cout << "value: " << this->value << endl;
//	}
//	void setValue(int val) {
//		// this �����ʹ� ��ü�� �ּҸ� ����Ű�Ƿ� �����δ� value ��� ������ ����Ű�� �Ͱ� ������ ȿ���� �����´�.
//		this->value = val;
//	}
//private:
//	int value;
//};
//
//int main()
//{
//	Myclass obj1(5);
//	obj1.printValue();
//	obj1.setValue(10);
//	obj1.printValue();
//}

// ����: �־��� Person Ŭ������ �ϼ��Ͻÿ�.
// Person Ŭ������ �̸��� ���̸� �����ϸ�, printInfo ��� �Լ��� ����Ͽ�
// �̸��� ���̸� ����� �� �־�� �Ѵ�.
// ���� setAge ��� �Լ��� ����Ͽ� ���̸� ������ �� �־�� �Ѵ�.
// �� ��, setAge �Լ� ������ this �����͸� ����Ͽ� ���̸� �����Ͻÿ�.
//

//class Person {
//public:
//	Person(string a, int b) : name(a), age(b) {}
//	void printInfo() {
//		cout << "name: " << name << " Age: " << age << endl;
//	}
//	void setAge(int a) {
//		this->age = a;
//	}
//private:
//	string name;
//	int age;
//};
//
//int main()
//{
//	Person person("Alice", 30);
//	person.printInfo();	// ���� ���: name: Alice, Age: 30;
//
//	person.setAge(35);
//	person.printInfo(); // ���� ���: name: Alice, Age:35;
//}

// ���� ������

// ��ü�� ���縦 �����ϴ� Ư���� �������̴�.
// ��ü�� ����� �ΰ��� �ֿ� �ó��������� �߻��Ѵ�.
// 1. �ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ �ϴ� ���
// 2. �Լ� ȣ�� �� ��ü�� ���ڷ� �����ϴ� ���

// ���� �������� Ư¡
// 1. ����Ÿ�� : ���� �������� ���ڴ� �ش� Ŭ������ ��� ���۷����� ���޵ȴ�.
// 
// 2. ��� ���� ���� : ���� �������� �ֿ� ������ ���� ��ü�� ��� ���� ���� ���� �����Ǵ� ��ü�� �����ϴ� ���̴�.
// �� ��ü�� �������� �޸� ������ ������ �ȴ�.
// 
// 3. ���� �Ҵ�� �ڿ� : ���� Ŭ������ �������� �Ҵ�� �ڿ�(��: �� �޸�)�� ������ �ִٸ�
// ���� �����ڴ� �̸� �����ϰ� �����Ͽ� �޸� ������ �����ؾ� �Ѵ�.
// 
// 4. ����Ʈ ���� ������ �ڿ� : ���� Ŭ�������� ���� ���� �����ڸ� �������� �ʾҴٸ�
// C++ �����Ϸ��� ����Ʈ ���� �����ڸ� �����Ѵ�.
// ����Ʈ ���� �����ڴ� ��� ������ ���� ����(shallow copy)�ϴµ�,
// �̴� ������ �޸� ������ �����ϴ� ���纻 ��ü�� �����ϰ� �ȴ�.
// 
// 5. ����� ȣ�� : ���� �����ڴ� �����ڰ� ���� ȣ������ �ʾƵ� �����Ϸ��� �˾Ƽ� ȣ���ϴ� ��찡 ����.
// ��ü�� �ٸ� ��ü�� �ʱ�ȭ�ϰų� �Լ��� ���ڷ� ��ü�� ������ �� ���� �����ڰ� �ڵ����� ȣ��ȴ�.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
public:
    // ������
    DynamicArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i; // �ʱ�ȭ
        }
    }
    // ���� ������
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    // �Ҹ���
    ~DynamicArray() {
        delete[] data;
    }
    // Print �Լ�
    void Print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // setValue �Լ�
    void setValue(int index, int newValue) {
        if (index >= 0 && index < size) {
            data[index] = newValue;
        }
        else {
            cout << "Index out of range." << endl;
        }
    }
};

int main() {
    DynamicArray arr1(5);
    DynamicArray arr2 = arr1; // ���� ������ ȣ��

    cout << "arr1: ";
    arr1.Print();

    cout << "arr2: ";
    arr2.Print();

    arr2.setValue(0, 100);
    cout << "After setting value in arr2:" << endl;
    cout << "arr1: ";
    arr1.Print();
    cout << "arr2: ";
    arr2.Print();

    printf("arr1 : %p\n", arr1);
    printf("arr2 : %p\n", arr2);
}

// DynamicArray Ŭ������ ���� �迭�� �������� �Ҵ��ϰ� ���� �����ڸ� ���� �迭�� ���縦 �����Ѵ�.
// main �Լ������� arr1�� �ʱ�ȭ�� �� �̸� �������Ͽ� arr2�� �ʱ�ȭ �Ѵ�.
// �� �� ���� �����ڰ� ȣ��Ǿ� arr1�� �����Ͱ� arr2�� ����ȴ�.

// arr1�� arr2�� �ٸ� �޸� ������ ������ �ȴ�.
// ���� �����ڴ� ������ ���� ��Ȳ���� ȣ�� �� �� �ִ�.
// 1. ��ü�� �ٸ� ��ü�� ������ ��
// 2. �Լ� �Ű������� ��ü�� ���޵� �� (���纻�� ���޵ȴ�.)
// 3. �Լ��� ��ü�� ��ȯ�� �� (���纻�� ��ȯ�ȴ�.)