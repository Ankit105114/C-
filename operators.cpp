#include<iostream>
using namespace std;

int main()
{
    //Arithmetics
    cout<<4+5<<endl;
    cout<<4-5<<endl;
    cout<<4*5<<endl;
    cout<<4/5<<endl;
    cout<<4%5<<endl;


    // Relational 
    int a=4;
    int b = 5;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;

    //Logical Operator//
    
    int w = 10;
    int s = 5;
    if (w > s && w < 20)
    cout << "w is greater than s and less than 20" << endl;
    else if (w > s || w < 20)
    cout << "w is greater than s or less than 20" << endl;
    else
    cout << "w is not greater than s and not less than 20" << endl;
}