#include<iostream>
using namespace std;
///�����˶Ծ���ʲô�������εļ���˼����............
int main()
{
    for (int asd=0;asd<100;asd++)
    {
    cout<<"�������������ɲ������ε�����ͼ����������ô���5�����ع��ٻᵼ��ͼ�β����ۣ�"<<endl;
    int n;
    cin>>n;
    int up = n/2;
    int upp = (up-1)/2;
    int abl = upp;
    for (int i=0;i<upp;i++)
    {
        for (int j=0;j<abl;j++)
            cout<<"  ";
        for (int j=0;j<(up-2*abl);j++)
            cout<<"��";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        if (n%2 != 0)
            cout<<"  ";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        for (int j=0;j<(up-2*abl);j++)
            cout<<"��";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        abl--;
        cout<<endl;
    }
    int s = 0;
    while (n>=0)
    {
        for (int j=0;j<s;j++)
            cout<<"  ";
        s++;
        for (int j=0;j<n;j++)
            cout<<"��";
        n-=2;
        cout<<endl;
    }
}
}


