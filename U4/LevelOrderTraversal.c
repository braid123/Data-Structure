void LevelOrderTraversal(BinTree BT)
{
	Queue Q; 
	BinTree T; 
	if(!BT)//若为空速，直接返回 
		return ;
	Q=CreatQueue(Maxsize);//初始化队列 
	AddQ(Q,BT);
	while(!IsEmptyQ(Q)){
		T=DeleteQ(Q);
		printf("%d",T->Data);//访问取出队列的数据 
		if(T->Left)
			AddQ(Q,T->Left); 
		if(T->Right)
			AddQ(Q,T->Right);
	} 
}
