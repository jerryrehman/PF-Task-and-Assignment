#include<iostream>
using namespace std;

int main()
{
    float cel, far;
    cout<<"\nEnter the temperature in celsius "<<endl;
    cin>>cel;
    far = 1.8*cel+32;
    cout<<"The temperature in Fahranheit is "<<far<<endl;
    return 0;
}