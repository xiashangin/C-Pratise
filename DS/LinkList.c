#include<stdio.h>
#include<stdlib.h>


typedef struct LNode{
	int data ;
	struct LNode *next ;
}LNode ,*LinkList ;

LinkList createList(int n){
	LinkList p ,L;
	int i ;	
	srand(time(0)) ;
	L = (LinkList)malloc(sizeof(LNode)) ;
	L->next = NULL ;
	
	for(i = 0 ;i < n ;i++){
		p = (LinkList)malloc(sizeof(LNode)) ;
		p->data = rand()%100 + 1 ;
		p->next = L->next ;
		L->next = p ;
	}
	return L ;
}


int main(void){
	LinkList head ,p;
	head = createList(5) ;
	p = head->next ;
	while(p->next != NULL){
		printf("%d\n" ,p->data) ;
		p = p->next ;
	}
		
	return 0 ;
}
