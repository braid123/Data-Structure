//��ջ����ʽ�洢ʵ�� 
typedef struct Node{
	ElementType Data;
	struct Node *Next;
}LinkStack;
LinkStack *Top;
 
//��ջ��ʼ��--ͷ��㣬����ջ��ָ��(ͷָ��) 
LinkStack *CreateStack()
{//ջ��->->->->ջ�� 
	LinkStack *S;
	S=(LinkStack *)malloc(sizeof(struck Node));
	S->Next = NULL;
	return S;
}

//�ж϶�ջS�Ƿ�Ϊ��
int IsEmpty(LinkStack *S)
{
	return (S->Next==NULL);
 } 
 
void Push(ElementType item,LinkStack *S)
{//�������洢������Ҫ�ж϶�ջ�Ƿ���
//��������ʵ�֣�Ҫ�ж� 
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



