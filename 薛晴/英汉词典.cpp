
#include<stdio.h>
#include<iostream>
#include<string.h>
#include <cstdlib>
#define LEN sizeof (struct cte)
using namespace std;



struct cte  //�ֵ�
{
    char  chinese[100];
    char  English[100];
    char  cixing[100];
    char  nandu[100];
    char  leibie[100];
    char  qitayi[100];
    struct cte *next;
};




struct mycte  //���ʱ�
{
    char  chinese[100];
    char  English[100];
    char  cixing[100];
    char  nandu[100];
    char  leibie[100];
    char  qitayi[100];
    struct mycte *next;
};
struct cte *insert(struct cte *head)  //�ֵ䵥�����
{
    struct cte *p1,*p2,*p3;
    unsigned int a , b;
    p1=p2=head;
    if (head == 0)
    {
        p1 = (struct cte *)malloc(LEN);
        cout<<"1.����Ӣ"<<endl;
        cout<<"2.Ӣ����"<<endl;
        cin>>a;
    if (a==1)
    {
        cout<<"����������:"<<endl;
        cin>>p1->chinese;
        cout<<"������Ӣ��"<<endl;
        cin>>p1->English;
        cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
        cin>>p1->cixing;
        cout<<"�������Ѷ�(�ס��С���)"<<endl;
        cin>>p1->nandu;
        cout<<"���������(��Ʒ ״̬)"<<endl;
        cin>>p1->leibie;
        cout<<"��������������"<<endl;
        cin>>p1->qitayi;
        cout<<"����ϸ���"<<endl;
        cout<<"����"<<p1->chinese<<endl;
        cout<<"Ӣ��"<<p1->English<<endl;
        cout<<"����"<<p1->cixing<<endl;
        cout<<"�Ѷ�"<<p1->nandu<<endl;
        cout<<"���"<<p1->leibie<<endl;
        cout<<"��������"<<p1->qitayi<<endl;
    }
    else if (a==2)
    {
        cout<<"������Ӣ��"<<endl;
        cin>>p1->English;
        cout<<"����������:"<<endl;
        cin>>p1->chinese;
        cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
        cin>>p1->cixing;
        cout<<"�������Ѷ�(�ס��С���)"<<endl;
        cin>>p1->nandu;
        cout<<"���������(��Ʒ ״̬)"<<endl;
        cin>>p1->leibie;
        cout<<"��������������"<<endl;
        cin>>p1->qitayi;
        cout<<"����ϸ���"<<endl;
        cout<<"����"<<p1->chinese<<endl;
        cout<<"Ӣ��"<<p1->English<<endl;
        cout<<"����"<<p1->cixing<<endl;
        cout<<"�Ѷ�"<<p1->nandu<<endl;
        cout<<"���"<<p1->leibie<<endl;
        cout<<"��������"<<p1->qitayi<<endl;
    }
    else
    {
        cout<<"��������"<<endl;
    }
    head = p1;
    head->next=0;
    }
    else
    {
        p1=(struct cte *)malloc(LEN);
        p3=head->next;
        head->next=p1;
        p1->next=p3;
        cout<<"1.����Ӣ"<<endl;
        cout<<"2.Ӣ����"<<endl;
        cin>>b;
        if (b==1)
        {
            cout<<"����������:"<<endl;
            cin>>p1->chinese;
            cout<<"������Ӣ��"<<endl;
            cin>>p1->English;
            cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
            cin>>p1->cixing;
            cout<<"�������Ѷ�(�ס��С���)"<<endl;
            cin>>p1->nandu;
            cout<<"���������(��Ʒ ״̬)"<<endl;
            cin>>p1->leibie;
            cout<<"��������������"<<endl;
            cin>>p1->qitayi;
            cout<<"����ϸ���"<<endl;
            cout<<"����"<<p1->chinese<<endl;
            cout<<"Ӣ��"<<p1->English<<endl;
            cout<<"����"<<p1->cixing<<endl;
            cout<<"�Ѷ�"<<p1->nandu<<endl;
            cout<<"���"<<p1->leibie<<endl;
            cout<<"��������"<<p1->qitayi<<endl;
        }
        else if (b==2)
        {
            cout<<"������Ӣ��";
            cin>>p1->English;
            cout<<"����������:"<<endl;
            cin>>p1->chinese;
            cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
            cin>>p1->cixing;
            cout<<"�������Ѷ�(�ס��С���)"<<endl;
            cin>>p1->nandu;
            cout<<"���������(��Ʒ ״̬)"<<endl;
            cin>>p1->leibie;
            cout<<"��������������"<<endl;
            cin>>p1->qitayi;
            cout<<"����ϸ���"<<endl;
            cout<<"����"<<p1->chinese<<endl;
            cout<<"Ӣ��"<<p1->English<<endl;
            cout<<"����"<<p1->cixing<<endl;
            cout<<"�Ѷ�"<<p1->nandu<<endl;
            cout<<"���"<<p1->leibie<<endl;
            cout<<"��������"<<p1->qitayi<<endl;

        }
        else
        {
            cout<<"��������"<<endl;
        }
    }
    return head;
}



void cscan(struct cte *head)   //����Ӣ
{
    struct cte *p;
    char a[100];
    cout<<"������:"<<endl;
    cin>>a;
    p = head;
    if(head==0)
        cout<<"���ʵ䵱ǰΪ��"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->chinese)==0)
        {
            printf("English:%s",p->English);
            p=0;
        }
        else if (strcmp(a,p->chinese) != 0)
            p=p->next;
        if(p==0)
            cout<<"���޴˴���"<<endl;
    }
    system("pause");
}




//���ʱ�
struct mycte *insert(struct mycte *head)  /*�������*/
{
    struct mycte *p1,*p2,*p3;
    unsigned int a , b;
    p1=p2=head;
    if (head == 0)
    {
        p1 = (struct mycte *)malloc(LEN);
        cout<<"1.����Ӣ"<<endl;
        cout<<"2.Ӣ����"<<endl;
        cin>>a;
    if (a==1)
    {
        cout<<"����������:"<<endl;
        cin>>p1->chinese;
        cout<<"������Ӣ��"<<endl;
        cin>>p1->English;
        cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
        cin>>p1->cixing;
        cout<<"�������Ѷ�(�ס��С���)"<<endl;
        cin>>p1->nandu;
        cout<<"���������(��Ʒ ״̬)"<<endl;
        cin>>p1->leibie;
        cout<<"��������������"<<endl;
        cin>>p1->qitayi;
        cout<<"����ϸ���"<<endl;
        cout<<"����"<<p1->chinese<<endl;
        cout<<"Ӣ��"<<p1->English<<endl;
        cout<<"����"<<p1->cixing<<endl;
        cout<<"�Ѷ�"<<p1->nandu<<endl;
        cout<<"���"<<p1->leibie<<endl;
        cout<<"��������"<<p1->qitayi<<endl;
    }
    else if (a==2)
    {
        cout<<"������Ӣ��"<<endl;
        cin>>p1->English;
        cout<<"����������:"<<endl;
        cin>>p1->chinese;
        cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
        cin>>p1->cixing;
        cout<<"�������Ѷ�(�ס��С���)"<<endl;
        cin>>p1->nandu;
        cout<<"���������(��Ʒ ״̬)"<<endl;
        cin>>p1->leibie;
        cout<<"��������������"<<endl;
        cin>>p1->qitayi;
        cout<<"����ϸ���"<<endl;
        cout<<"����"<<p1->chinese<<endl;
        cout<<"Ӣ��"<<p1->English<<endl;
        cout<<"����"<<p1->cixing<<endl;
        cout<<"�Ѷ�"<<p1->nandu<<endl;
        cout<<"���"<<p1->leibie<<endl;
        cout<<"��������"<<p1->qitayi<<endl;
    }
    else
    {
        cout<<"��������"<<endl;
    }
    head = p1;
    head->next=0;
    }
    else
    {
        p1=(struct mycte *)malloc(LEN);
        p3=head->next;
        head->next=p1;
        p1->next=p3;
        cout<<"1.����Ӣ"<<endl;
        cout<<"2.Ӣ����"<<endl;
        cin>>b;
        if (b==1)
        {
            cout<<"����������:"<<endl;
            cin>>p1->chinese;
            cout<<"������Ӣ��"<<endl;
            cin>>p1->English;
            cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
            cin>>p1->cixing;
            cout<<"�������Ѷ�(�ס��С���)"<<endl;
            cin>>p1->nandu;
            cout<<"���������(��Ʒ ״̬)"<<endl;
            cin>>p1->leibie;
            cout<<"��������������"<<endl;
            cin>>p1->qitayi;
            cout<<"����ϸ���"<<endl;
            cout<<"����"<<p1->chinese<<endl;
            cout<<"Ӣ��"<<p1->English<<endl;
            cout<<"����"<<p1->cixing<<endl;
            cout<<"�Ѷ�"<<p1->nandu<<endl;
            cout<<"���"<<p1->leibie<<endl;
            cout<<"��������"<<p1->qitayi<<endl;
        }
        else if (b==2)
        {
            cout<<"������Ӣ��";
            cin>>p1->English;
            cout<<"����������:"<<endl;
            cin>>p1->chinese;
            cout<<"���������(���ʡ����ʡ����ݴʡ����ʡ����)"<<endl;
            cin>>p1->cixing;
            cout<<"�������Ѷ�(�ס��С���)"<<endl;
            cin>>p1->nandu;
            cout<<"���������(��Ʒ ״̬)"<<endl;
            cin>>p1->leibie;
            cout<<"��������������"<<endl;
            cin>>p1->qitayi;
            cout<<"����ϸ���"<<endl;
            cout<<"����"<<p1->chinese<<endl;
            cout<<"Ӣ��"<<p1->English<<endl;
            cout<<"����"<<p1->cixing<<endl;
            cout<<"�Ѷ�"<<p1->nandu<<endl;
            cout<<"���"<<p1->leibie<<endl;
            cout<<"��������"<<p1->qitayi<<endl;

        }
        else
        {
            cout<<"��������"<<endl;
        }
    }
    return head;
}




void cscan(struct mycte *head)  //����Ӣ
{
    struct mycte *p;
    char a[100];
    cout<<"������:"<<endl;
    cin>>a;
    p = head;
    if(head==0)
        cout<<"���ʵ䵱ǰΪ��"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->chinese)==0)
        {
            printf("English:%s",p->English);
            p=0;
        }
        else if (strcmp(a,p->chinese) != 0)
            p=p->next;
        if(p==0)
            cout<<"���޴˴���"<<endl;
    }
    system("pause");
}





void escan(struct cte *head)   /*Ӣ�뺺*/
{
    struct cte *p;
    char a[100];
    cout<<"please input a word:";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"���ʵ䵱ǰΪ��"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->English) == 0)
        {
            cout<<"����:"<<p->chinese;
            p = p->next;
        }
        else if (strcmp(a,p->English)!=0)
            p = p->next;
        if(p==0)
            cout<<"���޴˴���"<<endl;
    }
    system("pause");
}


void qty(struct cte *head)   //���ʵ����к���
{
    struct cte *p;
    char a[100];
    cout<<"������Ӣ��";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"���ʵ䵱ǰΪ��"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->English) == 0)
        {
            cout<<"����:"<<p->qitayi<<"     "<<p->chinese<<endl;
            p = p->next;
        }
        else if (strcmp(a,p->English)!=0)
            p = p->next;
        if(p==0)
            cout<<"���޴˴���"<<endl;
    }
    system("pause");
}




void chazhao(struct cte *head)   //��������
{
    struct cte *p;
    char a[100];
    cout<<"���������(��Ʒ��״̬)";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"���ʵ䵱ǰΪ��"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->leibie) == 0)
        {
            cout<<"���ҽ����"<<p->English<<endl;
            p = p->next;
        }
        else if (strcmp(a,p->leibie)!=0)
            p = p->next;
        if(p==0)
            cout<<"���޴˴���"<<endl;
    }
    system("pause");
}



void kaoshi(struct cte *head)  //����Ӣ����
{
    struct cte *p;
    char a[100];
    char b[100];
    int f=0;
    int n,i;
    cout<<"������Ҫ���Դʻ�ĸ���"<<endl;
    cin>>n;
    p = head;
    if(head==0)
        cout<<"���ʿ����޴˴�"<<endl;
     for(i=0;i<n;i++)
    {
        int m=0;
        cout<<"�����뺺��:"<<endl;
        cin>>a;
        cout<<"������Ӣ��";
        cin>>b;
                if (strcmp(b,p->English)==0)
            {
                f++;
                m=1;
            }
            //else
                //if (strcmp(b,p->English) != 0)
           // {
                //f=f-1;
                p=p->next;
            //}
         cout<<"����÷�"<<m<<endl;
    }

        if(p==0)
                cout<<"�ޱ��ʻ��¼"<<endl;
        cout<<"�ܵ÷�";
        cout<<f<<endl;

    system("pause");
}





void print (struct cte *head)  /*�ʵ�鿴*/
{
    struct cte *p;
    p = head;
    if(p==0)
        cout<<"�ôʵ�û���κμ�¼";
    while  (p !=0)
    {
        cout<<"    ���� "<<p->chinese;
        cout<<"    Ӣ�� "<<p->English;
        cout<<"    ���� "<<p->cixing;
        cout<<"    �Ѷ� "<<p->nandu<<endl;
        p = p->next;
    }
    system("pause");
}




void print (struct mycte *head)  /*���ʱ��鿴*/
{
    struct mycte *p;
    p = head;
    if(p==0)
        cout<<"�ôʵ�û���κμ�¼";
    while  (p !=0)
    {
        cout<<"    ���� "<<p->chinese;
        cout<<"    Ӣ�� "<<p->English;
        cout<<"    ���� "<<p->cixing;
        cout<<"    �Ѷ� "<<p->nandu<<endl;
        p = p->next;
    }
    system("pause");
}




int  main()
{
    void cscan(struct cte *head);
    void escan(struct cte *head);
    void chazhao(struct cte *head);
    void kaoshi(struct cte *head);
    void qty(struct cte *head);
    struct cte *insert(struct cte *head);
    struct cte *startw(void);
    struct mycte *insert(struct mycte *head);
    struct mycte *start(void);
    struct cte *B=0;
    struct mycte *C=0;
    int a,b=0,c;

    while(1)
        {
            cout << "************************" << endl;
            cout << "��ӭʹ������ʻ�Ӣ���ֵ�" << endl;
            cout<<"��ѡ��"<<endl;
            cout<<"     1.����Ӣ"<<endl;
            cout<<"     2.Ӣ�뺺"<<endl;
            cout<<"     3.����´�"<<endl;
            cout<<"     4.�鿴�ʵ�"<<endl;
            cout<<"     5.��ӵ��ʱ�"<<endl;
            cout<<"     6.�鿴���ʱ�"<<endl;
            cout<<"     7.���ҵ���"<<endl;
            cout<<"     8.����"<<endl;
            cout<<"     9.���ҵ��ʵ����к���"<<endl;
            cout<<"     10.�����Ļ"<<endl;
            cout << "************************" << endl;

            cin>>a;
            if(a==1)
            {
                cscan(B);
                system("cls");
            }
            else if(a==2)
            {
                escan(B);
                system("cls");
            }
            else if(a==3)
            {
                B = insert(B);
                system("cls");
            }
            else if(a==4)
            {
                print(B);
                system("cls");
            }
            else if(a==5)
            {
                C = insert(C);
                system("mycls");
            }
            else if(a==6)
            {
                print(C);
                system("mycls");
            }
            else if(a==7)
            {
                chazhao(B);
                system("cls");
            }
            else if(a==8)
            {
                kaoshi(B);
                system("cls");
            }
             else if(a==9)
            {
                qty(B);
                system("cls");
            }
            else if(a==10)
                system("cls");
            else
                cout<<"��������";
        }
}

