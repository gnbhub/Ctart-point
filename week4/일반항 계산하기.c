#include <stdio.h>

int main(void)
{
	int a, b, temp, n, result=0;

	scanf("%d %d", &a, &b);

	if(a > b){
	temp = a;
	a = b;
	b = temp;
	}
	
	if (a == b) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
		}
	
	else
		printf("���� %d�Դϴ�.", (a+b)*(b-a-1)/2);
	
	return 0;
}
