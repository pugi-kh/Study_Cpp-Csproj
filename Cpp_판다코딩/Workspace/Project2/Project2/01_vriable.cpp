#include <iostream>

using namespace std;

int main() {

	//1. 변수란? 변할 수 있는 수
	//cf) 상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)?
	*/

	//int a;

	/*
	1. 숫자로 시작할 수 없음
	2. c++에서 사용하고 있는 키워드는 사용할 수 없음
	3. white space를 사용할 수 없음
	*/

	//int 77aaaa;
	//int return;

	int a;
	a = 7;

	int b = 3;

	a = 5;
	b = 10;

	cout << "a = " << a << ", b = " << b << endl;
	cout << "a 주소 = " << &a << ", b 주소 = " << &b << endl;

	return 0;
}