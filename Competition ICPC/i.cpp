#include <stdio.h>

int main()
{
	char a[100],b[100];
	int i,j,k,input,counta=0,countb=0;
	
	scanf("%d",&input);
	for(i=0;i<input;i++)
	{
		scanf("%c",&a[i]);	
	}	
	for(i=0;i<input;i++)
	{
		scanf("%c",&b[i]);	
	}
	for(i=0;i<input;i++)
	{
		if(a[i] == b[i])
		{
			for(j=0;j<input;j++)
			{
				if(a[i] == a[j])
				{
					counta++;
					printf("%d\n",counta);
				}
			}
			for(k=0;k<input;k++)
			{
				if(b[k] == b[k])
				{
					countb++;
					printf("%d\n",countb);
				}
			}
		}
	}
	if(counta >= countb)
	{
		printf("%d\n",counta);
	}
	else if(countb >= counta)
	{
		printf("%d\n",countb);
	}
	else
	{
		printf("0\n");
	}
}
