#include <stdio.h>

int main()
{
	/*���ڿ��� Ư¡ 
	1. �ѱ��� 2��, �������� 1�� byte
	2. ���� \0(=null)���� �ν�*/

	char A[10] = {'a', 'b', '\0', NULL, 'c', 'd'};

	printf("%s\n\n", A);//%s�� �ϸ� A �� ������ %c ������ for�� ������ �� ����

	char B[10];

	scanf("%s", &B);//&��� �Է°���, ���� �ִ� ���ڿ��� ���� �� ����

	for (int i = 0; i < 10; i++)
	{
		printf("%c ", B[i]);
	}
}