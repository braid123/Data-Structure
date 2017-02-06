typedef struct HashTbl *HashTable;
struct HashTbl{
	int TableSize;
	Cell *TheCells;	
}H;

HashTable Initialize Table(int TableSize)//ɢ�б�ĳ�ʼ�� 
{
	int i;
	HashTable H;
	if(TableSize<MinTableSize){
		Error("ɢ�б�̫С")��
		return NULL; 
	}
	//����ɢ�б�
	H=(HashTable)malloc(sizeof(struct HashTbl));
	if(H==NULL)
		FatalError("�ռ����");
	H->TableSize=NextPrime(TableSize);//���ռ��СΪ���� 
	
	H->TheCells=(Cell*)malloc(sizeof(Cell)*H->TableSize);
	if(H->TheCells==NULL)
		 FatalError("�ռ����");
	for(i=1;i<H->Size;i++){
		H->TheCells[i].Info=empty; 
	}
	return H;
}

Position Find(ElementType Key,HashTable H)
{
	Position CurrentPos,NewPos;
	int CNum;//��¼��ͻ���� 
	CNum=0;//��¼+-�仯 
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
