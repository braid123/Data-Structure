#define MaxSize<�洢����Ԫ��������>

typedef struct Node{
	ElementType Data;
	struct Node *Next;
}QNode; 
typedef struct Node{
	QNode *rear;//ָ���β��� 
	QNode *front;//ָ���ͷ���
}LinkQueue; 
LinkQueue *PtrQ;

ElementType DeleteQ(LinkQueue *PtrQ)//���Ӳ��� 
 {
 	QNode *FrontCell;
 	ElementType FrontElem;
 	
 	if(PtrQ->front==NULL){
 		printf("empty queue");
 		return;
	 }
	
	FrontCell=PtrQ->front;
	if(PtrQ->front==PtrQ->rear)//����ֻ��һ��Ԫ�� 
	 	PtrQ->front= PtrQ->rear =NULL;// 
	else
	 	PtrQ->front=PtrQ->front->Next;
	FrontElem=FrontCell->Data;
	
	free(FrontCell); 	
	return FrontElem; 
	 
 }
