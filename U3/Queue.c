#define MaxSize<�洢����Ԫ��������>

typedef struct{
	ElementType Data[MaxSize];
	int front;
	int rear;
}Queue; 

 void AddQ(Queue *PtrQ,ElementType item)
 {
 	if((PtrQ->rear+1)%MaxSize==PtrQ->front){
 		printf("FULL QUEUE");
 		return ;
	 }
	 PtrQ->rear=(PtrQ->rear+1)%MaxSize;
	 PtrQ->Data[PtrQ->rear]=item;
 }
 
 ElementType DeleteQ(Queue *PtrQ)
 {
 	if(PtrQ->front==PtrQ->rear){
 		printf("empty queue");
 		return;
	 }
	 else{
	 	PtrQ->front=(PtrQ->front+1)%MaxSize;
	 	return PtrQ->Data[PtrQ->front]; 
	 }
 }
