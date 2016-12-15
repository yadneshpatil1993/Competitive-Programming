#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b) {if(a%b==0) return b;else return gcd(b,a%b);}
ll Az[10000];
bool ispalindrome (string str)
{
  int s1 = str.size();
  for (int i = 0; i < s1/2; i++)if (str[i] != str[s1 - i - 1])return false;
  return true;
}

int main()
{
  string str;
  cin >> str;
  int s1 = str.size();
  for (int i = 0; i < s1;i++)
  {
    if (str[i] != str[s1-i-1])
    {
      char ch = str[s1-i-1];
      char ch2 = str[i];
      bool switch1 = false;
      for (int j = i+1; j < s1 - i - 1; j++)
      {
        if (str[j] == ch)
        {
          string sc = str;
          reverse(sc.begin() + i, sc.begin() + j + 1);
          if (ispalindrome(sc))
          {
            switch1 = true;
            break;
          }
        }
      }
      if (!switch1)
      {
        for (int j = s1 - i - 2; j > i; j--)
        {
          if (str[j] == ch2)
          {
            string sc = str;
            reverse(sc.begin() + j, sc.begin() + s1 - i);
            if (ispalindrome(sc))
            {
              switch1 = true;
              break;
            }
          }
        }
      }
      if (switch1)
      {
        printf("Yes\n");
        break;
      }
      else
      {
        printf("No\n");
        break;
      }
    }
  }
}
