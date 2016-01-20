#include <stdio.h>
#include <string.h>

int main()
{
	char a[81], ch;
	int i;
	
	i = 0;
	
	while((ch = getchar()) != '\n')
		a[i++] = ch;
	a[i] = '\0';
	
	i--;
	
	while(i > 0){
		while(a[i--] != ' ');
		if(i < 0) 
			break;
		i++;
		fputs(a+i+1, stdout);
		printf(" ");
		a[i] = '\0';
		i--;
	}
	
	fputs(a, stdout);
	
	return 0;
}
