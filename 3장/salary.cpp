#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main()
{
	int ysalary;
	int msalary;
	
	printf("������ �Է��Ͻÿ�(���� : ����) : ");
	scanf("%d", &ysalary);
	
	msalary = ysalary/12;
	
	printf("�� ���ɾ�(���� : ����) : %d\n", msalary);
	
	return 0;
}
