#include <stdio.h>

/*#define rate 0.3025

int main(){
	double mm,p;
	
	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf",&mm);
	
	p=mm*rate;
	printf("%.2lf 제곱미터 = %.2lf 평" , mm,p);
}*/ //98p 9 번 

int main(){
	int yd;
	double m;
 	
	printf("길이(yd)? ");
	scanf("%d",&yd);
	
	m=0.9144*yd;
	printf("%d yd = %.6lf m",yd,m);
}//98p 7번 

/*int main(){
	int USD,Ex;
	double KRW;
	
	printf("USD? ");
	scanf("%d",&USD);
	 
	printf("원/달러 환율? ");
	scanf("%d",&Ex);
	KRW=USD*Ex;
	printf("USD %d = KRW %0.2lf",USD,KRW);
	 
}*/ //97p 5번 

/*int main(){
	int kg, m;
	double Ep;
	
	printf("질량(kg)?");
	scanf("%d", &kg);
	
	printf("높이(m)?");
	scanf("%d", &m);
	
	Ep=9.8*kg*m;
	printf("위치에너지: %.2lf J",Ep);
}*/ //97p 3번 

