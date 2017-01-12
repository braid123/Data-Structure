#define MaxSize<存储数据元素最大个数>

typedef struct Node{
	ElementType Data;
	struct Node *Next;
}QNode; 
typedef struct Node{
	QNode *rear;//指向队尾结点 
	QNode *front;//指向队头结点
}LinkQueue; 
LinkQueue *PtrQ;

ElementType DeleteQ(LinkQueue *PtrQ)//出队操作 
 {
 	QNode *FrontCell;
 	ElementType FrontElem;
 	
 	if(PtrQ->front==NULL){
 		printf("empty queue");
 		return;
	 }
	
	FrontCell=PtrQ->front;
	if(PtrQ->front==PtrQ->rear)//队列只有一个元素 
	 	PtrQ->front= PtrQ->rear =NULL;// 
	else
	 	PtrQ->front=PtrQ->front->Next;
	FrontElem=FrontCell->Data;
	
	free(FrontCell); 	
	return FrontElem; 
	 
 }
