Position Find(ElementType X,BinTree BST)//β�ݹ�
{
	if(!BST)
		return NULL;
	if(X>BST->Data)
		return Find(X,BST->Right);
	else if(X<BST->Data)
		return Find(X,BST->Left);
	else
		return BST; 
} 
Position IterFind(ElementType X,BinTree BST)//β�ݹ�
{
	while(BST){
		if(X>BST->Data)
			BST=BST->Right;
		else if(X<BST->Data)
			BST=BST->Left;
		else
			return BST;
	} 
	return NULL;
} 

