/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int N;
	scanf_s("%d", &N);
	int total = 0;
	while (N <= 0)
	{
		printf("X\n");
		
		scanf_s("%d", &N);
	}
	for (int i = 1; i <= N; i++)
		total += i;
	printf("%d",total);

    return 0;
}