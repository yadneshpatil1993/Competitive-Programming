#include <stdio.h>
#include <string.h>
char s[100002];
main()
{

        int T;
        scanf("%d",&T);
		while(T--)
		{
			int count=0,i=0,A[26]={0};
			scanf("%s",s);
			for(i=0;i<strlen(s);i++)A[(int)s[i]-97]=1;
			for(i=0;i<26;i++)if(A[i]==1)count++;
			printf("%d\n",count);
	}
}
