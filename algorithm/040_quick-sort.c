#include<stdio.h>
#include<stdlib.h>

void quicksort(int A[] ,int p ,int r){
	int q ;
	if(p <= r){
		q = partition(A ,p ,r) ;
		quicksort(A ,p ,q - 1) ;
		quicksort(A ,q + 1 ,r) ;	
	}
}

int partition(int A[] ,int p ,int r){
	int x ,i ,j ;
	int tmp ;
	x = A[r] ;
	i = p - 1 ;
	for(j = p ;j < r ;j++){
		if(A[j] < x){
			i = i + 1 ;
			tmp = A[i] ;
			A[i] = A[j] ;
			A[j] = tmp ;
		}
	}
	tmp = A[i + 1] ;
	A[i + 1] = A[r] ;
	A[r] = tmp ;

	return i + 1 ;	
}

int main(){
	int A[8] = {2 ,8 ,7 ,1 ,3 ,4 ,6 ,4} ;
	int length = sizeof(A)/sizeof(int) ;
	int i ;
	printf("before sorted:\n") ;
	for(i = 0 ;i < length ;i++){
		printf("A[%d] = %d\n" ,i ,A[i]) ;
	}	
	quicksort(A ,0 ,7) ;
	printf("after sorted:\n") ;
	for(i = 0 ;i < length ;i++){
		printf("A[%d] = %d\n" ,i ,A[i]) ;
	}
	return 0 ;
}