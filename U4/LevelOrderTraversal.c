void LevelOrderTraversal(BinTree BT)
{
	Queue Q; 
	BinTree T; 
	if(!BT)//��Ϊ���٣�ֱ�ӷ��� 
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
