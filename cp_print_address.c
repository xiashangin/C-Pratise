#include<stdio.h>
#include<stdlib.h>

int global_var ;
static int file_static_var ;


void fun1(void){
	int fun1_var ;
	static int fun1_static_var ;
	printf("&fun1_var..%p\n", &fun1_var);
	printf("&fun1_static_var..%p\n", &fun1_static_var);	
}

void fun2(void){
	int fun2_var ;
	printf("&fun2_var...%p\n" ,&fun2_var) ;
}

int main(void){
	int *p ;
	
	/* 输出指向函数的指针 */
	printf("&fun1..%p\n", fun1) ;
	printf("&fun2..%p\n", fun2) ;

	/* 输出字符串常量的地址 */
	printf("string literal..%p\n", "abc") ;	

	/* 输出全局变量 */
	printf("&global_var...%p\n", &global_var) ;

	/* 输出文件内的static变量的地址 */
	printf("&file_static_var...%p\n", &file_static_var) ;

	/* 输出局部变量 */
	fun1() ;
	fun2() ;

	/* 通过malloc申请的内存区域的地址  */
	p = malloc(sizeof(int)) ;
	printf("malloc address...%p\n" ,p) ;

	return 0 ;
}
