#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int column = 0;
	int inputValue; // 입력 받은 수
	int stepValue; // 단계별 검증할 수
	int incValue; // 프라임넘버를 확인하기 위한 나눔수

	printf("2 이상의 정수를 입력 : ");
	scanf("%d", &inputValue);

	for (stepValue = 2; stepValue <= inputValue; stepValue++)
	{
		for (incValue = 2; incValue < stepValue; incValue++)
		{
			if (stepValue % incValue == 0)
			{
				break;
			}
		
		// 최종까지 나머지가 0으로 떨어지지 않은 수는 pn으로 판정하여 화면에 표시한다.
		if (incValue == stepValue)
		{
			printf("%5d", stepValue);
			column++;
			// 5개를 넘어가면 줄바꿈을 수행한다.
			if (column == 5)
			{
				column = 0;
				printf("\n");
			}
		}
	}
}