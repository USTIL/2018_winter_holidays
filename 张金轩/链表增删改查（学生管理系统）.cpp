#include<iostream>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#define qwer system("CLS")
using namespace std;

class student
{
public:
    string name;
    int number;
    student* pnext;
    student(string a,int b)
    {
        name = a;
        number = b;
    }
};

student* CreateList()
{
    student* P;
    P = new student("����",12345);
    P->pnext = NULL;
    return P;
}

void addnode(student* List)
{
    cout<<"����������ӵ�ѧ����Ϣ������+���䣩\n";
    student* P;
    string a;
    int b;
    cin>>a>>b;
    P = new student(a,b);
    P->pnext = NULL;///��һ��Ϊ��
    while (List->pnext != NULL)
    {
        List = List->pnext;
    }
    ///whlieѭ���꣬listָ��β�ڵ�
    List->pnext = P;
    qwer;
}

void addnode2(student* List,string a,int b)
{
    student* P;
    P = new student(a,b);
    P->pnext = NULL;///��һ��Ϊ��
    while (List->pnext != NULL)
    {
        List = List->pnext;
    }
    ///whlieѭ���꣬listָ��β�ڵ�addnode2(List,"��С��",20);
    List->pnext = P;
}

void showall(student* List)
{
    if (List->pnext == NULL)
    {
        cout<<"���������";
        getch();
        qwer;
    }
    else
    {
        List = List->pnext;
        int renshu = 0;
        while (1)
        {
            renshu++;
            cout<<List->name<<' '<<List->number<<"��"<<endl;
            if (List->pnext == NULL)
                break;
            List = List->pnext;
        }
        cout<<"һ��"<<renshu<<"�ˣ�������"<<endl;
        getch();
        qwer;
    }
}//showall

void findnode(student* List)
{
    cout<<"��������Ҫ���ҵ�����"<<endl;
    string man;
    cin>>man;
    while (List->name != man)
    {
        List = List->pnext;
    }
    cout<<List->name<<' '<<List->number<<"��"<<endl;
    getch();
    qwer;
}

void deletenode(student* List)
{
    cout<<"��������Ҫɾ��������"<<endl;
    string man;
    cin>>man;
    while (List->pnext->name != man)
    {
        List = List->pnext;
    }
    List->pnext = List->pnext->pnext;
    cout<<"ɾ�����";
    getch();
    qwer;
}

void changenode(student* List)
{
    cout<<"��������Ҫ�޸ĵ�����"<<endl;
    string man;
    cin>>man;
    while (List->name != man)
    {
        List = List->pnext;
    }
    cout<<List->name<<' '<<List->number<<"��"<<endl;
    cout<<"�������޸ĺ�����ֺ����䣺\n";
    string nnn;
    int uuu;
    cin>>nnn>>uuu;
    List->name = nnn;
    List->number = uuu;
    cout<<"�޸����";
    getch();
    qwer;
}

int main()
{
    student* List;
    List = CreateList();///Listָ��ָ��������ͷ���
    addnode2(List,"��С��",20);
    addnode2(List,"����",19);
    addnode2(List,"��С��",21);
    addnode2(List,"��С��",18);
    addnode2(List,"��С��",30);
    for (int i=0;i<100;i++)
    {
        cout<<"��a��ʾȫ��ѧ����Ϣ\n";
        cout<<"��b���һ��ѧ����Ϣ\n";
        cout<<"��c����ѧ����Ϣ\n";
        cout<<"��dɾ��ѧ����Ϣ\n";
        cout<<"��e�޸�ѧ����Ϣ\n\n";
        char asd = getch();
        switch(asd)
        {
        case 'a':
            {
                showall(List);
                break;
            }
        case 'b':
            {
                addnode(List);
                break;
            }
        case 'c':
            {
                findnode(List);
                break;
            }
        case 'd':
            {
                deletenode(List);
                break;
            }
        case 'e':
            {
                changenode(List);
                break;
            }
        }///������switch
    }///������for
}
