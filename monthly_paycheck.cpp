#include<iostream>
using namespace std;

int main()
{
    float sales, bonus;
    int jr, cr, ty;
    cr = 2023;

    cout<<"Enter the Totals Sales made for the month "<<endl;
    cin>>sales;

    
    {
        if (sales >= 5000 && sales < 10000 )
        {
            bonus = sales*3/100;
            cout<<"Employ recives 3 persent comition which is "<<bonus<<"$"<<endl;
            
        }
        if (sales = 10000)
        {
            bonus = sales*6/100;
            cout<<"Employ recives 6 persent comition which is "<<bonus<<"$"<<endl;
        }
        
    }
    
    cout<<"\nEnter the joining year of an employ"<<endl;
    cin>>jr;
    ty = cr - jr;
    
    {
        if (ty <= 5 && ty >= 1)
        {
            cout<<"This employ is working in this compony for "<<ty<<" years"<<endl;
            cout<<"The bonous is 10$ for this employ"<<endl;
            
        }
        else if (ty > 5)
        {
            cout<<"This employ is working in this compony for "<<ty<<" years"<<endl;
            cout<<"The bonous is 20$ for this employ"<<endl;
        
        }
        else
        {
            cout<<"Please enter the joining year"<<endl;
            main();

        }
    }

    cout<<"\n"<<endl;
    return 0;
}