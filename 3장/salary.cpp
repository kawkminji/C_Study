#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main()
{
	int ysalary;
	int msalary;
	
	printf("연봉을 입력하시오(단위 : 만원) : ");
	scanf("%d", &ysalary);
	
	msalary = ysalary/12;
	
	printf("월 수령액(단위 : 만원) : %d\n", msalary);
	
	return 0;
}
