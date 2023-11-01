#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int romanToint(char *s){
	int num[7]={1,5,10,50,100,500,1000};
	int len =strlen(s);
	int res=0;
	for (int i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case 'I':
			res+=num[0];
			break;
		case 'V':
			res+=num[1];
			break;
		case 'X':
			res+=num[2];
			break;
		case 'L':
			res+=num[3];
			break;
		case 'C':
			res+=num[4];
			break;
		case 'D':
			res+=num[5];
			break;
		case 'M':
			res+=num[6];
			break;
		default:
			break;
		}
	}
	return res;
}

int main() {
	char s[15];
	scanf("%s",s);
	char *p;
	p=s;
	int res=romanToint(p);
	printf("%d",res);
    return 0;
}
