typedef struct PolyNode{
	int coef;//ϵ��
	int expon;//ָ��
	struct node *link;//ָ����һ���ڵ��ָ�� 
}*Polynomial;

void Attach(int coef,int expon,Polynomial *PtrRear)
{
	Polynomial P;
	P=(Polynomial)malloc(sizeof(PolyNode));
	P->coef=coef;
	P->expon=expon;
	(*PtrRear)->link =P;//pָ����½ڵ���뵽��ǰ������ʽβ��ĺ��� 
	 *PtrRear=P;//�޸�βָ�� 
 } 
Polynomial P1,P2; 
Polynomial PolyAdd(Polynomial P1,Polynomial P2)
{
	Polynomial front,rear,temp;
	int sum;
	rear=(Polynomial)malloc(sizeof(PolyNode));
	front=rear;//front��¼�������ʽ����ͷ�ڵ�
	while(P1&&P2)//P1,P2���з���������� 
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
	for(;P1;P1=P1->link)//P1����ʱִ�� 
		Attach(P1->coef,P1->expon,&rear);
	for(;P2;P2=P2->link)//P2����ʱִ�� 
		Attach(P2->coef,P2->expon,&rear);
	rear->link=NULL;
	temp=front;
	front=front->link;//frontָ��������ʽ��һ�������� 
	free(temp);
	return front;
 } 
