/*
in: stringa
out: lunghezza della stringa
*/

int main(int argc,char* argv[])
{
	
	
	return 0;
}

int strlen_rec(char str[])
{
	if(str[0]=='\0')
	{
		return 0;
	}
	return 1+strlen_rec(&str[1]);	
}
