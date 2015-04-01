#include<stdio.h>
#include<stdlib.h>

#define LIST_INIT_SIZE 10
#define LISTINCREMENT 1

typedef struct {
	int *elem ;
	int length ;	//当前长度
	int list_size ;	//当前分配的存储容量（以sizeof(int)为单位）
}SqList ;

int InitList(SqList *L){
	L->elem = (int *)malloc(LIST_INIT_SIZE*sizeof(int)) ;
	if(!L->elem) exit(0) ;
	L->length = 0 ;
	L->list_size = LIST_INIT_SIZE ;
	return 1 ;
}

int isEmpty(SqList *L){
	if(L->length == 0) return 1 ;
	else return 0 ;
}

int isFull(SqList *L){
	if(L->length >= L->list_size) return 1 ;
	else return 0 ;
}

int addElem(SqList *L ,int elem){
	if(isFull(L)){
		int *newbase = (int *)realloc(L->elem ,(L->list_size + LISTINCREMENT)*sizeof(int)) ;
		if(!newbase) exit(0) ;
		L->elem = newbase ;
		L->list_size = L->list_size + LISTINCREMENT ;
	}
	L->elem[L->length++] = elem ;
}

int main(){
	SqList L ;
   	int e;
	int i ,j ,k ;
	if(InitList(&L))
   	{
   		printf("init successfully!\n");
		printf("L->length = %d\n" ,L.length);
		printf("L->list_size = %d\n" ,L.list_size);
   	}
	for(i = 0 ;i < 10 ;i++){
		addElem(&L ,i + 1) ;	
	}
	addElem(&L ,11) ;
	printf("L->length = %d\n" ,L.length);
	printf("L->list_size = %d\n" ,L.list_size);

	if(isEmpty(&L)){
		printf("List is empty!\n") ;
	}else{
		printf("List is not empty!\n") ;
	}
	if(isFull(&L)){
		printf("List is full!\n") ;
	}else{
		printf("List is not full!\n") ;
	}
	
	return 0 ;
}
