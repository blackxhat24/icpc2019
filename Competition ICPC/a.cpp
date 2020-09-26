#include <stdio.h>
#include <string.h>

int main()
{
	int m,i,j,k,b[100],e[100];
	int temp=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&e[j]);
	}
	for(k=0;k<m;k++)
	{
		if(b[k] > e[k])
		{
			temp += 3;
		}
		else if(b[k] < e[k])
		{
			temp += 0;
		}
		else if(b[k] == e[k])
		{
			temp++;
		}	
	}
	printf("%d\n",temp);
	return 0;
}
