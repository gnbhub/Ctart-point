#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;
  
	printf("a�� �ּ� : %p \n", p);
	printf("p�� �ּ� : %p \n", &p);
	printf("p�� ����Ű�� a�� ����� �� : %d \n", *p);

	return 0;
}
