#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float a, b;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%f", &a);
	printf("�и� �Է��ϼ��� : ");
	scanf("%f", &b);
	
	printf("�������� ����� %f�Դϴ�.", (a/b));
	
	return 0;
}
