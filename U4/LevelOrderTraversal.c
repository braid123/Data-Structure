void LevelOrderTraversal(BinTree BT)
{
	Queue Q; 
	BinTree T; 
	if(!BT)//��Ϊ������ֱ�ӷ��� 
		return ;
	Q=CreatQueue(Maxsize);//��ʼ������ 
	AddQ(Q,BT);
	while(!IsEmptyQ(Q)){
		T=DeleteQ(Q);
		printf("%d",T->Data);//����ȡ�����е����� 
		if(T->Left)
			AddQ(Q,T->Left); 
		if(T->Right)
			AddQ(Q,T->Right);
	} 
}
void PreOrderPrintLeaves(BinTree BT)//����������е�Ҷ�ڵ� 
{
	if(!BT->Left && !BT->Right)
		printf("%d",BT->Data);
	PreOrderPrintLeaves(BT->Left);
	PreOrderPrintLeaves(BT->Right);
}
int PostOrderGetHeight(BinTree BT)//�������=�����������ֵ+1 
{
	int HL,HR,MaxH;
	if(BT){
		HL=PostOrderGetHeight(BT->Left);
		HR=PostOrderGetHeight(BT->Right);
		MaxH=HL>HR?HL:HR;
		return(MaxH+1);
	}
	else 
		return 0; 
} 
