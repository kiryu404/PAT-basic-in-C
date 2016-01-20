#include <stdio.h>
#include <string.h>

int main(void)
{
	int sum, digit, i, j;
	char *s[80], t;
	
	sum = 0;
	
	
	while((t = getchar()) != '\n'){
		sum += t - '0';
	}
	
	i = 0;
	
	while(sum){
		digit = sum % 10;
		switch(digit){
			case 0: 
				s[i] = "ling";
				break;
			case 1:
				s[i] = "yi";
				break;
			case 2:
				s[i] = "er";
				break;
			case 3:
				s[i] = "san";
				break;
			case 4:
				s[i] = "si";
				break;
			case 5:
				s[i] = "wu";
				break;
			case 6:
				s[i] = "liu";
				break;
			case 7:
				s[i] = "qi";
				break;
			case 8:
				s[i] = "ba";
				break;
			case 9:
				s[i] = "jiu";
				break;
			}
		sum /= 10;
		i++;
	}
	
	s[i] = '\0';
	
	for(j = i-1; j >= 0; j--){
		printf("%s", s[j]);
		if(j)
			printf(" ");
	}
}
