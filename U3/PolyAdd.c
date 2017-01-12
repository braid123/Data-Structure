typedef struct PolyNode{
	int coef;//系数
	int expon;//指数
	struct node *link;//指向下一个节点的指针 
}*Polynomial;

void Attach(int coef,int expon,Polynomial *PtrRear)
{
	Polynomial P;
	P=(Polynomial)malloc(sizeof(PolyNode));
	P->coef=coef;
	P->expon=expon;
	(*PtrRear)->link =P;//p指向的新节点插入到当前结果表达式尾项的后面 
	 *PtrRear=P;//修改尾指针 
 } 
Polynomial P1,P2; 
Polynomial PolyAdd(Polynomial P1,Polynomial P2)
{
	Polynomial front,rear,temp;
	int sum;
	rear=(Polynomial)malloc(sizeof(PolyNode));
	front=rear;//front记录结果多项式链表头节点
	while(P1&&P2)//P1,P2都有非零项待处理 
		switch(Compare(P1->expon,P2->expon)){
			case 1:
					Attach(P1->coef,P2->expon,&rear);
					P1=P1->link;
					break;
			case -1:
					Attach(P2->coef,P2->expon,&rear);
					P2=P2->link;
					break;
			case 0:
					sum=P1->coef+P2->coef;
					if(sum)
						Attach(sum,P1->expon,&rear);
					P1=P1->link;
					P2=P2->link;
					break;
		} 
	for(;P1;P1=P1->link)//P1不空时执行 
		Attach(P1->coef,P1->expon,&rear);
	for(;P2;P2=P2->link)//P2不空时执行 
		Attach(P2->coef,P2->expon,&rear);
	rear->link=NULL;
	temp=front;
	front=front->link;//front指向结果多项式第一个非零项 
	free(temp);
	return front;
 } 
