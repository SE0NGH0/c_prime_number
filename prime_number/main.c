#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int column = 0;
	int inputValue; // �Է� ���� ��
	int stepValue; // �ܰ躰 ������ ��
	int incValue; // �����ӳѹ��� Ȯ���ϱ� ���� ������

	printf("2 �̻��� ������ �Է� : ");
	scanf("%d", &inputValue);

	for (stepValue = 2; stepValue <= inputValue; stepValue++)
	{
		for (incValue = 2; incValue < stepValue; incValue++)
		{
			if (stepValue % incValue == 0)
			{
				break;
			}
		
		// �������� �������� 0���� �������� ���� ���� pn���� �����Ͽ� ȭ�鿡 ǥ���Ѵ�.
		if (incValue == stepValue)
		{
			printf("%5d", stepValue);
			column++;
			// 5���� �Ѿ�� �ٹٲ��� �����Ѵ�.
			if (column == 5)
			{
				column = 0;
				printf("\n");
			}
		}
	}
}