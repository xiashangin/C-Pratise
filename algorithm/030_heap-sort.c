#include<stdio.h>

#define LEFT(i) 2*(i)
#define RIGHT(i) 2*(i)+1
#define PARENT(i) (i)/2



void max-heapify(int A[] ,int i){
	int largest = 0 ;
	int left = LEFT(i) ;
	int right = RIGHT(i) ;
	int heap_size = sizeof(A)/sizeof(int) ;
	
	if(left <= heap_size && A[left] > A[i])
		largest = left ;
	else largest = i ;

	if(right <= heap_size && A[right] > A[i])
		largest = right ;
	else largest = i ;
	
	if(largest != i){
		int temp ;
		A[i] = temp ;
		A[i] = A[largest] ;
		A[largest] = temp ;
		max-heapify(A ,largest) ;
	}
}


void build-heap(int A[]){
	length = sizeof(A)/sizeof(int) ;
	int i ;
	for(i = length/2 ;i >= 0 ;i--){
		max-heapify(A[] ,i) ;
	}
}

void heap-sort(int A[]){
	int length = sizeof(A)/sizeof(int) ;
	build-heap(A[]) ;
	int i ;
	for(i = length ;i >= 1 ;i++){
		
	}
}

int main(){

	int parent = PARENT(4) ;
	printf("PARENT(4) : %d\n" ,parent) ;
	return 0 ;
}
