#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int order, turn = 0;
	int usH = 100, usD = 10, moH = 80, moD = 5;
	
	
	srand(time(NULL));
	
	
	printf(">> ���� �ý��� <<\n");
	order = rand() % 2;
	while(1) {	
	printf("## %d��° ��\n", ++turn);
	if(order == 0 ) {
		moH = moH - usD; 
		printf("���Ϳ��� %d ������ ���� hp : %d\n", usD, moH);
		if(moH <= 0) {
			printf("����� �¸�\n");
			return 0;
		}
		usH = usH - moD;
		printf("����ڿ��� %d ������ ����� hp : %d\n", usD, moH);
		if(usH <= 0) {
			printf("���� �¸�\n");
			return 0;
		}
		printf("\n");
	} else { //���� ���� 
		usH = usH - moD;
		printf("����ڿ��� %d ������ ����� hp : %d\n", usD, moH);
		if(usH <= 0) {
			printf("���� �¸�\n");
			return 0;
		}
			moH = moH - usD; 
		printf("���Ϳ��� %d ������ ���� hp : %d\n", usD, moH);
		if(moH <= 0) {
			printf("����� �¸�\n");
			return 0;
		}
		
	}
	
	}
	return 0;
}
	

