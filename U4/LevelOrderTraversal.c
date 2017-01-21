void LevelOrderTraversal(BinTree BT)
{
	Queue Q; 
	BinTree T; 
	if(!BT)//若为空树，直接返回 
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
void PreOrderPrintLeaves(BinTree BT)//输出二叉树中的叶节点 
{
	if(!BT->Left && !BT->Right)
		printf("%d",BT->Data);
	PreOrderPrintLeaves(BT->Left);
	PreOrderPrintLeaves(BT->Right);
}
int PostOrderGetHeight(BinTree BT)//树的深度=左右子树最大值+1 
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
