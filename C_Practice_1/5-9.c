#include <stdio.h>

int main()
{
	int n;

	printf("태어난 해를 입력하세요 : ");
	scanf("%d", &n);

	switch (n%12)
	{
	case 0: printf("당신은 원숭이띠입니다.\n");
		break;
	case 1: printf("당신은 닭띠입니다.\n");
		break;
	case 2: printf("당신은 개띠입니다.\n");
		break;
	case 3: printf("당신은 돼지띠입니다.\n");
		break;
	case 4: printf("당신은 쥐띠입니다.\n");
		break;
	case 5: printf("당신은 소띠입니다.\n");
		break;
	case 6: printf("당신은 범띠입니다.\n");
		break;
	case 7: printf("당신은 토끼띠입니다.\n");
		break;
	case 8: printf("당신은 용띠입니다.\n");
		break;
	case 9: printf("당신은 뱀띠입니다.\n");
		break;
	case 10: printf("당신은 말띠입니다.\n");
		break;
	case 11: printf("당신은 양띠입니다.\n");
		break;
	default: printf("출생년도를 다시 입력하세요");
	}
}