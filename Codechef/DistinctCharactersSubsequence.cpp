#include <stdio.h>
#include <string.h>
char ch[100002];
int main()
{
		int T;
        scanf("%d",&T);
		while(T--)
		{
			int count=0,i=0,A[26]={0};

		    scanf("%s",ch);
			int p = strlen(ch);
			while(p--)A[(int)ch[p]-97]=1;
			for(i=0;i<26;i++)if(A[i]==1)count++;
			printf("%d\n",count);
	}
	return 0;
}
