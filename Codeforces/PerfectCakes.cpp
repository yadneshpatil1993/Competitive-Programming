#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// you may add more methods here

int findImperfectCake(int N, int M, int numBoxesCompared[100],
        int boxesLeft[100][1000], int boxesRight[100][1000], char compRes[100]) {
    //add code to this function to solve the problem
    //don't write code in this editor
    //your code will not be saved across submissions

    int cakes[N+1];
    int j=1;
    for(j=1;j<=N;j++)
    {
        cakes[j]=0;
    }
    int i=0;
    while(i<M)
    {
        if(compRes[i]=='=')
        {
            int temp1=0;
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                cakes[boxesLeft[i][temp1]]=200;
            }
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                cakes[boxesRight[i][temp1]]=200;
            }
        }
        else if(compRes[i]=='>')
        {
            int temp1=0;
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                if(cakes[boxesLeft[i][temp1]]>=0 && cakes[boxesRight[i][temp1]] != 200)cakes[boxesLeft[i][temp1]]++;
                else cakes[boxesLeft[i][temp1]]=200;
            }
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                if(cakes[boxesRight[i][temp1]]<=0 && cakes[boxesRight[i][temp1]] != 200)cakes[boxesRight[i][temp1]]--;
                else cakes[boxesLeft[i][temp1]]=200;
            }
        }
        else if(compRes[i]=='<')
        {
            int temp1=0;
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                if(cakes[boxesLeft[i][temp1]]<=0 && cakes[boxesRight[i][temp1]] != 200)cakes[boxesLeft[i][temp1]]--;
                else cakes[boxesLeft[i][temp1]]=200;
            }
            for(temp1=0;temp1<numBoxesCompared[i];temp1++)
            {
                if(cakes[boxesRight[i][temp1]]>=0 && cakes[boxesRight[i][temp1]] != 200)cakes[boxesRight[i][temp1]]++;
                else cakes[boxesLeft[i][temp1]]=200;
            }
        }
        i++;
    }
    int flag=0,count=0;
    for(j=1;j<=N;j++)
    {
        if(cakes[j]!=200)
        {
            count++;
            flag=j;
        }
    }
    if(count==1)return flag;
    return 0;
}

int main() {
    int T, N, M;
    int numBoxesCompared[100];
    int boxesLeft[100][1000], boxesRight[100][1000];
    char compRes[100];
    int i, j;
    scanf("%d",&T);
    while(T--) {
        scanf("%d %d",&N,&M);
        for(i=0;i<M;i++) {
            scanf("%d",&numBoxesCompared[i]);
            for(j=0;j<numBoxesCompared[i];j++) {
                scanf("%d",&boxesLeft[i][j]);
            }
            for(j=0;j<numBoxesCompared[i];j++) {
                scanf("%d",&boxesRight[i][j]);
            }
            scanf("%s",&compRes[i]);
        }
        printf("%d\n",findImperfectCake(N,M,numBoxesCompared,
                    boxesLeft,boxesRight,compRes));
    }
    return 0;
}

