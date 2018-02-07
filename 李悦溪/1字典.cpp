
#include <iostream>
#include <string>

using namespace std;

//������
class Word
{
public:
    string name;   //����
    string type;   //����
    string meaning;  //����

    Word(string name0, string type0, string meaning0)
    {
        name = name0;
        type = type0;
        meaning =  meaning0;
    };

    void Show()
    {
        cout << " ���ʣ�" << name << " ���ԣ�" << type <<" ���壺" << meaning << endl;
    }
};


//�ʵ���
class Dictionary
{
public:
    string word;   //����
    string cat;   //���

    void show()
    {
        cout << " ���ʣ�" << word << " ���" << cat << endl;
    }

};


//���˵��ʱ���
class Wordbook
{
public:
    string name;   //����
    string meaning;  //����

    Wordbook(string name0, string meaning0)
    {
        name = name0;
        meaning =  meaning0;
    };

    void show()
    {
        cout << " ���ʣ�" << name << " ���壺" << meaning << endl;
    }
};

//������
class Test
{
public:
    string name;   //����
    string type;   //����
    string meaning;  //����
    void T1(string name)
    {
    }

};



int main()
{
    int word_i,WB_i,Dictionary_i;

    word_i=5;
    Word *w[word_i];

    Dictionary_i=0;
    Word *Dict[Dictionary_i];

    w[0] = new Word("bread "," ���� "," ��� ");
    w[1] = new Word("apple"," ����"," ƻ��");
    w[2] = new Word("eat"," ����"," ��");
    w[3] = new Word("drink"," ����"," ��");
    w[4] = new Word("beautiful"," ���ݴ�"," Ư��");

    WB_i=1;
    Wordbook *wb[WB_i];


    cout << "************************" << endl;
    cout << " ��ѡ����" << endl;
    while (1)
    {
        cout << " 1.��ӵ��� "<<endl;
        cout << " 2.�������ҵ��� "<<endl;
        cout << " 3.��ʾ���ʺ��� "<<endl;
        cout << " 4.��ʾ�ʵ� "<<endl;
        cout << " 5.���ʲ��� "<<endl;
        cout << " 6.��Ӹ��˵��ʱ� "<<endl;
        cout << " 0.�˳�"<<endl;
        int t,t1;
        cin >> t;
        if (t==0) return 0;

        if (t == 1)
        {
            cout << " �����뵥�ʣ�";
            string dc;
            cin >> dc;
            cout << " �����뵥�ʴ��ԣ�";
            string cx;
            cin >> cx;
            cout << " �����뵥�ʺ��壺";
            string hy;
            cin >> hy;
            word_i=word_i+1;
            w[word_i-1] = new Word(dc,cx,hy);
            cout << " ����������"<<endl;
        }
        if (t == 2)
        {
            cout << " �����뵥�ʴ��ԣ�";
            string g2;
            cin >> g2;

            for (int i = 0; i < word_i; i++)
            {

                if (w[i]->type==g2)
                {
                    cout << " ���ʱ�ţ�" << i << "  ";
                    w[i]->Show();

                }
            }



        }
      if (t == 3)
        {
            cout << "�����뵥�����ƣ�";
            string g3;
            cin >> g3;

            for (int i = 0; i < Dictionary_i; i++)
            {

                if (w[i]->name==g3)
                {
                cout << " ���ʱ�ţ�" << i << "  ";
                w[i]->Show();

                }
            }



        }
        if (t==4)
        {

            for (int i = 0; i < word_i; i++)
            {

                cout << " ���ʱ�ţ�" << i << "  ";
                w[i]->Show();
            }

        }

        if (t==6)
        {
            cout << " ��������˵��ʱ����ʣ�";
            string dc6;
            cin >> dc6;
            cout << " ��������˵��ʱ����ʺ��壺";
            string hy6;
            cin >> hy6;
            WB_i=WB_i+1;
            wb[WB_i-1] = new Wordbook(dc6,hy6);
            cout << " ����������"<<endl;

        }

    }
    return 0;
}
