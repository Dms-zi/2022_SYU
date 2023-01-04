#include <stdio.h>

int main(){

char name[10], city[30], phonenum[15];


printf("이름 입력하세요: ");
scanf("%s" , name);
getchar();

printf("사는곳  입력하세요: ");
scanf("%s" , city);
getchar();

printf("이름 입력하세요: ");
scanf("%s" , phonenum);
getchar(); 
printf("\n");


printf("제 이름은 %s 이며, %s에 살고있으며, 연락처는 %s 입니다. ", name, city, phonenum );
}

/*int main(){

int a,b;

printf("가로의 길이: ");
scanf("%d", &a);

printf("세로의 길이: ");
scanf("%d", &b);
printf("\n");

printf("사각형의 둘레 : %d\n 사각형의 넓이: %d", 2*(a+b),a*b); 
}*/

/*int main(){

char cal; 
int a,b;
float result; 

printf("두 정수를  입력하세요.: ");
scanf("%d %d",&a,&b);
fflush(stdin);
printf("사칙연산(+,-,*,/)기호를 입력하세요.:");
scanf("%c",&cal);

if (cal=='+'||cal=='-'||cal=='*'||cal=='/'){

switch(cal) 
{
	case'+': 
		result = a+b;
		break;
	case'-': 
		result = a-b;
		break;
	case'*':  
		result = a*b;
		break;
	case'/': 
		if (b==0)
			{printf("0으로는 나눌수 없습니다.");
			break;} 
		else
			result = a/b;
			break;			
} 
}
else
	printf("사직연산(+,-,*,/) 기호만 입력하세요.\n");
	 
printf("%d %c %d = %f\n",a,cal,b,result);

printf("변수 a의 주소 = %d, data=%d\n", &a,a);
printf("변수 b의 주소 = %d , data=%d\n", &b,b);
printf("변수 c의 주소 = %d , data=%.f\n", &result,result);

return 0;
}*/
