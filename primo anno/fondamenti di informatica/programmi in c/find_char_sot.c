int find_char(char str[],char c)
{
	int index,i;
		
	index=-1
	i=0;
	while(index==-1 && str[i]!='\0')
	{
		if(str[i]==c)
		{
			index=i;
		}
		i++;
	}
	
	return index;
}