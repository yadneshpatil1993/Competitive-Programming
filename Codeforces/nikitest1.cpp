#include <bits/stdc++.h>

using namespace std;

int compare(const void *a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}

void swaping(char *x, char *y)
{
    char p;
    p = *x;
    *x = *y;
    *y = p;
}


void permutation(char *c, int s, int e)
{
   if (s == e)cout<<c<<endl;
   else
   {
       for (int i = s; i <= e; i++)
       {
       	if(i==s)cout<<c<<endl;
       	if(c[s]==c[i]) continue;
		else
		{
          swaping((c+s), (c+i));
          permutation(c, s+1, e);
          swaping((c+s), (c+i));
  		}
       }
   }
}

int main()
{
    char str[]="abcc";
    int n = strlen(str);
    
    permutation(str, 0, n-1);
    return 0;
}
