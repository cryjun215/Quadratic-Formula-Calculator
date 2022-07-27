#include <stdio.h>
#include <math.h>
#define _CRT_SEUCRE_NO_WARNINGS

int main()
{
	float a = 0, b = 0, c = 0;
	float result1 = 0, result2 = 0;
	float root = 0;
	printf("계수 a를 입력하시오 : ");
	scanf("%f", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%f", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%f", &c);

	root = (b * b) - (4 * a * c);
	if (a == 0) {
		result2 = -c / b;
		printf("%f\n", result2);
	}
	else if (root < 0) {
		printf("위의 이차 방정식의 실근은 존재하지 않습니다.\n");
	}
	else {
		result1 = (-b + sqrt(root)) / (2 * a);
		result2 = (-b - sqrt(root)) / (2 * a);
		printf("위의 이차 방정식의 실근은 %.2f과 %.2f입니다.\n", result1, result2);
	}

	return 0;
}