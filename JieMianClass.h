#include<iostream>
#include<fstream>
#include<cstring>
/* #ifndef _ReplyClass_h_
    #define _ReplyClass_h_
    #include"ReplyClass.h"
#endif*/
using namespace std;
class Reply;
class JieMian
{
public:
    void FirstDisplay();
    void JudgeConfig();//判断是否存在存档
    void inName();//输入姓名
    void SelectJueSe();//选择角色
    void SelectXingZuo();//选择星座
    void SelectNianLing();//选择年龄
    void SelectSex();//选择性别
    void OpenConfig();//载入Config
    void SaveConfig();//保存Config
    void Reset();//重设人设
    void Ask_Config();//判断是否重设人设
    void Display();
    void Judge(Reply &);//传递数据给界面类
private:
    //char XingZuo[3];//储存星座
    string Name;//输入姓名
    int JueSe;/*角色代码
    1.心理医生 2.妈妈 3.女朋友
    4.男朋友 5.已故亲人 6.分手恋人*/
    int XingZuo;/*星座代码
    1.白羊 2.金牛 3.双子4.巨蟹
    5.狮子 6.处女 7.天秤 8.天蝎
    9.射手 10.摩蝎 11.水瓶 12.双鱼*/
    int NianLing;//年龄 1.15~35 2.35~55
    int Sex;//性别 1.男 2.女
    
};
void JieMian::FirstDisplay()
{
    cout<<"********************"<<endl;
    cout<<"    心理安抚系统"<<endl;
    cout<<"********************"<<endl;
}
void JieMian::JudgeConfig()//判断是否存在存档
{
    fstream judge("Config.txt",ios::in);
    if(!judge)
    {
        Reset();
    }
    else 
    {
        Ask_Config();
    }
}
void JieMian::inName()
{
    cout<<"请输入聊天对象姓名"<<endl;
    cin>>Name;
}
void JieMian::SelectJueSe()
{
    cout<<"请选择角色"<<endl;
    cout<<"1.心理医生"<<" ";
    cout<<"2.妈妈"<<" ";
    cout<<"3.女朋友"<<endl;
    cout<<"4.男朋友"<<" ";
    cout<<"5.已故亲人"<<" ";
    cout<<"6.分手恋人"<<endl;
    cin>>JueSe;

}
void JieMian::SelectXingZuo()
{
    cout<<"请选择星座"<<endl;
    cout<<"1.白羊"<<" ";
    cout<<"2.金牛"<<" ";
    cout<<"3.双子"<<" ";
    cout<<"4.巨蟹"<<endl;
    cout<<"5.狮子"<<" ";
    cout<<"6.处女"<<" ";
    cout<<"7.天秤"<<" ";
    cout<<"8.天蝎"<<endl;
    cout<<"9.射手"<<" ";
    cout<<"10.摩蝎"<<" ";
    cout<<"11.水瓶"<<" ";
    cout<<"12.双鱼"<<endl;  
    cin>>XingZuo;
}
void JieMian::SelectNianLing()
{
    cout<<"请选择年龄"<<endl;
    cout<<"1.15~35岁"<<" ";
    cout<<"2.35~55岁"<<endl;
    cin>>NianLing;
}
void JieMian::SelectSex()
{
    cout<<"请选择性别"<<endl;
    cout<<"1.男"<<" ";
    cout<<"2.女"<<endl;
    cin>>Sex;
}

void JieMian::OpenConfig()//载入Config
{
    string temp;
    ifstream Config("Config.txt",ios::in);
    if (!Config)
    {
        cout << "Error saving file"; exit (1);
    }
    getline(Config,Name);
    Config>>XingZuo;
    Config>>JueSe;
    Config>>NianLing;
    Config>>Sex;
    Config.close();
}
void JieMian::SaveConfig()//保存Config
{
    ofstream Config("Config.txt",ios::out);
    if(!Config)
    {
        cerr<<"Error opening Config "<<endl;
        exit(1);
    }
    Config<<Name<<endl;
    Config<<XingZuo<<endl;
    Config<<JueSe<<endl;
    Config<<NianLing<<endl;
    Config<<Sex;
    Config.close();
}
void JieMian::Reset()//重设人设
{
    inName();
    SelectJueSe();
    SelectXingZuo();
    SelectNianLing();
    SelectSex();
    SaveConfig();
}
void JieMian::Ask_Config()//判断是否重选
{
    string Judge;
    cout<<"是否载入上一次的存档?"<<endl;
    cin>>Judge;
    if(Judge=="是")
        OpenConfig();
    else 
        Reset();
}

void JieMian::Display()
{
    cout<<Name<<" "<<XingZuo<<" "<<JueSe<<" "<<NianLing<<" "<<Sex<<endl;
}


