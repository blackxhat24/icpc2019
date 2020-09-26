#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int a,i,m;
	char x[6000];
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%s",&x);
		int l=strlen(x);
		
		if(l>10){
		
		    printf("%c",x[0]);
		    printf("%d",l-2);
		    printf("%c\n",x[l-1]);
		
		}
		else
		{ 
			printf("%s\n",x);
		}
	}
	return 0;
}
