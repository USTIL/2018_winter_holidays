
#include <iostream>
#include <string>

using namespace std;

//单词类
class Word
{
public:
    string name;   //名称
    string type;   //词性
    string meaning;  //含义

    Word(string name0, string type0, string meaning0)
    {
        name = name0;
        type = type0;
        meaning =  meaning0;
    };

    void Show()
    {
        cout << " 单词：" << name << " 词性：" << type <<" 含义：" << meaning << endl;
    }
};


//词典类
class Dictionary
{
public:
    string word;   //单词
    string cat;   //类别

    void show()
    {
        cout << " 单词：" << word << " 类别：" << cat << endl;
    }

};


//个人单词本类
class Wordbook
{
public:
    string name;   //名称
    string meaning;  //含义

    Wordbook(string name0, string meaning0)
    {
        name = name0;
        meaning =  meaning0;
    };

    void show()
    {
        cout << " 单词：" << name << " 含义：" << meaning << endl;
    }
};

//测试类
class Test
{
public:
    string name;   //名称
    string type;   //词性
    string meaning;  //含义
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

    w[0] = new Word("bread "," 名词 "," 面包 ");
    w[1] = new Word("apple"," 名词"," 苹果");
    w[2] = new Word("eat"," 动词"," 吃");
    w[3] = new Word("drink"," 动词"," 喝");
    w[4] = new Word("beautiful"," 形容词"," 漂亮");

    WB_i=1;
    Wordbook *wb[WB_i];


    cout << "************************" << endl;
    cout << " 请选择功能" << endl;
    while (1)
    {
        cout << " 1.添加单词 "<<endl;
        cout << " 2.按类别查找单词 "<<endl;
        cout << " 3.显示单词含义 "<<endl;
        cout << " 4.显示词典 "<<endl;
        cout << " 5.单词测试 "<<endl;
        cout << " 6.添加个人单词本 "<<endl;
        cout << " 0.退出"<<endl;
        int t,t1;
        cin >> t;
        if (t==0) return 0;

        if (t == 1)
        {
            cout << " 请输入单词：";
            string dc;
            cin >> dc;
            cout << " 请输入单词词性：";
            string cx;
            cin >> cx;
            cout << " 请输入单词含义：";
            string hy;
            cin >> hy;
            word_i=word_i+1;
            w[word_i-1] = new Word(dc,cx,hy);
            cout << " 单词添加完毕"<<endl;
        }
        if (t == 2)
        {
            cout << " 请输入单词词性：";
            string g2;
            cin >> g2;

            for (int i = 0; i < word_i; i++)
            {

                if (w[i]->type==g2)
                {
                    cout << " 单词编号：" << i << "  ";
                    w[i]->Show();

                }
            }



        }
      if (t == 3)
        {
            cout << "请输入单词名称：";
            string g3;
            cin >> g3;

            for (int i = 0; i < Dictionary_i; i++)
            {

                if (w[i]->name==g3)
                {
                cout << " 单词编号：" << i << "  ";
                w[i]->Show();

                }
            }



        }
        if (t==4)
        {

            for (int i = 0; i < word_i; i++)
            {

                cout << " 单词编号：" << i << "  ";
                w[i]->Show();
            }

        }

        if (t==6)
        {
            cout << " 请输入个人单词本单词：";
            string dc6;
            cin >> dc6;
            cout << " 请输入个人单词本单词含义：";
            string hy6;
            cin >> hy6;
            WB_i=WB_i+1;
            wb[WB_i-1] = new Wordbook(dc6,hy6);
            cout << " 单词添加完毕"<<endl;

        }

    }
    return 0;
}
