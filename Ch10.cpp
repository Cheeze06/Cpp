#include <iostream>
using namespace std;

// friend, static, mutable


// friend (친구) :

// friend는 클래스의 멤보 함수나 다른 클래스를 다른 클래스의 비공개(private) 또는 보호(protected)멤버로 선언할 때 사용된다.
// 해당 클래스의 멤버함수가 다른 클래스의 비공개 멤버에 접근이 가능해진다.

//class FriendClass {
//private:
//	int privateData;
//public:
//	FriendClass() : privateData(0) {}
//
//	friend class OtherClass; // OtherClass는 FriendClass의 비공개 멤버에 접근이 가능해진다.
//};
//
//class OtherClass {
//public:
//	void ModifyPrivateData(FriendClass& fc, int newData) {
//		fc.privateData = newData;	// FriendClass의 비공개 멤버에 접근 가능.
//	}
//};


// static (정적)

// 1. 클래스 내부에서 static 멤버 변수일 때: 클래스의 모든 객체들이 공유하는 변수. 인스턴스마다 따로 저장되지 않는다.
// 2. 함수 내부에서 static 지역 변수일 때: 해당 함수가 호출될 때마다 초기화되지 않고 유지되는 변수로 함수 호출 사이에 값을 유지할 때 사용한다.


//class MyClass {
//public:
//	int Value; // 모든 객체가 공유하는 변수
//};
//// int MyClass::Value = 0;
//
//void CountFunc() {
//	int count = 0;
//	count++;
//	cout << "count: " << count << endl;
//}
//
//void staticCountFunc() {
//	static int count = 0;
//	count++;
//	cout << "count: " << count << endl;
//}
//
//int main()
//{
//	CountFunc();
//	CountFunc();
//	CountFunc();
//	// 함수가 소멸되기 때문에 1로 일정한 값만 출력됨.
//
//	std::cout << endl;
//
//	staticCountFunc();
//	staticCountFunc(); 
//	staticCountFunc();
//	// static으로 함수값이 유지되므로 값이 더해지는 결과 발생
//}


// 3. Mutable(가변)

// 클래스의 상수 멤버 함수 내에서도 수정 가능한 변수를 선언할 수 있도록 해준다.
// 일반적 상수 멤버 함수는 객체의 상태를 변경하지 않아야 한다.
// 하지만 때로는 특정 변수만 수정하고 싶을 때 mutable을 사용.


//class Mutable {
//private:
//	mutable int Value;
//public:
//	Mutable() : Value(0) {}
//
//	void MutableValue() const {
//		Value++;	// 상수 멤버 함수내에서도 수정 사능
//	}
//
//	int getValue() const {
//		return Value;
//	}
//};
//
//int main() {
//	Mutable obj;
//	cout << "초기 값: " << obj.getValue() << endl;
//
//	obj.MutableValue();
//
//	cout << "수정 값: " << obj.getValue() << endl;
//}


//class FriendClass;

//class FriendClass {
//private:
//	int privateData;
//public:
//	FriendClass() : privateData(0) {}
//
//	int getPrivateData() const {
//		return privateData;
//	}
//	friend class OtherClass;
//};

//class OtherClass {
//public:
//	void ModifyPrivateData(FriendClass& fc, int newData) {
//		fc.privateData = newData;
//	}
//};

//int main()
//{
//	FriendClass fc;
//	OtherClass oc;

//	cout << "Private 데이터 바뀌기 전 : " << fc.getPrivateData() << endl;

//	oc.ModifyPrivateData(fc, 42);

//	cout << "Private 데이터 바뀐 후 : " << fc.getPrivateData() << endl;
//}