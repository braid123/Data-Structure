typedef struct HeapStruct * MaxHeap;
struct HeapStruct{
	ElementType * Elements;
	int Size;
	int Capacity;
};

MaxHeap BuildMaxHeap(MaxHeap H)//��������H->size��Ԫ���Ѿ�����H->Elements[]�� 
{//�������� H->Elements[]�е�Ԫ�ص�����ʹ�������ѵ������� 
	int Parent,Child,i;
	ElementType temp;
	for(i=H->Size/2;i>0;i--){
		temp=H->Elements[i];
		for(Parent=i;Parent*2<=H->Size;Parent=Child){
			Child=Parent*2;
			if((Child!=H->Size)&&(H->Elements[Child]<H->Elements[Child+1]))
			Child++;//Childָ�������ӽڵ�ϴ��� 
			if(temp>=H->Elements[Child])
				break;		
			else
				H->Elements[Parent]=H->Elements[Child];	
		}
	H->Elements[Parent]=temp;
	}
	return H;
}


