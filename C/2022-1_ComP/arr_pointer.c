#include <stdio.h>
#define ARR_SIZE 10
void print_arr(int *arr, int size);
int find(int *arr , int num);

int index[ARR_SIZE];
int main(void){
    int arr[ARR_SIZE] = {12, 45, 62, 12, 99, 83, 23, 12, 72, 37};
    int num = 0;
    print_arr(arr, ARR_SIZE);

    printf("찾을 값?");
    scanf("%d", &num);
    int count = find(arr, num);
    printf("찾은 항목은 모두 %d개 입니다. \n", count);
    printf("찾은 항목의 인덱스 포인터, 배열 메모리 주소, 인덱스 값:\n ");
    print_arr(index , count);
 
 }
 
 void print_arr(int * arr, int size){
 	 printf("포인터 arr의 주소 = %d\n", &arr);
     for (int i = 0; i< size; i++){
          printf("포인터 arr+%d = %d, *(arr+%d) = %d, arr[%d]의 주소 = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
    }
     
    }
    
 
 int find(int*arr, int num){
     int count = 0;
     int index_order = 0;
     for ( int i = 0; i < ARR_SIZE; i++){
         if(arr[i] == num){
             index[index_order] = i;
             index_order++;
             count++;
         }
     }
     return count;
 }//12번
  
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int x[SIZE] = { 1, 20, 34, 52, 45, 78, 97, 14, 66, 72 };
    int i, sum=0;
    
    printf("x의주소=%d, x = %d x+1 = %d\n", &x, x, x+1);
   
    // int y[SIZE] = { 0 };
// y=x;        // y의 주소 = x의 주소; read-only 
int *y = x;
    printf("y의주소=%d, y = %d\n", &y, y);
 
    for (i = 0; i < SIZE; i++)
       {
printf("x[%d]의주소=%d, data=%d\n", i,&x[i], x[i]);
sum += *(x+i); 
}
  for (i = 10; i < 20; i++)
    printf("x[%d]의주소=%d, data=%d\n", i,&x[i], x[i]);
    
printf("sum = %d\n", sum);
      
printf("\n");
}
# 2차원 배열의 경우
#include <stdio.h>
int main(void)
{
    int x[3][4] = { 1, 20, 34, 52, 45, 78, 97, 14, 66, 72, 34, 12 };
    int i=0, j=0, sum=0;
    
    printf("x의주소=%d, x = %d x+1 = %d, x[1]의주소=%d, x[1] = %d x[1]+1 = %d\n", &x, x, x+1, x[1], x[1], x[1]+1);
   
    // int y[SIZE] = { 0 };
// y=x;        // y의 주소 = x의 주소; read-only 
int *y = x[1];
    printf("y의주소=%d, y = %d\n", &y, y);
 
    for (i = 0; i < 3; i++)
      for ( j = 0 ; j < 4; j++)
       {
printf("x[%d][%d]의주소=%d, data=%d\n", i,j, &x[i][j], x[i][j]);
sum += *(x[i]+j); 
}
printf("sum = %d\n", sum);
      
printf("\n");
}
