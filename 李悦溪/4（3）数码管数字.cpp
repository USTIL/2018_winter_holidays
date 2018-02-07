#include<iostream>
using namespace std;
void show(unsigned x)
{
    switch(x)
    {
        case 0:cout<<" - "<<endl<<"| |"<<endl<<"   "<<endl<<"| |"<<endl<<" - "<<endl; break;
        case 1:cout<<"   "<<endl<<"  |"<<endl<<"   "<<endl<<"  |"<<endl<<"   "<<endl; break;
        case 2:cout<<" - "<<endl<<"  |"<<endl<<" - "<<endl<<"|  "<<endl<<" - "<<endl; break;
        case 3:cout<<" - "<<endl<<"  |"<<endl<<" - "<<endl<<"  |"<<endl<<" - "<<endl; break;
        case 4:cout<<"   "<<endl<<"| |"<<endl<<" - "<<endl<<"  |"<<endl<<"   "<<endl; break;
        case 5:cout<<" - "<<endl<<"|  "<<endl<<" - "<<endl<<"  |"<<endl<<" - "<<endl; break;
        case 6:cout<<" - "<<endl<<"|  "<<endl<<" - "<<endl<<"| |"<<endl<<" - "<<endl; break;
        case 7:cout<<" - "<<endl<<"| |"<<endl<<"   "<<endl<<"  |"<<endl<<"   "<<endl; break;
        case 8:cout<<" - "<<endl<<"| |"<<endl<<" - "<<endl<<"| |"<<endl<<" - "<<endl; break;
        case 9:cout<<" - "<<endl<<"| |"<<endl<<" - "<<endl<<"  |"<<endl<<" - "<<endl; break;
    }
}
int main()
{
    cout<<"input a number:"<<endl;
    unsigned x;
    while(cin>>x)
    {
        int i=0;
        unsigned s[10];
        do
        {
            s[i]=x%10;
            x=x/10;
            i++;
        }while(x);
        for(int j=i-1;j>=0;j--)
        {
            show(s[j]);
        }
        cout<<"input a number:"<<endl;
    }
}
