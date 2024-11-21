#include<iostream>
using namespace std;

int main()
{
    int roll;
    string Name;
    float fees;
    long contact;
    cout<<"enter your roll no"<<endl;
    cin>>roll;
    cout<<"enter the name"<<endl;
    cin>>Name;
    cout<<"enter the contact"<<endl;
    cin>>contact;
    cout<<"enter the fees"<<endl;
    cin>>fees;
    cout<<"===================================="<<endl;
    cout<<"\t Student's details"<<endl;
    cout<<"===================================="<<endl;
    cout<<"\n Roll      :"<<roll<<endl;
    cout<<"\n Name      :"<<Name<<endl;
    cout<<"\n Contact   :"<<contact<<endl;
    cout<<"\n fees      :"<<fees<<endl;
    return 0;
}