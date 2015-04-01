#include<stdio.h>

void merge(int A[] ,int p ,int q ,int r){
	
	int n1 = q - p + 1 ;
	int n2 = r - q ;
	int L[n1] ,R[n2] ;
	int i ,j ,k ;
	for(i = 0 ;i < n1 ;i++){
		L[i] = A[i + p] ;
	}	
	for(j = 0 ;j < n2 ;j++){
		R[j] = A[q + j + 1] ;
	}
	//L[n1] = 9999 ;
	//R[n2] = 9999 ;	
	
	i = j = 1 ;
	for(k = p ;k < r ;k++){
		if(L[i] <= R[j]){
			A[k] = L[i] ;
			i = i + 1 ;
		}else{
			A[k] = R[j] ;
			j = j + 1 ;
		}
	}
}

void mergesort(int A[] ,int p ,int r){
	int q ;
	if(p < r){
		q = (int)((p+r)/2) ;
		mergesort(A ,p ,q) ;
		mergesort(A ,q+1 ,r) ;
		merge(A ,p ,q ,r) ;
		//printf("q = %d\n" ,q) ;
	}
}

int main(){
	int i ;
	int A[] = {5 ,2 ,4 ,7 ,1 ,3 ,2 ,6} ;
	int length = sizeof(A)/sizeof(int) ;
//	merge(A ,0 ,length/2 ,length-1) ;
	mergesort(A ,0 ,length - 1) ;
	for(i = 0 ;i < length ;i++){
		printf("A[%d] : %d\n" ,i ,A[i]) ;
	}
	return 0 ;
}
