#include <stdio.h>

int main(void)	
{
	int move, i;
    char direction, str[] = "abcde";
    scanf("%c %d", &direction, &move);
    if(direction == 'L'){
        move = 5 - move;
    }
	char newstr[6];
    for (i=0; i<=4; i++) {
        newstr[(move+i)%5] = str[i];
    }
    printf("%s", newstr);

	/*
	char str[6] = "abcde";   //�迭ũ�Ⱑ 6�� ������ �迭 �� ���� ���� �˸��� \0����.
	int i, j;
	char d ;
	scanf("%c",&d);
	scanf("%d",&i);
	if (d=='L')
	   i=5-i;    //i=���� ��-i�� �� ����.
	char temp[6];
	for (j = 0; j < 5; j++)     //���������� ���� ��-1��ŭ �ε��� ����
	{
	temp[(j + i)%5] = str[j];    //�Է¹��� i�� ���� ���� �� �� ���ڸ��� �ǹǷ� %���� ��
	}
	printf("%s", temp);
*/
    return 0;
}
