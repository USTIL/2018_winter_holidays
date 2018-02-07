#include<iostream>
using namespace std;
int main()
{
    unsigned n;
    while(cin>>n)
    {
        unsigned i,j,a=0,b;
        for(i=n;i>0;i--)
        {
            b=n+2*a;
            for(j=n-a-1;j>0;j--) cout<<' ';
            for(j=b;j>0;j--) cout<<'*';
            a++;
            cout<<endl;
        }
        a=1;
        for(i=n;i>1;i--)
        {
            for(j=a;j>0;j--) cout<<' ';
            for(j=b-2*a;j>0;j--) cout<<'*';
            a++;
            cout<<endl;
        }
    }
}
