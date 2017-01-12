typedef struct{
	ElementType *Element;
	int Length;
}StaticTable;

typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
struct Node{
	ElementType Element;
	PtrToNode Next;
};

int SequentialSearch(StaticTable *Tbl,ElementType K)
{
	int i;
	Tbl->Element[0]=K;
	for(i=Tbl->Length;Tbl->Element[i]!=K;i--); 
	//for(i=Tbl->Length;i>0&&Tbl->Element[i]!=K;i--); 
	return i;
}

