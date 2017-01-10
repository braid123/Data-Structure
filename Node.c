typedef struct Node{
	ElementType Data;
	struct Node *Next;
}List;

List *PtrL;

int Length(List *PtrL)
{
	List *p=PtrL;
	int j=0;
	while(p){
		p=p->Next;
		j++;
	} 
	return j;
}

List *FindKth(int K, List *PtrL)
{
	List *p=PtrL;
	int i=1;
	while(p!=NULL&&i<K){
		p=p->Next;
		i++;
	}	
	if(i==K)
		return p;
	else 
		return NULL;
} 

List *Find(ElementType X,List *PtrL)
{
	List *p=PtrL;
	while(p!=NULL&&p->Data!=X)
		p=p->Next;
	return p;
}

List *Insert(ElementType X,int i,List *PtrL)
{
	List *p,*s;
	if(i==1){
		s=(List *)malloc(sizeof(List));
		s->Data=X;
		s->Next=PtrL;
		return s;
	}
	p=FindKth(i-1,PtrL);
	if(p==NULL){
		printf("error");
		return NULL;
	}
	else{
		s=(List *)malloc(sizeof(List));
		s->Data=X;
		s->Next=p->Next;
		p->Next=s; 
		return PtrL;//head point no change		
	}
}

List *Delete(int i,List *PtrL)
{
	List *p,*s;
	if(i==1){
		s=PtrL;
		if(PtrL!=NULL)
			PtrL=PtrL->Next;
		else
			return NULL;
		free(s);
		return PtrL;
	}
	p=FindKth(i-1,PtrL);
	if(p==NULL){
		printf("no i-1 node");
		return NULL;
	}
	else if(p->Next==NULL){
		printf("no i node");
		return NULL;
	}
	else{
		s=p->Next;
		p->Next=s->Next£»
		free(s);
		return PtrL; 
	}
}

