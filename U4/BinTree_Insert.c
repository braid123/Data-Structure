BinTree Insert(ElementType X,BinTree BST)
{
	if(!BST){//ԭ��Ϊ�գ����ɲ�����һ�����Ķ��������� 
		BST=malloc(sizeof(struct TreeNode));
		BST->Data=X;
		BST->Left=BST->Right=NULL; 
	} 
	else
		if(X<BST->Data)
			BST->Left=Insert(X,BST->Left);
		else if(X>BST->Data)
			BST->Right=Insert(X,BST->Right);
		/*else x�Ѿ����ڣ����ò���*/	
	return BST;  
}
