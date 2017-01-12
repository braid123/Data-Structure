int BinarySearch(StaticTable *Tbl,ElementType K)
{
	int left,right,mid,NoFound=-1;
	left=1;
	right=Tbl->Length;
	while(left<=right){
		mid=(left+right)/2;
	if(K<Tbl->ElementType[mid])
		right=mid-1;
	else if(K>Tbl->Element[mid])
		left=mid+1;
	else 
		return mid;	
	}
	
	return NoFound;
}

