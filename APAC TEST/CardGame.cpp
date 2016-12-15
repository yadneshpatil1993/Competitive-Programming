#include<iostream>

using namespace std;

int main()
{
    int T,m=1;
    cin>>T;
    for(m=1;m<=T;m++)
    {
        int K,N,i=0;
        cin>>N>>K;
        int A[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        i=0;
        int count=0,temp=0,temp2[3]={-1};
        while(i<N)
        {
            i=1;
            while(A[i-1]==0 && i<N+1)
            {
                i++;
            }
            if(A[i-1]!=0)
            {
                temp2[0]=i-1;
                temp = A[i-1];
                count = 1;
            }
            else
            {
                break;
            }
            while(count<3 && i<N)
            {
                if(A[i]==0)
                {
                    i++;
                }
                else if(A[i]-(count*K)==temp)
                {
                    temp2[count]=i;
                    count++;
                    i++;
                }
                else
                {
                    count = 1;
                    temp2[0]=i;
                    temp = A[i];
                    i++;
                }
            }
            if(count==3)
            {
                int p1,p2,p3;
                p1=temp2[0];
                p2=temp2[1];
                p3=temp2[2];

                A[p1]=0;
                A[p2]=0;
                A[p3]=0;
                //cout<<count<<endl;
            }
        }
        int count2=0;
        for(i=0;i<N;i++)
        {
            if(A[i]>0)count2++;
        }
        cout<<"Case #"<<m<<": "<<count2<<endl;

    }
    return 0;
}
