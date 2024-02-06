#include "my_mat.h"
#include <stdio.h>
int max(int,int);
#define maxWeight 20

void selectItems(float weights[], float values[], char *strings[], int numStrings)
{
    int dp[numStrings+1][maxWeight+1];
    
    for (int i = 0; i <=numStrings; i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=maxWeight;j++)
    {
        dp[0][j]=0;
    }
    for(int h=1;h<=numStrings;h++)
        for (int l=0;l<=maxWeight;l++)
        {
            dp[h][l]=max(dp[h-1][l],values[h]+dp[h-1][l-(int)weights[h]]);
        }
    int checkWeight=maxWeight;  
    printf("[");
    for(int s=numStrings;s>0;s++)
    {
        if(dp[s][checkWeight]==dp[s-1][checkWeight])
            continue;
        printf("%s ,",strings[s]);
        checkWeight-=weights[s];  
    }
    printf("]");
}

int max(int n1,int n2)
{
    if(n1>n2)
        return n1;
    return n2;    
}

int isShortestPath(int mn[][numArray],int a,int b)
{
    if(a==b)
        return 0;
    if(shortestPath(mn,a,b)==0)
        return 0;
    return 1;    
}
int shortestPath(int mn[][numArray],int a,int b)
{
    int mat[numArray][numArray];
    for(int i1=0;i1<numArray;i1++)
        for(int i2=0;i2<numArray;i2++)
        {
           /*if(mn[i1][i2]==0)
                mat[i1][i2]=10000000;
            else  */  
                mat[i1][i2]=mn[i1][i2];     
        }
            

    for(int k=0;k<numArray;k++)
        for(int i=0;i<numArray;i++)
            for(int j=0;j<numArray;j++)
            {
                if(mat[i][k]!=0 && mat[k][j]!=0)
                    if(mat[i][j]>mat[i][k]+mat[k][j] || mat[i][j] == 0)
                         mat[i][j]=mat[i][k]+mat[k][j];
            }

    return mat[a][b];
}

void getNumbers(int mat[][numArray])
{
    for (int i = 0; i < numArray; i++)
        for (int j = 0; j < numArray; j++)
        {
            scanf("%d",&mat[i][j]);    
        }
             
}

