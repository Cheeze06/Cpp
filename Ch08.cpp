// 객체 포인터배열 (객체를 가리키는 포인터 배열)
// C++에서 객체 포인터 배열은 객체를 가리키는 포인터들의 생명이다. 동적으로 객체를 생성하고관리할 수 있다.
// 예를 들어 동적 다형성을 구현하거나 객체들을 동적으로 생성하고 제거하는 경우에 자주 활용된다.

// 1. 객체 포인터 배열 선언
// 객체 포인터 배열을 선언하려면, 객체의포인터들을 저장할 배열을 신언한다.

// MyClass* objArray[10];

// 2. 객체 생성 및 포인터 저장
// 객체를 동적으로 생성하고 그 포인터를 배열에 저장할 수 있다.
// 객체 생성후 해당 객체의 포인터를 배열요소에 저장한다
// objArray[0] = new MyClass(); // 객체 생성 후 포인터 저장

// 3. 객체 사용 및 메모리 해제 : 
// 객체 포인터 배열에 저장된 객체 포인터들을 사용하여 객체에 접근하고 메소드를 호출할 수 있다.
// 작업이 끝나면 메모리 누수를 방지하기 위해 상성한 객체들을 해제해야 한다.

// objArray[0] -> simeMethod();	// 객체 메소드 호출
// delete objArray[0];	// 객체 메모리 해제

// 4. 모든 객체 해제 : 
// 객체 포이넡 배열에 저장된 모든 객체들을 해제하기 위해서는 배열을 순회하면서 각 객체를 삭제해야한다.
 

//for (int i = 0; i < 10; i++) {
//	delete objArray[i];
//}

//5. nullptr 처리:
// 객체 포인터 배열의 요소가 아직 객체를 가리키지 않은 경우, 초기화를 위해 nullptr로 초기화 하는것이 좋다.
// 이를 통해 메모리 주소가 유효하지 않은 상태를 나타낼 수 있다.

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
//	// 객체 생성 및 배열에 저장
//	for (int i = 0; i < array_size; i++) {
//		objectArray[i] = new myClass(i + 1);
//	}
//
//	//객체 메서드 호출
//	for (int i = 0; i < array_size; i++) {
//		objectArray[i]->printValue();
//	}
//	// 객체 메모리 해제
//	for (int i = 0; i < array_size; i++) {
//		delete objectArray[i];
//	}
//}

// 문제 : 도서관리 시스템
// 1. Book 클래스를 작성, 이 클래스는 다음과 같은 멤버 변수와 멤버 함수를 가져야 한다.

// title : 도서 제목, 문자열
// author : 도서 저자, 문자열
// Book :  생성자, 제목과 저자를 매개변수로 받음
// display : 도서의 정보 출력, 멤버변수

// main
// 도서 객체 3개 생성, 정보 설정
// 객체 포인터 배열을 사용하여 위에서 생성한 도서 객체 저장
// 반복문을 통해 객체 포인터 배열에 저장된 각 도서 정보 출력

#include <iostream>
#include <string>
using namespace std;
//
//class book {
//public:
//	book(string a, string b) : booktitle(a), author(b) {}
//	void display() {
//		cout << "제목: " << booktitle << ", 저자: " << author << endl;
//	}
//private:
//	string booktitle;
//	string author;
//};
//
//int main()
//{
//	// 객체 생성
//	book book1("이것이 자바다", "자바");
//	book book2("이것이 리눅스다", "리눅스");
//	book book3("이것이 C다", "C");
//
//	book1.display();
//	book2.display();
//	book3.display();
//
//	return 0;
//}

// this는 멤버 함수 내에서 사용되는 특별한 포인터이다.
// 이 포인터는 현재 객체의 주소를 가리키며.
// 멤버 함수 내에서 객체 자신을 가리키는데 사용된다.
// this 포인터를 사용하여 객체의 멤버 변수와 멤버 함수에 접근할 수 있다.

//class Myclass {
//public:
//	Myclass(int val) : value(val) {}
//	void printValue() {
//		// this 포인터를 사용하여 현재 객체의 멤버 변수에 접근한다.
//		cout << "value: " << this->value << endl;
//	}
//	void setValue(int val) {
//		// this 포인터는 객체의 주소를 가리키므로 실제로는 value 멤버 변수를 가리키는 것과 동일한 효과를 가져온다.
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

// 문제: 주어진 Person 클래스를 완성하시오.
// Person 클래스는 이름과 나이를 저장하며, printInfo 멤버 함수를 사용하여
// 이름과 나이를 출력할 수 있어야 한다.
// 또한 setAge 멤버 함수를 사용하여 나이를 설정할 수 있어야 한다.
// 이 때, setAge 함수 내에서 this 포인터를 사용하여 나이를 설정하시오.
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
//	person.printInfo();	// 예상 출력: name: Alice, Age: 30;
//
//	person.setAge(35);
//	person.printInfo(); // 예상 출력: name: Alice, Age:35;
//}

// 복사 생성자

// 객체의 복사를 수행하는 특별한 생성자이다.
// 객체의 복사는 두가지 주요 시나리오에서 발생한다.
// 1. 하나의 객체를 다른 객체로 초기화 하는 경우
// 2. 함수 호출 시 객체의 인자로 전달하는 경우

// 복사 생성자의 특징
// 1. 인자타입 : 복사 생성자의 인자는 해당 클래스의 상수 래퍼런스로 전달된다.
// 
// 2. 멤버 변수 복사 : 복사 생성자의 주요 역할은 원본 객체의 멤버 변수 값을 새로 생성되는 객체에 복사하는 것이다.
// 두 객체는 독립적인 메모리 공간을 가지게 된다.
// 
// 3. 동적 할당된 자원 : 만약 클래스가 동적으로 할당된 자원(예: 힙 메모리)를 가지고 있다면
// 복사 생성자는 이를 적절하게 복사하여 메모리 누수를 방지해야 한다.
// 
// 4. 디폴트 복사 생성자 자원 : 만약 클래스에서 직접 복사 생성자를 정의하지 않았다면
// C++ 컴파일러는 디폴트 복사 생성자를 제공한다.
// 디폴트 복사 생성자는 멤버 변수를 얕은 복사(shallow copy)하는데,
// 이는 동일한 메모리 공간을 공유하는 복사본 객체를 생성하게 된다.
// 
// 5. 명시적 호출 : 복사 생성자는 개발자가 직접 호출하지 않아도 컴파일러가 알아서 호출하는 경우가 많다.
// 객체를 다른 객체로 초기화하거나 함수의 인자로 객체를 전달할 때 복사 생성자가 자동으로 호출된다.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
public:
    // 생성자
    DynamicArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i; // 초기화
        }
    }
    // 복사 생성자
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    // 소멸자
    ~DynamicArray() {
        delete[] data;
    }
    // Print 함수
    void Print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // setValue 함수
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
    DynamicArray arr2 = arr1; // 복사 생성자 호출

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

// DynamicArray 클래스는 정수 배열을 동적으로 할당하고 복사 생성자를 통해 배열의 복사를 수행한다.
// main 함수에서는 arr1을 초기화한 후 이를 ㅅ가용하여 arr2를 초기화 한다.
// 이 때 복사 생성자가 호출되어 arr1의 데이터가 arr2로 복사된다.

// arr1과 arr2는 다른 메모리 공간을 가지게 된다.
// 복사 생성자는 다음과 같은 상황에서 호출 될 수 있다.
// 1. 객체를 다른 객체에 대입할 때
// 2. 함수 매개변수로 객체가 전달될 때 (복사본이 전달된다.)
// 3. 함수가 객체를 반환할 때 (복사본이 반환된다.)