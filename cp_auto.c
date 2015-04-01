#include<stdio.h>

void fun(int a ,int b){
	int c ,d ;
	
	printf("fun:&a...%p  &b...%p\n" ,&a ,&b) ;
	printf("fun:&c...%p  &d...%p\n" ,&c ,&d) ;
}

int main(){
	int a ,b ;

	printf("main:&a...%p  &b...%p\n",&a ,&b) ;
	fun(1 ,2) ;

	return 0 ;
}
