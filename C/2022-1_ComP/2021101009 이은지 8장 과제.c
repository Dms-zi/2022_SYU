/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10

void f(int *arr, int num);
int main(void){
    srand(time(NULL));
    int array[ARR_SIZE] = { 0 };
    f(array, 99);

    return 0;}

void f(int *arr, int num){

printf("포인터 arr의 주소 = %d\n", &arr);
 for (int i = 0; i< ARR_SIZE; i++){
    arr[i] = (rand() % num) + 1;
    printf("%3d ", arr[i]);
    printf("포인터 arr+%d = %d, *(arr+%d) = %d, arr[%d]의 주소 = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
}
}*/ //8번 
/*#include <stdio.h>
#define ARR_SIZE 10

void f(int * arr, int size, int cd);
 int main(void){
    int num1 = 0;
    int cd = 0;
    
    printf("첫 번째 항?");
    scanf("%d", &num1);
   printf("공차? ");
   scanf("%d", &cd);
   
   int arr[ARR_SIZE] = { num1 };
   
   f(arr, ARR_SIZE, cd); 
 }
 
 void f(int * arr, int size, int cd){
 	printf("포인터 arr의 주소 = %d\n", &arr);
 	printf("등차수열 출력\n");
    printf(" %d ", arr[0]);
    printf("포인터 arr+%d = %d, *(arr+%d) = %d, arr[%d]의 주소 = %d, data = %d\n", 0, arr+0, 0, *(arr+0), 0, &arr[0], arr[0]);
    for ( int i = 1; i < size; i++){
       arr[i] = arr[i - 1] + cd;
       printf("%d " , arr[i] );
       printf("포인터 arr+%d = %d, *(arr+%d) = %d, arr[%d]의 주소 = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
    }
 }*///10번 
 
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
  
