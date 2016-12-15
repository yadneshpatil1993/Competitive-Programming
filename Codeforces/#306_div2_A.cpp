#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int p = s.length();
	int index;
	bool ab=false;
	bool ba=false;
	for(int i=1;i<p && !ab;i++)
	{
		if(s[i]=='B')
		{
			if(s[i-1]=='A')
			{
				index = i;
				ab=true;
			}
		}
	}
	for(int i=1;i<p && !ba;i++)
	{
		if(s[i]=='A' && i-1 != index)
		{
			if(s[i-1]=='B')
			{
				ba=true;
			}
		}
	}
	if(ab&&ba)cout<<"YES"<<endl;
	else
	{
        ab=false;
        ba=false;
        for(int i=1;i<p && !ab;i++)
        {
            if(s[i]=='A')
            {
                if(s[i-1]=='B')
                {
                    index = i;
                    ab=true;
                }
            }
        }
        for(int i=1;i<p && !ba;i++)
        {
            if(s[i]=='B' && i-1 != index)
            {
                if(s[i-1]=='A')
                {
                    ba=true;
                }
            }
        }
        if(ab&&ba)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

	}
}
