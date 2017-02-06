typedef struct HashTbl *HashTable;
struct HashTbl{
	int TableSize;
	Cell *TheCells;	
}H;

HashTable Initialize Table(int TableSize)//散列表的初始化 
{
	int i;
	HashTable H;
	if(TableSize<MinTableSize){
		Error("散列表太小")；
		return NULL; 
	}
	//分配散列表
	H=(HashTable)malloc(sizeof(struct HashTbl));
	if(H==NULL)
		FatalError("空间溢出");
	H->TableSize=NextPrime(TableSize);//令表空间大小为素数 
	
	H->TheCells=(Cell*)malloc(sizeof(Cell)*H->TableSize);
	if(H->TheCells==NULL)
		 FatalError("空间溢出");
	for(i=1;i<H->Size;i++){
		H->TheCells[i].Info=empty; 
	}
	return H;
}

Position Find(ElementType Key,HashTable H)
{
	Position CurrentPos,NewPos;
	int CNum;//记录冲突次数 
	CNum=0;//记录+-变化 
	NewPos=CurrentPos=Hash(Key,H->TableSize);
	while(H->TheCells[NewPos].Info!=Empty&&
			H->TheCells[NewPos].Element!=Key){
				if(++CNum%2){
					NewPos=CurrentPos+(CNum+1)/2*(CNum+1)/2;
					while(NewPos>=H->TableSize)
						NewPos-=H->TableSize; 
				}
				else{
					NewPos=CurrentPos-(CNum+1)/2*(CNum+1)/2;
					while(NewPos<0)
						NewPos+=H->TableSize; 
				}
			} 
			return NewPos;
}

void Insert(ElementType Key,HashTable H)
{
	Position Pos;
	Pos=Find(Key,H);
	if(H->TheCells[Pos].Info!=Legitimate){
		H->TheCells.Info=Legitimate;
		H->TheCells.Element=Key;
	}
}
