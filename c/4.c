/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int N;
	scanf_s("%d", &N);

	if (N <= 100 && N >= 90) printf("A");
	else if (N < 90 && N >= 80) printf("B");
	else if (N < 80 && N >= 70) printf("C");
	else if (N < 70 && N >= 60) printf("D");
	else if (N < 60) printf("F");

    return 0;
}