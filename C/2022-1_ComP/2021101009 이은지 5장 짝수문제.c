#include <stdio.h>
/*int main(){
	int r,s;
	char g;
	
	printf("등수?");
	scanf("%d",&r);
	printf("인원수?");
	scanf("%d",&s);
	
	if (s*10/100>=r) {
	g='A';}
	else if(s*30/100>=r){
	g='B';}
	else if(s*60/100>=r) {
	g='C';}
	else if(s*90/100>=r) {
	g='D';}
	else {
	g='F';}
	printf("학점:%c",g);
}*/

#include <stdio.h>
/*int main(){
	int mon,basicfee,fee;
	printf("월 사용량?");
	scanf("%d",&mon);
	
	if(mon<=300){
		basicfee=1000;
		fee=mon*100;
	}
	else{
		basicfee=5000;
		fee=mon*100;
	}
	printf("전기요금합계:%d원\n",basicfee+fee);
	printf("	-기본요금: %d원\n",basicfee);
	printf("	-전력량요금: %d원",fee);
}*/
#include <stdio.h>
/*int main(){
	int mon,basicfee,fee;
	printf("월 사용량?");
	scanf("%d",&mon);
do{

	if(mon==0){
		break;
	}
	if(mon<=300){
		basicfee=1000;
		fee=mon*100;
	}
	else{
		basicfee=5000;
		fee=mon*100;
	}
	printf("전기요금합계:%d원\n",basicfee+fee);
	printf("	-기본요금: %d원\n",basicfee);
	printf("	-전력량요금: %d원\n",fee);
	printf("월 사용량?");
	scanf("%d",&mon);
}
while(1);
}*/

#include<stdio.h>
int main(){
	int num,i,j,count;
	printf("양의정수?");
	scanf("%d",&num);
	for(i=2; i<num; i++){
		for (j=2; j<i; j++){
			if (i%j==0){
				break;
			}}
		if(i==j){
			printf("%d ",i);
			count++;
			if(count%10==0){
				printf("\n");
			}
		}
		}
		return 0;
	}

