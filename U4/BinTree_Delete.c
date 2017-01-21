BinTree Delete(ElementType X,BinTree BST)
{
	if(!BST)
		printf("NOT FIND THE ELEMENT") ;
	else if(X<BST->Data)
			BST->Left=Delete(X,BST->Left);
	else if(X>BST->Data)
			BST->Right=Delete(X,BST->Right);
	else
		if(BST->Left && BST->Right){
			Tmp=FindMin(BST->Right);
			BST->Data=Tmp->Data;
			BST->Right=Delete(BST->Data,BST->Right);
		//取右子树的最小元素，这种结点必定最多只有一个子结点 
		//或者左子树的最大元素 
		}
		else{//有一个子结点或者无 
			Tmp=BST;
			if(!BST->Left)//有一个右结点或无子结点 
				BST=BST->Right;
			else if(!BST->Right)//有一个左结点或无子结点
				BST=BST->Left;
			free(Tmp);
		}
	return BST;  
}
