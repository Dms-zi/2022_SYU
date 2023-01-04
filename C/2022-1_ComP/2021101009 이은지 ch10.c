//4번 
/*#include <stdio.h>

struct date {
    int year, month, day;
};
struct date date1;
  struct date arr[] = {
        {0, 1, 1}, {0, 3, 1}, {0, 6, 6}, {0, 8, 15},
    };
int size= (sizeof(arr)/sizeof(arr[0]));
void holiday(struct date* ptr, struct date* arr);
void print_pt(struct date* ptr, struct date* arr);
int main(void){
    
  
    while (1) {
        printf("날짜(연월일)? ");
        scanf("%d %d %d", &date1.year, &date1.month, &date1.day);

        if((date1.year == 0) && (date1.month == 0) && (date1.day == 0)) {
            break;
        }
     holiday(&date1, arr);
     for(int i=0; i<size; i++)
     printf("arr[]의 주소=%d,&arr[%d].year=%d,&arr[%d].month=%d,&arr[%d].day=%d,arr[%d].year=%d, arr[%d].month=%d, arr[%d].day=%d \n",arr,i,&(arr[i].year),i,&(arr[i].month),i,&(arr[i].day),i,arr[i].year,i,arr[i].month,i,arr[i].day);
     print_pt(&date1,arr);
    }
    
}void holiday(struct date* ptr, struct date* arr){
    int i;
    for( i = 0; i < 4; i++)
    {
        if((arr+i)->month == ptr ->month && (arr+i)->day == ptr->day){
            i = -1;
            break;
        }
    }
    if (i == -1)
    {
        printf("%d/%d/%d은 공휴일입니다. \n", ptr -> year, ptr -> month, ptr -> day);
    }
    else
    {
        printf("%d/%d/%d은 공휴일이 아닙니다. \n", ptr -> year, ptr -> month, ptr -> day);
    }
   
}
void print_pt(struct date* ptr, struct date* arr){
	printf("date1 주소=%d, &date1.year=%d, &date1.month=%d ,&date1.day=%d, date1.year=%d, date1.month=%d, date1.day=%d \n",&date1,&(date1.year),&(date1.month),&(date1.day),date1.year,date1.month,date1.day);
	printf("ptr의 주소=%d, ptr.year=%d, ptr.month=%d, ptr.day=%d\n",&ptr, (*ptr).year,(*ptr).month,(*ptr).day);
	for(int i=0; i<size; i++){
	printf("arr의 주소=%d, &arr[%d].year=%d, &arr[%d].month=%d, &arr[%d].day=%d,arr[%d].year=%d, arr[%d].month=%d, arr[%d].day=%d\n",&arr,i,&(arr[i].year),i,&(arr[i].month),i,&(arr[i].day),i,(arr[i]).year,i,(arr[i]).month,i,(arr[i]).day);}
}*/

//6번
#include <stdio.h>

struct product {
    char product_name[20];
    int price;
    int stock;
};
	int count=0;
void print_product(struct product* ptr);
int main(void){
    struct product product[5];
    int i = 0;
    for ( i = 0; i < 5; i ++) 
    {
        printf("제품명? ");
        scanf("%s", &product[i].product_name);

        if(product[i].product_name[0] == '.') {
            break;
        }


     printf("가격 재고? ");
     scanf("%d %d", &product[i].price, &product[i].stock);
    count++;
    }
    for (int j = 0; j < i; j ++)
    {
        print_product(&product[j]);
        }
     for (int j = 0; j < i; j ++)
    {
        print_ptr(&product[j]);
        }
    for (int i=0; i<count; i++)
    {
    	printf("product의 주소=%d, &product[%d].product_name=%d, &product[%d].price=%d, &product[%d].stock=%d, product[%d].product_name=%s, product[%d].price=%d, product[%d].stock=%d\n",&product,i,&(product[i].product_name),i,&(product[i].price),i,&(product[i].stock),i,product[i].product_name,i,product[i].price,i,product[i].stock);
	}
}
void print_product(struct product* ptr){
    printf("[%s %d원 재고: %d]\n", ptr ->product_name , ptr -> price, ptr->stock);
   
} 
void print_ptr(struct product* ptr){
	printf("ptr 주소=%d, ptr.product_name=%c, ptr.price=%d, ptr.stock=%d\n",&ptr,ptr->product_name, ptr->price, ptr->stock);
}
