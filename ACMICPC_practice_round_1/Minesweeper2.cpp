#include <bits/stdc++.h>
using namespace std;
int A[300][300],point[300][300],N;

int reveal(int i,int j)
{
		if(i>0&&j>0&&i<N-1&&j<N-1)
		{
			if(point[i][j]==8&&A[i][j]==-1)
			{
				A[i][j]=A[i-1][j-1]=A[i-1][j]=A[i-1][j+1]=A[i+1][j-1]=A[i+1][j]=A[i+1][j+1]=A[i][j-1]=A[i][j+1]=-1;
				// reveal(i-1,j-1);
				// reveal(i-1,j);
				// reveal(i-1,j+1);
				// reveal(i,j-1);
				reveal(i,j+1);
				reveal(i+1,j-1);
				reveal(i+1,j);
				reveal(i+1,j+1);
			}					
		}	
		else if(i==0&&j!=0&&j!=N-1)
		{
			if(point[i][j]==5&&A[i][j]==-1)
			{
				A[i][j]=A[i][j+1]=A[i][j-1]=A[i+1][j]=A[i+1][j+1]=A[i+1][j-1]=-1;	
				//reveal(i,j-1);
				reveal(i,j+1);
				reveal(i+1,j-1);
				reveal(i+1,j);
				reveal(i+1,j+1);
			}
			
		}
		else if(i==N-1&&j!=0&&j!=N-1)
		{
			if(point[i][j]==5&&A[i][j]==-1)
			{
				A[i][j]=A[i][j+1]=A[i][j-1]=A[i-1][j]=A[i-1][j+1]=A[i-1][j-1]=-1;	
				//reveal(i-1,j-1);
				//reveal(i-1,j);
				//reveal(i-1,j+1);
				//reveal(i,j-1);
				reveal(i,j+1);
			}	
		}
		else if(j==0&&i!=0&&i!=N-1)
		{
			if(point[i][j]==5&&A[i][j]==-1)
			{
				A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=A[i-1][j+1]=A[i-1][j]=-1;	
				//reveal(i-1,j);
				//reveal(i-1,j+1);
				reveal(i,j+1);
				reveal(i+1,j);
				reveal(i+1,j+1);
			}
		}
		else if(j==N-1&&i!=0&&i!=N-1)
		{
			if(point[i][j]==5&&A[i][j]==-1)
			{
				A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=A[i-1][j-1]=A[i-1][j]=-1;	
				//reveal(i-1,j-1);
				//reveal(i-1,j);
				//reveal(i,j-1);
				reveal(i+1,j-1);
				reveal(i+1,j);	
			}	
		}	
		else if(i==0&&j==0)
		{
			if(point[i][j]==3&&A[i][j]==-1)
			{
				A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=-1;
				reveal(i,j+1);
				reveal(i+1,j);
				reveal(i+1,j+1);	
			}
			
		}
		else if(i==0&&j==N-1)
		{
			if(point[i][j]==3&&A[i][j]==-1)
			{
				A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=-1;	
				//reveal(i,j-1);
				reveal(i+1,j-1);
				reveal(i+1,j);
			}
		}
		else if(i==N-1&&j==0)
		{
			if(point[i][j]==3&&A[i][j]==-1)
			{
				A[i][j]=A[i][j+1]=A[i-1][j]=A[i-1][j+1]=-1;	
				//reveal(i-1,j);
				//reveal(i-1,j+1);
				reveal(i,j+1);
			}
		}
		else if(i==N-1&&j==N-1)
		{
			if(point[i][j]==3&&A[i][j]==-1)
			{
				A[i][j]=A[i][j-1]=A[i-1][j]=A[i-1][j-1]=-1;	
				//reveal(i-1,j-1);
				//reveal(i-1,j);
				//reveal(i,j-1);
			}
		}	
		return 0;
}

int main()
{
	int T,m=0;
	scanf("%d",&T);
	for(m=1;m<=T;m++)
	{
		scanf("%d",&N);
		int i=0,j=0;
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

		/*main*/
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
						reveal(i,j);	
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
						reveal(i,j);
					}
					
				}
				else if(i==N-1&&j!=0&&j!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i][j-1]=A[i-1][j]=A[i-1][j+1]=A[i-1][j-1]=-1;
						reveal(i,j);	
					}
						
				}
				else if(j==0&&i!=0&&i!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=A[i-1][j+1]=A[i-1][j]=-1;	
						reveal(i,j);
					}
				}
				else if(j==N-1&&i!=0&&i!=N-1)
				{
					if(point[i][j]==5&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=A[i-1][j-1]=A[i-1][j]=-1;
						reveal(i,j);	
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
						//cout<<click;
						A[i][j]=A[i][j+1]=A[i+1][j]=A[i+1][j+1]=-1;	
						reveal(i,j);
					}
					
				}
				else if(i==0&&j==N-1)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i+1][j]=A[i+1][j-1]=-1;	
						reveal(i,j);
					}
				}
				else if(i==N-1&&j==0)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j+1]=A[i-1][j]=A[i-1][j+1]=-1;	
						reveal(i,j);
					}
				}
				else if(i==N-1&&j==N-1)
				{
					if(point[i][j]==3&&A[i][j]==1)
					{
						click++;
						A[i][j]=A[i][j-1]=A[i-1][j]=A[i-1][j-1]=-1;	
						reveal(i,j);
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