#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool areParenthesisBalanced(string exp)
{
   int i = 0;

   /* Declare an empty character stack */
   struct sNode *stack = NULL;

   /* Traverse the given expression to check matching parenthesis */
   while(exp[i])
   {
      /*If the exp[i] is a starting parenthesis then push it*/
      if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        push(&stack, exp[i]);

      /* If exp[i] is a ending parenthesis then pop from stack and
          check if the popped parenthesis is a matching pair*/
      if(exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
      {

          /*If we see an ending parenthesis without a pair then return false*/
         if(stack == NULL)
           return 0;

         /* Pop the top element from stack, if it is not a pair
            parenthesis of character then there is a mismatch.
            This happens for expressions like {(}) */
         else if ( !isMatchingPair(pop(&stack), exp[i]) )
           return 0;
      }
      i++;
   }


int main()
{
   int T,m=0;
   cin>>T;
   for(m=1;m<=T;m++)
   {

    long long int n,k,i=0;
    cin>>n>>k;
    char arr[2*n];
    for(i=0;i<n;i++)
    {
        arr[i]= '(';
    }
    for(i=n;i<2*n;i++)
    {
        arr[i]=')';
    }
    //cout<<arr
    std::string s(arr) ;

    cout<<s;
    string S=s;
   for(i=0;i<k;i++)
   {
       (std::next_permutation(s.begin(), s.end()));

       //cout<<s<<endl;
   }
   if(S<s) cout<<"Case #"<<m<<": "<<s<<endl;
   else cout<<"Case #"<<m<<": "<<"Doesn't Exist!"<<endl;

   }
}

