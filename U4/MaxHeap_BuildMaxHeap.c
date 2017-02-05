typedef struct HeapStruct * MaxHeap;
struct HeapStruct{
	ElementType * Elements;
	int Size;
	int Capacity;
};

MaxHeap BuildMaxHeap(MaxHeap H)//假设所有H->size个元素已经存在H->Elements[]中 
{//本函数将 H->Elements[]中的元素调整，使满足最大堆的有序性 
	int Parent,Child,i;
	ElementType temp;
	for(i=H->Size/2;i>0;i--){
		temp=H->Elements[i];
		for(Parent=i;Parent*2<=H->Size;Parent=Child){
			Child=Parent*2;
			if((Child!=H->Size)&&(H->Elements[Child]<H->Elements[Child+1]))
			Child++;//Child指向左右子节点较大者 
			if(temp>=H->Elements[Child])
				break;		
			else
				H->Elements[Parent]=H->Elements[Child];	
		}
	H->Elements[Parent]=temp;
	}
	return H;
}


