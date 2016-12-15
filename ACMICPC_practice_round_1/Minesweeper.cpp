#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,m=0;
	scanf("%d",&T);
	for(m=1;m<=T;m++)
	{
		int N;
		scanf("%d",&N);
		int A[N][N],point[N][N],i=0,j=0;
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				char c;
				cin>>c;
				if(c=='*')A[i][j]=0;
				else if(c=='.')A[i][j]=1;
			}
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i>0&&j>0&&i<N-1&&j<N-1)
				{
					point[i][j]=A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1]+A[i][j-1]+A[i][j+1];					
				}	
				else if(i==0&&j==0)
				{
					point[i][j]=A[i][j+1]+A[i+1][j]+A[i+1][j+1];
				}
				else if(i==0&&j==N-1)
				{
					point[i][j]=A[i][j-1]+A[i+1][j]+A[i+1][j-1];
				}
				else if(i==N-1&&j==0)
				{
					point[i][j]=A[i][j+1]+A[i-1][j]+A[i-1][j+1];	
				}
				else if(i==N-1&&j==N-1)
				{
					point[i][j]=A[i][j-1]+A[i-1][j]+A[i-1][j-1];	
				}
				else if(i==0)
				{
					point[i][j]=A[i][j+1]+A[i][j-1]+A[i+1][j]+A[i+1][j+1]+A[i+1][j-1];
				}
				else if(i==N-1)
				{
					point[i][j]=A[i][j+1]+A[i][j-1]+A[i-1][j]+A[i-1][j+1]+A[i-1][j-1];	
				}
				else if(j==0)
				{
					point[i][j]=A[i][j+1]+A[i+1][j]+A[i+1][j+1]+A[i-1][j+1]+A[i-1][j];	
				}
				else if(j==N-1)
				{
					point[i][j]=A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i-1][j-1]+A[i-1][j];	
				}
			}
		}
int click=0;
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i>0&&j>0&&i<N-1&&j<N-1)
				{
					if(point[i][j]==8&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i-1][j-1]=A[i-1][j]=A[i-1][j+1]=A[i+1][j-1]=A[i+1][j]=A[i+1][j+1]=A[i][j-1]=A[i][j+1]=-1;		
					}				
				}	
			}
		}
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i==0&&j!=0&&j!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i][j-1]=A[i+1][j]=A[i+1][j+1]=A[i+1][j-1]=-1;	
					}
					
				}
				else if(i==N-1&&j!=0&&j!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i][j-1]=A[i-1][j]=A[i-1][j+1]=A[i-1][j-1]=-1;	
					}
						
				}
				else if(j==0&&i!=0&&i!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=A[i-1][j+1]=A[i-1][j]=-1;	
					}
				}
				else if(j==N-1&&i!=0&&i!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=A[i-1][j-1]=A[i-1][j]=-1;	
					}	
				}
			}
		}
		

		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i==0&&j==0)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=-1;	
					}
					
				}
				else if(i==0&&j==N-1)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=-1;	
					}
				}
				else if(i==N-1&&j==0)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i-1][j]=A[i-1][j+1]=-1;	
					}
				}
				else if(i==N-1&&j==N-1)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i-1][j]=A[i-1][j-1]=-1;	
					}
				}	
			}
		}
		/*check*/
		int count=0;
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(A[i][j]==1)count++;
			}
		}
		if(count==0)
		{
			cout<<"Case #"<<m<<": "<<click<<endl;
		}
		else
		{
			cout<<"Case #"<<m<<": "<<click+count<<endl;
		}
}
return 0;
}