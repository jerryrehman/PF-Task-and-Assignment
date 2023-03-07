#include<iostream>
using namespace std;

int main()
{
    int choice;
    int feet, inches;
    float value, in;
    float Total_inches;

    cout<<"\n1) feet without decimal"<<endl;
    cout<<"2) feet with decimal"<<endl;
    cin>>choice;

    switch (choice)
        {
        case 1:

            cout<<"Enter the length in feet"<<endl;
            cin>>feet;
            Total_inches = feet * 12;
            cout<<"Total inches are "<<Total_inches<<endl;  
            break;
        
        case 2:
    
            cout<<"Enter the length in feet.inches"<<endl;
            cin>>value; // for example: value = 34.5
            feet = value; // because feet is an integer then feet = 34
            in = value - feet; // in = 0.5
            if (in >= 0.1 && in <= 0.9) // true
                {
                    inches = in * 10; // inches = 5
                }
            if (in >=0.10 && in <= 0.12) // false
                {
                    inches = in * 100;
                }
            if (in == 0)
            {
                inches = 0;
            }
            
        
            Total_inches = feet*12 + inches; // 34 * 12 + 5 = 413
            cout<<"Total inches are "<<Total_inches<<endl;  
            break;
        
        default:
            cout<<"Please Enter the option mention above"<<endl;
            main();
            break;
        }
    
    float centi = Total_inches * 2.54;
    cout<<"Total centimeters are "<<centi<<endl;

    return 0;
}