#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int order, turn = 0;
	int usH = 100, usD = 10, moH = 80, moD = 5;
	
	
	srand(time(NULL));
	
	
	printf(">> 전투 시스템 <<\n");
	order = rand() % 2;
	while(1) {	
	printf("## %d번째 턴\n", ++turn);
	if(order == 0 ) {
		moH = moH - usD; 
		printf("몬스터에게 %d 데미지 몬스터 hp : %d\n", usD, moH);
		if(moH <= 0) {
			printf("사용자 승리\n");
			return 0;
		}
		usH = usH - moD;
		printf("사용자에게 %d 데미지 사용자 hp : %d\n", usD, moH);
		if(usH <= 0) {
			printf("몬스터 승리\n");
			return 0;
		}
		printf("\n");
	} else { //몬스터 선공 
		usH = usH - moD;
		printf("사용자에게 %d 데미지 사용자 hp : %d\n", usD, moH);
		if(usH <= 0) {
			printf("몬스터 승리\n");
			return 0;
		}
			moH = moH - usD; 
		printf("몬스터에게 %d 데미지 몬스터 hp : %d\n", usD, moH);
		if(moH <= 0) {
			printf("사용자 승리\n");
			return 0;
		}
		
	}
	
	}
	return 0;
}
	

