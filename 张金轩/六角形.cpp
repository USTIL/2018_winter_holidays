#include<iostream>
using namespace std;
int main()
{
    while (1)
    {
        cout<<"��������Ҫ�������εı��ɼ�����*����ɰɣ�";
        int n;
        cin>>n;
        int sqq = n-1;
        for (int i=1;i<2*n;i++)
        {
            for(int j=0;j<sqq;j++)
                cout<<" ";
            for(int j=0;j<((3*n-2)-2*sqq);j++)
                cout<<"*";
            cout<<endl;
            if (i<n)
                sqq--;
            else
                sqq++;
        }
    }
}
