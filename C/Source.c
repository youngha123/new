#include <stdio.h>

// stdio
// 표준 입출력 헤더 파일

void main()
{
#pragma region 서식 지정자
	// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

	// printf() : 출력하는 함수
	// (" ")

	// 자료형
	// char   <-> 정수형 (1 byte) -> 하나의 문자를 저장할 수 있습니다. (하나의 문자를 적을때는 ' ')
	// short  <-> 정수형 (2 byte)
	// int    <-> 정수형 (4 byte)
	// long   <-> 정수형 (4 byte) OS(운영체제)에 따라 8 or 4 byte가 나올 수 있다.
	// float  <-> 실수형 (4 byte)
	// double <-> 실수형 (8 byte)

	char alphabet = 'G'; 

	int data = 10;

	float decimal = 12.5f;
	
	double value = 99.75;


	// 변수를 출력하는 방법
	// "%c"  : 하나의 문자를 출력하는 서식 지정자
	// "%d"  : 정수를 출력하는 서식 지정자
	// "%f"  : 실수(float)를 출력하는 서식 지정자
	// "%s"  : 문자열을 출력하는 서식 지정자
	// "%p"  : 주소를 출력하는 서식 지정자
	// "%lf" : 실수(double)를 출력하는 서식 지정자

	// printf("서식지정자", alphabet);	
	// \n : 개행 문자
	//printf("%c\n", alphabet);
	//printf("%d\n", data);

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	// 넣을 수 있으며, 서식 지정자의 순서는 왼쫒ㄱ에서부터 시작합니다.
	//printf("%f %lf\n", decimal, value);

	// 서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할 수 있으며,
	// 서식과 변수의 형태가 일치하지 않으면 원하는 값이 출력되지 않습니다.

	// ex) int data1 = 20;
	// ex) printf("%s\n", data1);

	// printf("안녕하세요.");

#pragma endregion

#pragma region 변수의 이름 규칙
	// 1. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 3value = 10;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int int = 30;

	// 3. 변수의 이름에 공백이 포함될 수 없습니다.
	// ex) int count Down = 5;

	// 4. 변수의 이름으로 특수 기호는 "_"와 "$"만 허용합니다.
	// ex) int count_Down$ = 60;

	// 5. 같은 이름의 변수를 선언할 수 없습니다.
	// ex) int a = 35;
	// ex) int a = 67;

	// 6. 변수의 이름은 대소문자를 구별합니다.
	// ex) int apple = 1;
	// ex) int APPLE = 2;
#pragma endregion

#pragma region 변수의 초기화
	// 최초로 변수에 값을 저장해주는 과정입니다.
	
	// 4 byte 메모리 공간 생성
	int a1; // a1 선언

	a1 = 99; // a1(99)

	// 변수(변할 수 있는 수)
	a1 = 999;

	//printf("a1 변수의 값 : %d", a1);
#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더이상 변경할 수 없는 메모리 공간입니다.
	
	const float pi = 3.141592f;
	
	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.
	// ex) pi = 99.236f; ERROR

	// 심볼릭 상수는 메모리 공간을 가지고 있는 상수입니다.
	// ex) pi 
	
	// 이터널 상수는 메모리 공간을 가지고 있지 않은 상수입니다.
	// ex) 3.141592

#pragma endregion

#pragma region 과제

	// 산술 연산자 : +, -, *, /
	// 정수 값으로 연산해주세요.
	
	int a = 10;

	int b = 20;

	const int A = 100;

	// 1. printf(    , 변수 + 변수);
	printf("%d\n", a + b);

	// 2. printf(    , 변수 + 리터럴 상수);
	printf("%d\n", a + 100);

	// 3. printf(    , 변수 - 심볼릭 상수);
	printf("%d\n", a - A);

	// 4. printf(    , 리터럴 상수 * 심볼릭 상수);
	printf("%d\n", 100 * A);

	// 5. printf(    , 심볼릭 상수 / 심볼릭 상수);
	printf("%d\n", A / A);

	// 6. printf(    , 리터럴 상수 / 리터럴 상수);
	printf("%d\n", 100 / 100);

#pragma endregion

}

