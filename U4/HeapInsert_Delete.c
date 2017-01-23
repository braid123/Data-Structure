void Insert(MaxHeap H,ElementType item)
{
	int i;
	if(IsFull(H)){
		printf("FULL HEAP");
		return ;
	}
	i=++H->Size;//i指向插入后堆中的最后一个元素的位置
	for(;H->Elements[i/2]<item;i/=2)//已定义H->Elements[0] 
		H->Elements[i]=H->Elements[i/2];
	H->Elements[i]=item;	 
}
//若无定义H->Elements[0],则应该H->Elements[i/2]<item&&i>1;
ElementType DeleteMax(MaxHeap H)
{
	int Parent,Child;
	ElementType MaxItem,temp;
	if(IsEmpty(H)){
		printf("Empty MAX HEAP");
		return;
	}
	MaxItem=H->Elements[1];//取出根节点最大值 
	temp=H->Elements[H->Size--];
	for(Parent=1;Parent*2<=H->Size;Parent=Child){
		Child=Parent*2;
		if((Child!=H->Size)&&//判别是否有右儿子 
			(H->Elements[Child] < H->Elements[Child+1]))
			Child++;//Child指向左右子结点的较大者 
		if(temp>=H->Elements[Child])
			break;
		else
			H->Elements[Parent]=H->Elements[Child];
	} 
	H->Elements[Parent]=temp;
 	return MaxItem;
 } 
