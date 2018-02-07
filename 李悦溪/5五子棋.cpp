#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define N 15
using namespace std;
int a[N][N]= {0};
int tn=0;
void print()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(a[i][j]==1)
                cout<<"O  ";
            else if(a[i][j]==2)
                cout<<"X  ";
            else
                cout<<"*  ";
        }
        cout<<i<<endl;
    }
    for(int i=0; i<N; i++)
        printf("%-3d",i);
    cout<<endl;
}
int judge(int x,int y)
{
    int t;
    t=2-(tn%2);
    for(int i=x; i<x+4; i++)
    {
        if(a[i-4][y]==t&&a[i-3][y]==t&&a[i-2][y]==t&&a[i-1][y]==t&&a[i][y]==t)
        {
            cout<<"the winner is player "<<t<<endl;
            return 0;
        }
    }
    for(int i=y; i<y+4; i++)
    {
        if(a[x][i-4]==t&&a[x][i-3]==t&&a[x][i-2]==t&&a[x][i-1]==t&&a[x][i]==t)
        {
            cout<<"the winner is player "<<t<<endl;
            return 0;
        }
    }
    for(int i=y; i<y+4; i++)
    {
        if(a[x-4][i-4]==t&&a[x-3][i-3]==t&&a[x-2][i-2]==t&&a[x-1][i-1]==t&&a[x][i]==t)
        {
            cout<<"the winner is player "<<t<<endl;
            return 0;
        }
    }
    for(int i=x; i<x+4; i++)
    {
        if(a[i-4][y-4]==t&&a[i-3][y-3]==t&&a[i-2][y-2]==t&&a[i-1][y-1]==t&&a[i][y]==t)
        {
            cout<<"the winner is player "<<t<<endl;
            return 0;
        }
    }
}
int main()
{
    print();
    int x=0,y=0;
    do
    {
        tn++;

            if(tn%2==1)
            {
                cout<<"Turn to player 1, please input the position:";
                cin>>x>>y;
                while (a[x][y] != 0)
                {
                    cout<<"please input the position again:";
                    cin>>x>>y;
                }
                a[x][y]=1;
            }
            else
            {
                cout<<"Turn to player 2, please input the position:";
                cin>>x>>y;
                while (a[x][y] != 0)
                {
                    cout<<"please input the position again:";
                    cin>>x>>y;
                }
                a[x][y]=2;
            }
            system("CLS");
            print();
        }while(judge(x,y));
}
