#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r, int c)
{
    int **m = new int *[r];
    for(int i=0; i<c; i++)
    {
        m[i] = new int[c];
    }
    srand(time(0));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m[i][j] = rand()%10;
        }
    }
    return m;
}

void printMatrix(int **m, int rows, int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}

void sum(int **m, int **n, int rows, int columns)
{
    int a[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            a[i][j]=m[i][j]+n[i][j];
        }
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}


int main()
{
    int **x = Matrix(3,4);
    cout<<"The First Matrix Array is: "<<endl;
    printMatrix(x,3,4);
    cout<<endl;
    int **y = Matrix(3,4);
    cout<<"The Second Matrix Array is: "<<endl;
    printMatrix(y,3,4);
    cout<<"The Summation Of The Matrix Array is : "<<endl;
    sum(x,y,3,4);
    return 0;
}


