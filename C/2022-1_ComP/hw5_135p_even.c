#include <stdio.h>

int main(){
	unsigned int num;
	printf("16진수로 데이터를 입력하세요: ");
	scanf("%x",&num);
	int i, s;
	for(s=0; s<=sizeof(num); s++){
		for (i=0; i<=(sizeof(num)); i++){
			int a=(num>>s) & 0xff; //&비트마스크, >>비트이동 
			printf("byte %d: %x\n",i, a);	
			s+=8;}	
			}	
	}
	
	

/*int main(){
	int time, hour, min, second;
	
	printf("재생 시간 (초)? ");
	scanf("%d",&time);
	
	hour= time/3600;
	min= time%3600/60;
	second=time%60;
	
	printf("재생시간은 %d시 %d분 %d초 입니다.",hour,min,second);
	
}*/ // 136p 8번 

/*int main(){
	double kg, ms, J;
	
	printf("질량(kg)?");
	scanf("%lf",&kg);
	printf("속력(m/s)?");
	scanf("%lf",&ms);
	
	J= kg*ms*ms/2;
	printf("운동에너지 : %0.2lf J", J);
}*/ // 136p 6번 


/*int main(){
	int month;
	
	printf("몇 월? ");
	scanf("%d",&month);
	
	if (month>=1 && month <=12){
		printf("올바른 값입니다.");
	}
	else {
		printf("잘못된 값입니다.");
	}
	return 0;
}*///135p 3번 

