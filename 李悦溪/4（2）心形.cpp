#include<iostream>
using namespace std;
int main()
{
    unsigned n;
    while(cin>>n)
    {
        unsigned a,b,i,j,c=0;
        a=(n-1)/4;
        if(n%4==1||n%4==2)
            b=1;
        if(n%4==0||n%4==3)
            b=2;
        while(a>0)
        {
            for(i=a;i>0;i--) cout<<"  ";
            for(i=b;i>0;i--) cout<<"¡ó";
            for(i=(n-2*a-2*b);i>0;i--) cout<<"  ";
            for(i=b;i>0;i--) cout<<"¡ó";
            cout<<endl;
            a--;
            b+=2;
        }
         for(j=(n+1)/2;j>0;j--)
        {
            for(i=c;i>0;i--) cout<<"  ";
            for(i=n-2*c;i>0;i--) cout<<"¡ó";
            cout<<endl;
            c++;
        }
    }
}
