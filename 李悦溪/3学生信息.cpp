#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
typedef struct student
{
    char name[25];
    char sex[7];
    int age;
    long classnum;
    struct student *next;

} Student;
int hms(Student *head)
{
    int a=0;
    while(head)
    {
        a++;
        head=head->next;
    }
    return a;

}
Student *listCreate()
{
    char name[25];
    Student *head=NULL,*lastNode,*newNode;
    while(1)
    {
        cout<<"input name:"<<endl;
        gets(name);
        if(name[0]==' '||name[0]==' ')
            break;
        newNode=(Student*)malloc(sizeof(Student));
        if(!newNode) break;
        strcpy(newNode->name,name);
        cout<<"input sex:"<<endl;
        gets(newNode->sex);
        cout<<"input age:"<<endl;
        cin>>newNode->age;
        cout<<"input classnameber:"<<endl;
        cin>>newNode->classnum;
        getchar();
        newNode->next=NULL;
        if(!head)
            head=lastNode=newNode;
        else
        {
            lastNode->next=newNode;
            lastNode=newNode;
        }
    }
    return head;
}
Student *Find(Student *head,char *na)
{
    while(head)
    {
        if(!strcmp(head->name,na))
        {
            return head;
        }
        head=head->next;
    }
    return NULL;
}
Student *add(Student *head,char *na,char *sex,int age,long classnum)
{
    Student *newNode,*p=head,*c=head;
    while(c!=NULL)
    {
        p=c;
        c=c->next;
    }
    newNode=(Student *)malloc(sizeof(Student));
    if(!newNode) return head;
    strcpy(newNode->name,na);
    strcpy(newNode->sex,sex);
    newNode->age=age;
    newNode->classnum=classnum;
    newNode->next=NULL;
    if(c==head)
    {
        newNode->next=head;
        return newNode;
    }
    newNode->next=p->next;
    p->next=newNode;
    return head;
}
void Delete(Student *s,Student *head)
{
    Student *c=head,*p=head;
    while(c!=s)
    {
        p=c;
        c=c->next;
    }
    p->next=c->next;
    free(s);
}
int main()
{
    Student *head=listCreate();
    while(1)
    {
        cout<<endl<<"1.how many students?"<<endl<<"2.add a student"<<endl<<"3.find a student"<<endl<<"0.exit"<<endl;
        int x;
        cin>>x;
        getchar();
        if(x==0) break;
        if(x==1)
        {
            int h;
            h=hms(head);
            cout<<"there are "<<h<<"  students"<<endl;
        }
        if(x==2)
        {
            char na[25],sex[7];
            int age;
            long classnum;
            cout<<"input name:"<<endl;
            gets(na);
            cout<<"input sex:"<<endl;
            gets(sex);
            cout<<"input age:"<<endl;
            cin>>age;
            cout<<"input classnameber:"<<endl;
            cin>>classnum;
            add(head,na,sex,age,classnum);
        }
        if(x==3)
        {

            cout<<"input the stuent's name:"<<endl;
            char na[25];
            gets(na);
            cout<<"information:"<<endl<<"name : "<<Find(head,na)->name<<"     sex : "<<Find(head,na)->sex<<"    age : "<<Find(head,na)->age<<"     classnumber : "<<Find(head,na)->classnum<<endl;
            cout<<"1.amend"<<endl<<"2.delete"<<endl<<"0.go on"<<endl;
            int h;
            cin>>h;
            if(h==0)
                continue;
            if(h==1)
            {
                cout<<"which one?"<<"1.name    2.sex     3.age     4.classnumber"<<endl;
                int y,l;
                long m;
                char z[25];
                cin>>y;
                cout<<"what do you want to amend to?"<<endl;
                if(y==1)
                {
                    gets(z);
                    strcpy(Find(head,na)->name,z);
                }
                if(y==2)
                {
                    gets(z);
                    strcpy(Find(head,na)->sex,z);
                }
                if(y==3)
                {
                    cin>>l;
                    Find(head,na)->age=l;
                }
                if(y==4)
                {
                    cin>>m;
                    Find(head,na)->classnum=m;
                }
            }
            if(h==2)
            {
                Delete(Find(head,na),head);
            }
        }
    }

}
