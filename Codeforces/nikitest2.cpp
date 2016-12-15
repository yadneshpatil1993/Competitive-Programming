#include <bits/stdc++.h>

using namespace std;

/*Compare the chars return false when both are same*/
int compare(const void *a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}

/*Swap chars*/
void swaping(char *x, char *y)
{
    char p;
    p = *x;
    *x = *y;
    *y = p;
}

/*Finding next greater character than current but smaller in remaining all*/
int next(char str[], char start, int l, int n)
{
    int p = l;
    for (int i = l+1; i < n; i++)
        if (str[i] > start && str[i] < str[p])
            p = i;
 
    return p;
}

/*to print all distinct permuted strings*/
void permutation(char str[])
{
    int slen = strlen(str);
    qsort(str, slen, sizeof( str[0] ), compare); //using sort library functin to sort the string.

    bool flag = false; //to check all chars are covered or not
    while (!flag)
    {
        cout<<str<<endl;
        int i;
        bool found = false;
        /*finding the char which greater than it's previous 
        from right to left
        just for knowing from where to start swapping.
        */
        for (i = slen-2; i >=0; i--)
            if (str[i] < str[i+1])
            {
                found =true;
                 break;
            } 
        
        if (!found)flag = true; //if all charcters coverd it will break while loop.
        else
        {
            int nextgreat = next(str, str[i], i + 1, slen);
            swaping(&str[i], &str[nextgreat]); // will swap with next greater distinct char 
            qsort(str + i + 1, slen - i - 1, sizeof(str[0]), compare); //sort remaing chars.
        }
    }
}
int main()
{
    char str[]="abcc";
    permutation(str);
    return 0;
}
