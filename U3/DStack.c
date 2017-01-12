#define Maxsize<存储数据元素最大个数> 
typedef struct DStack{
	ElementType Data[Maxsize];
	int Top1;
	int Top2;
}S;

S.Top1=-1;
S.Top2=MaxSize;
void Push(struct DStack *PtrS, ElementType item,int Tag)//Tag作为区分堆栈的标志 
{
	if(PtrS->Top2-PtrS->Top1==1){
		printf("full stack");
		return;
	}
	if(Tag==1) {
		PtrS->Data[++(PtrS->Top1)]=item;
	}
	else {
		PtrS->Data[--(PtrS->Top2)]=item;
	return;
	}
}

ElementType Pop(struct DStack *PtrS,int Tag)
{
	if(Tag==1)
	{
		if(PtrS->Top==-1)
		{
		printf("empty");
		return NULL;
		} 
		else 
			return (PtrS->Data[(PtrS->Top1)--]);	
	}
	else
	{
		if(PtrS->Top2==MaxSize)
		{
			printf("empty");
			return NULL;
		}
		else 
			return (PtrS->Data[(PtrS->Top2)++]);
	 } 
	
}



