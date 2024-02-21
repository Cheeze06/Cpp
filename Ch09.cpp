// �������� & ��������

// 1. ���� ����(Deep Copy):

// ���� ����� ����Ǵ� ��ü�� ��� ������ ���ο� ��ü�� �����ϴ� ����̴�.
// �� ��, ��ü �ȿ� ���Ե� ������� �Ҵ�� �޸�(�����Ͱ� ����Ű�� ������)���� ���ο� �޸𸮿� ����ȴ�.
// ���� ��ü�� ����� ��ü�� ������ ������ ��ü�� �ȴ�.
// ���� ���縦 ���� ����� ��ü�� �����ص� ���� ��ü�� ������ ���� �ʴ´�.

// ���� : ��ü ���� �������� ����, �ϳ��� ��ü�� ��ȭ�� �ٸ� ��ü�� ������ ��ġ�� �ʴ´�.

// ���� : �����ϴ� �������� ũ�Ⱑ Ŭ ��� �޸� ��뷮�� ����. ���� ���ϸ� ����ų �� �ִ�
// �����ϴ� ������ ����, �߸� ������ ��� �޸� ���� �� ������ �߻��� �� �ִ�.

// 2. ���� ����(Shallow Copy)

// ���� ����� ��ü�� �޸𸮸� �ܼ��� �����Ͽ� ���ο� ��ü�� �����ϴ°��� �ǹ�.
// ��ü �ȿ� ���Ե� �����ʹ� �ܼ��� �ּҸ� ����Ǹ�, ���� �����Ͱ� �����ȴ�.
// ���� ���縦 ���� ����� ��ü�� �����ϸ� ���� ��ü�� ���� ����� �� �ֵ�.

// ���� : �����ϴ� �������� ũ�Ⱑ ū ��� �޸� ��뷮�� ���ɿ� ������.
// ���� ������ �ܼ�, ��ü�� ������ ������ �����ϴ�.

// ���� : �ϳ��� ��ü�� �����ϸ� �ٸ� ��ü�� ������ ���� �� ����.
// ��ü ���� �������� ������ �� �ִ�.


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
//	// ���� ����
//	ShallowCopy(const ShallowCopy& other) : size(other.size), data(other.data) {
//		data = new int[size];
//		std::copy(other.data, other.data + size, data);
//	}
//
//	~ShallowCopy()
//	{
//		delete[] data;
//	}
//	// ó�� �Ҹ����� ȣ��� �� �޸𸮸� ����
//	// �� ��° �Ҹ��ڰ� ȣ��� �� ���� �޸� �ּҿ� ���ؼ� �ٽ� �Ҵ������� ��Ų��
//	// �̹� ������ �޸𸮸� �ٽ� �����Ϸ��� �ϱ� ������ �����߻�
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