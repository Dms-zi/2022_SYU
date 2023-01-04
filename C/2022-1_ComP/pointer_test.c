#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

 

double get_sum(const double *arr, int size)

{

    printf("포인터 arr의 주소 = %d, data = %d, size의 주소 = %d, data = %d\n", &arr, arr, &size, size);

int i;

    double sum = 0;

    for (i = 0; i < size; i++){

    sum += arr[i];

    printf("포인터 arr+%d = %d, *(arr+%d) = %f, arr[%d]의 주소 = %d, data = %f\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);

}

       

    return sum;

}

int main(void)

{

    double x[SIZE] = { 0 };

    int i;

    printf("배열x의 주소 = %d, x[0]의 주소 = %d, data = %d\n", x, &x[0], x[0]);

    

    printf("실수 %d개를 입력하세요: ", SIZE);

    for (i = 0; i < SIZE; i++) {

        scanf("%lf", &x[i]);

    }

    printf("합계: %f\n", get_sum(x, SIZE));

}
