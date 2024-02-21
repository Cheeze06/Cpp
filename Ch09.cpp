// 깊은복사 & 얕은복사

// 1. 깊은 복사(Deep Copy):

// 깊은 복사는 복사되는 객체의 모든 내용을 새로운 객체에 복사하는 방식이다.
// 이 때, 객체 안에 포함된 동저긍로 할당된 메모리(포인터가 가리키는 데이터)역시 새로운 메모리에 복사된다.
// 원본 객체와 복사된 객체는 완전히 독립된 개체가 된다.
// 깊은 복사를 통해 복사된 객체를 수정해도 원본 객체는 영향을 받지 않는다.

// 장점 : 객체 간의 독립성을 제공, 하나의 객체의 변화가 다른 객체에 영향을 미치지 않는다.

// 단점 : 복사하는 데이터의 크기가 클 경우 메모리 사용량이 증가. 성능 저하를 일으킬 수 있다
// 복사하는 과정이 복잡, 잘못 구현된 경우 메모리 누수 및 오류가 발생할 수 있다.

// 2. 얕은 복사(Shallow Copy)

// 얕은 복사는 객체의 메모리를 단순히 복사하여 새로운 객체를 생성하는것을 의미.
// 객체 안에 포함된 포인터는 단순히 주소만 복사되며, 실제 데이터가 공유된다.
// 얕은 복사를 통해 복사된 객체를 수정하면 원본 객체도 같이 변경될 수 있따.

// 장점 : 복사하는 데이터의 크기가 큰 경우 메모리 사용량과 성능에 유리함.
// 복사 과정이 단순, 객체간 데이터 공유가 가능하다.

// 단점 : 하나의 객체를 수정하면 다른 객체도 영향을 받을 수 없다.
// 객체 간의 독립성이 부족할 수 있다.


//#include <iostream>
//#include <algorithm>
//
//class ShallowCopy {
//private:
//	int* data;
//	int size;
//public:
//	ShallowCopy(int s) : size(s) {
//		data = new int[size];
//		for (int i = 0; i < size; i++) {
//			data[i] = i;
//		}
//	}
//	// 얕은 복사
//	ShallowCopy(const ShallowCopy& other) : size(other.size), data(other.data) {
//		data = new int[size];
//		std::copy(other.data, other.data + size, data);
//	}
//
//	~ShallowCopy()
//	{
//		delete[] data;
//	}
//	// 처음 소멸저가 호출될 때 메모리를 해제
//	// 두 번째 소멸자가 호출될 때 같은 메모리 주소에 대해서 다시 할당해제를 시킨다
//	// 이미 해제된 메모리를 다시 해제하려고 하기 때문이 문제발생
//
//	void printData() { 
//		for (int i = 0; i < size; i++) {
//			std::cout << data[i] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	void setValue(int index, int newValue) {
//		if (index >= 0 && index < size) {
//			data[index] = newValue;
//		}
//	}
//};
//
//int main()
//{
//	ShallowCopy original(5);
//	original.printData();
//
//	ShallowCopy copy = original;
//	copy.printData();
//
//	copy.setValue(0, 100);
//	original.printData();
//}