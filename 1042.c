#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[1001], ch;
	int i, num, max;
	static int count[25];
	
	gets(a);
	
	i = 0;
	while(i < strlen(a)){
		if(a[i] >= 'A' && a[i] <= 'Z')
			count[a[i] - 65]++;
		else if(a[i] >= 'a' && a[i] <= 'z')
			count[a[i] - 97]++;
		i++;
	}
	
	max = 0;
	for(i = 1; i < 26; i++)
		if(count[max] < count[i])
			max = i;
	
	printf("%c %d", 97+max, count[max]);
	
	return 0;
}
