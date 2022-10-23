#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int sum=0;
int **Matrix(int r,int c)
{
    int**m=new int *[r];
    for(int i=0;i<c;i++)
    {
        m[i]=new int [c];
    }
    srand(time(0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=rand()%3;
        }
    }
    return m;
}
void printMatrix(int**m,int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}

