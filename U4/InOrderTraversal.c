typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode{
	ElementType Data;
	BinTree Left;
	BinTree Right;
};

//�ǵݹ��������������� 
void InOrderTraversal(BinTree BT)
{
	BinTree T=BT;
	Stack S=CreatStack(MaxSize);
	while(T||!IsEmpty(S)){
		while(T){
			Push(S,T);
			T=T->Left;
		} 
		if(!IsEmpty(S)){
			T=Pop(S);
			printf("%d",T->Data);
			T=T->Right; 
		}
	}
}
