#include <iostream>
using std::cout;
using std::endl;

// �Լ� �����ε�

// C������ ������ ���� ������ �̸��� �Լ��� ���ǵǴ� ���� ������� �ʴ´�.
// �� �Լ��� �̸��� ���� ������ ������ ������ �߻��Ѵ�.

//#include <stdio.h>
//int Myfunc(int num) {
//	num++;
//	return num;
//}
//
//int Myfunc(int num1, int num2) {
//	return num1 + num2;
//}
//
//int main() {
//	printf("%d\n", Myfunc(20));
//	printf("%d\n", Myfunc(30, 40));
//
//}

// �Լ� ȣ�� �� ���޵Ǵ� ���ڸ� ���ؼ� ȣ���ϰ��� �ϴ� �Լ��� ������ �����ϱ� ������
// �Ű������� ���� ���°� �ٸ��ٸ�, ������ �̸��� �Լ����Ǹ� ����� �� �ִ�. C++�� ����ϰ� �ִ�.

//#include <iostream>
//using std::cout;
//using std::endl;
//
//// ������ �Ű������� �޴� �Լ� �����ε�
//void printNumber(int num) {
//	cout << "���� : " << num << endl;
//}
//
//// �Ǽ��� �Ű������� �޴� �Լ� �����ε�
//void printNumber(double num) {
//	cout << "�Ǽ� : " << num << endl;
//}
//
//// ���ڿ� �Ű������� �޴� �Լ� �����ε�
//void printNumber(const char* str) {
//	cout << "���ڿ� : " << str << endl;
//}
//
//int main()
//{
//	printNumber(5);
//	printNumber(3.14);
//	printNumber("Hello");
//}

// ����:
// ������ ���� ����� �����ϴ� calculate �Լ��� �����ε��� �̿��Ͽ� �����Ͻÿ�.

// ���� 2���� �Է¹޾� ���� ����� ��ȯ�ϴ� �Լ�
// ���� 3���� �Է¹޾� ���� ����� ��ȯ�ϴ� �Լ�
// �Ǽ� 2���� �Է¹޾� ����� ����Ͽ� ��ȯ�ϴ� �Լ�
// main �Լ����� ������ �����ε��� ������ ȣ���Ͽ� ����� ����غ�����.

//#include <iostream>
//using std::cout;
//using std::endl;
//
//int calculate(int a, int b) {
//	return a + b;
//}
//
//int calculate(int a, int b, int c) {
//	return a*b*c;
//}
//
//double calculate(double a, double b) {
//	return (a + b) / 2;
//}
//
//int main()
//{
//	int sumResult = calculate(5, 3);
//	int productResult = calculate(2, 4, 3);
//	double averageResult = calculate(3.5, 7.2);
//
//	cout << "���� 2�� ���ϱ� ���: " << sumResult << endl;
//	cout << "���� 3�� ���ϱ� ���: " << productResult << endl;
//	cout << "�Ǽ� 2�� ��� ���: " << averageResult << endl;
//}

// �Ű������� ����Ʈ��

// C++���� �Լ��� ������ ��, �Ű������� �⺻���� �����ϴ� ���� "�Ű����� ����Ʈ��" �̶�� �Ѵ�.
// �Լ��� ȣ���� �� �ش� �Ű������� ���� �������� �ʾƵ� �ڵ����� ���ȴ�.

//void printNumber(int number = 10) {
//	cout << "Number: " << number << endl;
//}
//int main()
//{
//	printNumber();
//	printNumber(20);
//}

// ���� ���� �ڵ忡�� printNumber �Լ��� number��� �Ű������� ������,
// �Ű������� ����Ʈ ������ 10�� ���� �ߴ�.
// �Լ��� ȣ���� �� �Ű������� �������� ������ �⺻���� 10�� ���ȴ�.

// C++���� �Ű����� ����Ʈ���� �Լ� ���� �κп����� ������ �� �ִ�.
// �Լ� ���� �κп����� �Ű������� ����Ʈ���� ������ �� ����.
// �Ű����� ����Ʈ���� �ִ� �Ű��������� �׻� �Լ��� �� �ڿ� ��ġ�ؾ� �Ѵ�.

// �Լ� ���ǽ� �Ű����� ����Ʈ�� ����
//void printMessageAndNumber(const char* message, int number = 0) {
//	cout << "Message : " << message << ", Number: " << number << endl;
//}
//
//int main()
//{
//	printMessageAndNumber("Hello");
//	printMessageAndNumber("World", 42);
//}

// �Ű����� �� �ϳ����� ����Ʈ���� ������ �� �ְ�, ���� �Ű������� ��� ����Ʈ���� ������ ���� �ִ�.

//����:
// �Լ� calculate_cost�� ��ǰ�� ���ݰ� ������ ���ڷ� �޾Ƽ� �� ����� ����ϴ� �Լ��Դϴ�.
// ������ �־����� ������ ������ 1�� �����մϴ�. �� �Լ��� �����ϰ� �׽�Ʈ�غ�����.

// ��ǰ�� �����Է� > �����Է�(�Է�X -> ���� 1�� ����) -> ����ڰ� �Է��� �� �Ǵ� ����Ʈ ���� �̿��Ͽ� �� ��� ���

//int calculate_cost(int a, int b = 1) {
//	return a * b;
//}
//
//int main() {
//	int prise, cost;
//	cout << "��ǰ�� ������ �Է��ϼ���: " << endl;
//	std::cin >> prise;
//	cout << "��ǰ�� ���� �Է��ϼ���: " << endl;
//	std::cin >> cost;
//
//	cout << "\n�� ��� : " << calculate_cost(prise, cost) << endl;
//
//	return 0;
//}

