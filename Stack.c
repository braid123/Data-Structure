#define Maxsize<存储数据元素最大个数> 
typedef struct Node{
	ElementType Data[Maxsize];
	int Top;
}Stack;

void Push(Stack *PtrS,ElementType itme)
{
	if(PtrS->Top==MaxSize-1){
		printf("full stack");
		return;
	}
	else {
		PtrS->Data[++(PtrS->Top)]=item;
		//++(PtrS->Top);PtrS->Data[(PtrS->Top)]=item;
	return;
	}
}

ElementType Pop(Stack *PtrS)
{
	if(PtrS->Top==-1){
		printf("empty");
		return ERROR;
	} 
	else 
		return (PtrS->Data[(PtrS->Top)--]);
}



