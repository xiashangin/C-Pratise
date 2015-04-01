#include<stdlib.h>
#include<stdio.h>

int main(){
	void swap(int *px ,int *py) ;	
	
	int *p ;
	int x ,y ;
	x = 10 ;
	printf("x = %d\n" ,x) ;
	
	p = &x ;
	y = *p ;
	printf("y = %d\n" ,y) ;
	
	printf("before *p++,x = %d\n" ,x) ;
	printf("*p++ = %d\n" ,*p++) ;
	printf("after *p++ ,x = %d\n" ,x) ;
	if((*p++) == ((*p)++))
		printf("*p++ == (*p)++ \n") ;
	else
		printf("*p++ != (*p)++ \n") ;

	//指针与函数，可以直接交换指针所指向的地址的值。
	x = 10 ;
	y = 20 ;
	swap(&x ,&y) ;
	printf("x = %d\n" ,x) ;
	printf("y = %d\n" ,y) ;

	//指针与数组
	int a[10] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10} ;
	int *pa ;
	pa = a ;
	printf("a[0] = %d ; *pa = %d\n" ,a[0] ,*pa) ;
	if(pa == a)
		printf("pa == a\n") ;
	else
		printf("pa != a\n") ;
	int i = 0 ;
	while(*pa){
		printf("a[%d] = %d\n" ,i ,*pa) ;	
		i++ ;
		pa++ ;
	}
	return 0 ;
	
}

void swap(int *px, int *py) 
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
