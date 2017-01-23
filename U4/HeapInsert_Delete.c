void Insert(MaxHeap H,ElementType item)
{
	int i;
	if(IsFull(H)){
		printf("FULL HEAP");
		return ;
	}
	i=++H->Size;//iָ��������е����һ��Ԫ�ص�λ��
	for(;H->Elements[i/2]<item;i/=2)//�Ѷ���H->Elements[0] 
		H->Elements[i]=H->Elements[i/2];
	H->Elements[i]=item;	 
}
//���޶���H->Elements[0],��Ӧ��H->Elements[i/2]<item&&i>1;
ElementType DeleteMax(MaxHeap H)
{
	int Parent,Child;
	ElementType MaxItem,temp;
	if(IsEmpty(H)){
		printf("Empty MAX HEAP");
		return;
	}
	MaxItem=H->Elements[1];//ȡ�����ڵ����ֵ 
	temp=H->Elements[H->Size--];
	for(Parent=1;Parent*2<=H->Size;Parent=Child){
		Child=Parent*2;
		if((Child!=H->Size)&&//�б��Ƿ����Ҷ��� 
			(H->Elements[Child] < H->Elements[Child+1]))
			Child++;//Childָ�������ӽ��Ľϴ��� 
		if(temp>=H->Elements[Child])
			break;
		else
			H->Elements[Parent]=H->Elements[Child];
	} 
	H->Elements[Parent]=temp;
 	return MaxItem;
 } 
