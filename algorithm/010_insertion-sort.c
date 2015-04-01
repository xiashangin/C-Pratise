#include<stdio.h>
#include<string.h>

int main(){
	int A[] = {5 ,2 ,4 ,6 ,1 ,3} ;

	int i ,j ,k ; 
	int key ;
	int length = sizeof(A)/sizeof(int) ;
	printf("A.length = %d\n" ,length) ;

	for(j = 1 ;j < length ;j++){
		key = A[j] ;
		i = j - 1 ;
		while(i >= 0 && A[i] > key){
			A[i + 1] = A[i] ;
			i = i - 1 ;
		}
		A[i + 1] = key ;
	}
	
	for(k = 0; k < length ;k++){
		printf("A[%d] = %d\n" ,k ,A[k]) ;
	}	
	
	return 0 ;
}
