#include <stdio.h>

/*int CheckPrimenum(int num){
	
	int i,j,count;
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
	}
int main(){
	int num; 
	printf("양의정수?");
	scanf("%d",&num);
	CheckPrimenum(num);
		
}*/ //11번 
static int result = 0;
void calculator(char g, int num) {

    if (g == '+') {
        result = result + num;
    }
    if (g == '-') {
        result = result - num;
    }
    if (g == '*') {
        result = result * num;
    }
    if (g == '/') {
        result = result / num;
    }
    printf(" = %d", result);
}
int main(void) {

    printf("0 ");
    while (1) {
        char g = ' ';
        int num = 0;
        scanf(" %c %d", &g, &num);
        if ((g == '0') && (num == 0)) {
            break;
        }
        else {
            calculator(g, num);
        }
    }
    return 0;} //12번 
