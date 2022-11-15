/*
in: stringa e carattere
out: numero di volte che il carattere appare
*/

int count_char_rec(char[],char);

int main(int argc, char* argv[])
{
	char 
	
	return 0;
}

int count_char_rec(char str[],char c)
{
	int count;
	
	if(str[0]=='\0')
	{
		return 0;
	}
	if(str[0]==c)
	{
		count=0;
	}
	else
	{
		count=1;
	}
	return count+count_char_rec(&str[1],c);
}
