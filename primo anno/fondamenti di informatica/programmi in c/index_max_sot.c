int index_max(int vet[],int dim)
{
	int i,index;
	
	index=0;
	for(i=1;i<dim;i++)
	{
		if(vet[i]>vet[index])
		{
			index=i;
		}
	}
	
	return index;
}