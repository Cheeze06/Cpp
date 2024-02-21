#include <iostream>
using namespace std;

// friend, static, mutable


// friend (ģ��) :

// friend�� Ŭ������ �⺸ �Լ��� �ٸ� Ŭ������ �ٸ� Ŭ������ �����(private) �Ǵ� ��ȣ(protected)����� ������ �� ���ȴ�.
// �ش� Ŭ������ ����Լ��� �ٸ� Ŭ������ ����� ����� ������ ����������.

//class FriendClass {
//private:
//	int privateData;
//public:
//	FriendClass() : privateData(0) {}
//
//	friend class OtherClass; // OtherClass�� FriendClass�� ����� ����� ������ ����������.
//};
//
//class OtherClass {
//public:
//	void ModifyPrivateData(FriendClass& fc, int newData) {
//		fc.privateData = newData;	// FriendClass�� ����� ����� ���� ����.
//	}
//};


// static (����)

// 1. Ŭ���� ���ο��� static ��� ������ ��: Ŭ������ ��� ��ü���� �����ϴ� ����. �ν��Ͻ����� ���� ������� �ʴ´�.
// 2. �Լ� ���ο��� static ���� ������ ��: �ش� �Լ��� ȣ��� ������ �ʱ�ȭ���� �ʰ� �����Ǵ� ������ �Լ� ȣ�� ���̿� ���� ������ �� ����Ѵ�.


//class MyClass {
//public:
//	int Value; // ��� ��ü�� �����ϴ� ����
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
//	// �Լ��� �Ҹ�Ǳ� ������ 1�� ������ ���� ��µ�.
//
//	std::cout << endl;
//
//	staticCountFunc();
//	staticCountFunc(); 
//	staticCountFunc();
//	// static���� �Լ����� �����ǹǷ� ���� �������� ��� �߻�
//}


// 3. Mutable(����)

// Ŭ������ ��� ��� �Լ� �������� ���� ������ ������ ������ �� �ֵ��� ���ش�.
// �Ϲ��� ��� ��� �Լ��� ��ü�� ���¸� �������� �ʾƾ� �Ѵ�.
// ������ ���δ� Ư�� ������ �����ϰ� ���� �� mutable�� ���.


//class Mutable {
//private:
//	mutable int Value;
//public:
//	Mutable() : Value(0) {}
//
//	void MutableValue() const {
//		Value++;	// ��� ��� �Լ��������� ���� ���
//	}
//
//	int getValue() const {
//		return Value;
//	}
//};
//
//int main() {
//	Mutable obj;
//	cout << "�ʱ� ��: " << obj.getValue() << endl;
//
//	obj.MutableValue();
//
//	cout << "���� ��: " << obj.getValue() << endl;
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

//	cout << "Private ������ �ٲ�� �� : " << fc.getPrivateData() << endl;

//	oc.ModifyPrivateData(fc, 42);

//	cout << "Private ������ �ٲ� �� : " << fc.getPrivateData() << endl;
//}