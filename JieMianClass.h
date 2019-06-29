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
    void JudgeConfig();//�ж��Ƿ���ڴ浵
    void inName();//��������
    void SelectJueSe();//ѡ���ɫ
    void SelectXingZuo();//ѡ������
    void SelectNianLing();//ѡ������
    void SelectSex();//ѡ���Ա�
    void OpenConfig();//����Config
    void SaveConfig();//����Config
    void Reset();//��������
    void Ask_Config();//�ж��Ƿ���������
    void Display();
    void Judge(Reply &);//�������ݸ�������
private:
    //char XingZuo[3];//��������
    string Name;//��������
    int JueSe;/*��ɫ����
    1.����ҽ�� 2.���� 3.Ů����
    4.������ 5.�ѹ����� 6.��������*/
    int XingZuo;/*��������
    1.���� 2.��ţ 3.˫��4.��з
    5.ʨ�� 6.��Ů 7.��� 8.��Ы
    9.���� 10.ĦЫ 11.ˮƿ 12.˫��*/
    int NianLing;//���� 1.15~35 2.35~55
    int Sex;//�Ա� 1.�� 2.Ů
    
};
void JieMian::FirstDisplay()
{
    cout<<"********************"<<endl;
    cout<<"    ������ϵͳ"<<endl;
    cout<<"********************"<<endl;
}
void JieMian::JudgeConfig()//�ж��Ƿ���ڴ浵
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
    cout<<"�����������������"<<endl;
    cin>>Name;
}
void JieMian::SelectJueSe()
{
    cout<<"��ѡ���ɫ"<<endl;
    cout<<"1.����ҽ��"<<" ";
    cout<<"2.����"<<" ";
    cout<<"3.Ů����"<<endl;
    cout<<"4.������"<<" ";
    cout<<"5.�ѹ�����"<<" ";
    cout<<"6.��������"<<endl;
    cin>>JueSe;

}
void JieMian::SelectXingZuo()
{
    cout<<"��ѡ������"<<endl;
    cout<<"1.����"<<" ";
    cout<<"2.��ţ"<<" ";
    cout<<"3.˫��"<<" ";
    cout<<"4.��з"<<endl;
    cout<<"5.ʨ��"<<" ";
    cout<<"6.��Ů"<<" ";
    cout<<"7.���"<<" ";
    cout<<"8.��Ы"<<endl;
    cout<<"9.����"<<" ";
    cout<<"10.ĦЫ"<<" ";
    cout<<"11.ˮƿ"<<" ";
    cout<<"12.˫��"<<endl;  
    cin>>XingZuo;
}
void JieMian::SelectNianLing()
{
    cout<<"��ѡ������"<<endl;
    cout<<"1.15~35��"<<" ";
    cout<<"2.35~55��"<<endl;
    cin>>NianLing;
}
void JieMian::SelectSex()
{
    cout<<"��ѡ���Ա�"<<endl;
    cout<<"1.��"<<" ";
    cout<<"2.Ů"<<endl;
    cin>>Sex;
}

void JieMian::OpenConfig()//����Config
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
void JieMian::SaveConfig()//����Config
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
void JieMian::Reset()//��������
{
    inName();
    SelectJueSe();
    SelectXingZuo();
    SelectNianLing();
    SelectSex();
    SaveConfig();
}
void JieMian::Ask_Config()//�ж��Ƿ���ѡ
{
    string Judge;
    cout<<"�Ƿ�������һ�εĴ浵?"<<endl;
    cin>>Judge;
    if(Judge=="��")
        OpenConfig();
    else 
        Reset();
}

void JieMian::Display()
{
    cout<<Name<<" "<<XingZuo<<" "<<JueSe<<" "<<NianLing<<" "<<Sex<<endl;
}


