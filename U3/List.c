typedef struct{
	ElementType Data[MAXSIZE];
	int Last;
}List;

List L,*PtrL;

List *MakeEmpty()
{
	List *PtrL;
	PtrL=(List*)malloc(sizeof(List));
	PtrL->Last =-1;
	return PtrL;
} 

int Find(ElementType X,List *PtrL)	
{
	int i=0;
	while( i<=PtrL->Last && Ptrl->Data[i]!=X)
		i++;
	if(i>PtrL->Last)
		return -1;
	else 
		return i;
}

void Insert(ElementType X,int i,List *PtrL)	
{
	int j;
	if(PtrL->Last==MAXSIZE-1){
		printf("full list");
		return;
	}
	if(i<1||i>PtrL->Last+2){
		printf("error location");
		return;
	}
	for(j=PtrL->Last;j>=i-1;j--)
		PtrL->Date[j+1]=PtrL->Date[j];
	PtrL->Date[i-1]=X;
	PtrL->Last++;
	return;
}

void Delete(int i,List *PtrL)
{
	int j;
	if(i<1||i>PtrL->Last+1){
		printf("No EXIST");
	return;
	} 
	for(j=i;j<=PtrL->Last;j++)
		PtrL->Data[j-1]=PtrL->Data[j];
	PtrL->Last--;
	return;	
}




