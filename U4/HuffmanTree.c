typedef struct TreeNode *HuffmanTree;
struct TreeNode{
	int Weight;
	HuffmanTree Left,Right;	
};

HuffmanTree Huffman(MinHeap H)//假设所有H->size个元素已经存在H->Elements[]中 
{
	int i;
	HuffmanTree T;
	BuildMinHeap(H);//H->Elements[]按权值调整为最小堆 
	for(i=1;i<H->Size;i++){
		T=malloc(sizeof(struct TreeNode));
		T->Left=DeleteMin(H);
		T->Right=DeleteMin(H);
		T->Weight=T->Left->Weight+T->Right->Weight;
		Insert(H,T);
	}
	T=DeleteMin(H); 
	return T;
}


