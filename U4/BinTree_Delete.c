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
		//ȡ����������СԪ�أ����ֽ��ض����ֻ��һ���ӽ�� 
		//���������������Ԫ�� 
		}
		else{//��һ���ӽ������� 
			Tmp=BST;
			if(!BST->Left)//��һ���ҽ������ӽ�� 
				BST=BST->Right;
			else if(!BST->Right)//��һ����������ӽ��
				BST=BST->Left;
			free(Tmp);
		}
	return BST;  
}
