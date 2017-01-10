//堆栈的链式存储实现 
typedef struct Node{
	ElementType Data;
	struct Node *Next;
}LinkStack;
LinkStack *Top;
 
//堆栈初始化--头结点，返回栈顶指针(头指针) 
LinkStack *CreateStack()
{//栈顶->->->->栈底 
	LinkStack *S;
	S=(LinkStack *)malloc(sizeof(struck Node));
	S->Next = NULL;
	return S;
}

//判断堆栈S是否为空
int IsEmpty(LinkStack *S)
{
	return (S->Next==NULL);
 } 
 
void Push(ElementType item,LinkStack *S)
{//链表插入存储，不需要判断堆栈是否满
//若是数组实现，要判断 
	struct Node *TmpCell;
	TmpCell=malloc(sizeof(struct Node));
	TmpCell->Data=item;
	TmpCell->Next=S->Next;
	S->Next=TmpCell;
}

ElementType Pop(LinkStack *S)
{
	struct Node *FirstCell;
	ElementType TopElem;
	if(IsEmpty(S)){
		printf("empty stack");
		return NULL;
	}
	else{
		FirstCell=S->Next;
		S->Next=FristCell->Next;
		TopElem=FirstCell->Data;
		free(FirstCell);
		return TopElem; 
	}
	
}



