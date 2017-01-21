BinTree Insert(ElementType X,BinTree BST)
{
	if(!BST){//原树为空，生成并返回一个结点的二叉搜索树 
		BST=malloc(sizeof(struct TreeNode));
		BST->Data=X;
		BST->Left=BST->Right=NULL; 
	} 
	else
		if(X<BST->Data)
			BST->Left=Insert(X,BST->Left);
		else if(X>BST->Data)
			BST->Right=Insert(X,BST->Right);
		/*else x已经存在，则不用插入*/	
	return BST;  
}
