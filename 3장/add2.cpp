#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	int y;
	int sum;
	
	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &y);
	
	sum = x + y;
	printf("�� ���� �� : %d\n", sum);
	
	return 0; 
}
