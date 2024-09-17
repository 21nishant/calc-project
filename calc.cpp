#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"\n\t ------------------------------------------------------------------\n";
    cout<<"\t                         CALCULATOR             \n";
    cout<<"\t ------------------------------------------------------------------\n";
    cout<<"\t1:Addition\t\t"<<"8:sin"<<endl;
    cout<<"\t2:Subtraction\t\t"<<"9:cos"<<endl;
    cout<<"\t3:Multiplication\t\t"<<"10:tan"<<endl;
    cout<<"\t3:Division\t\t"<<"11:Inverse of sin"<<endl;
    cout<<"\t5:Exponent\t\t"<<"12:Inverse of cos"<<endl;
    cout<<"\t6:Square Root\t\t"<<"13:Inverse of tan"<<endl;
    cout<<"\t7:Log\t\t"<<"14:Exit"<<endl;

    float x,y;
    float PI=3.14159265;
    int choice;

    do{
        cout<<"\n\tEnter the function that you want to perform : ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"\n Enter 1st number : ";
            cin>>x;
            cout<<"\n Enter 2nd number : ";
            cin>>y;
            cout<<"\nResult = "<<x+y<<endl;
            break;
            case 2:
            cout<<"\n Enter 1st number : ";
            cin>>x;
            cout<<"\n Enter 2nd number : ";
            cin>>y;
            cout<<"\nResult = "<<x-y<<endl;
            break;
            case 3:
            cout<<"\n Enter 1st number : ";
            cin>>x;
            cout<<"\n Enter 2nd number : ";
            cin>>y;
            cout<<"\nResult = "<<x*y<<endl;
            break;
            case 4:
            cout<<"\n Enter 1st number : ";
            cin>>x;
            cout<<"\n Enter 2nd number : ";
            cin>>y;
            cout<<"\nResult = "<<x/y<<endl;
            break;
            case 5:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\n Enter the Exponent : ";
            cin>>y;
            cout<<"\nResult = "<<pow(x,y)<<endl;
            break;
            case 6:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<sqrt(x)<<endl;
            break;
            case 7:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<log10(x)<<endl;
            break;
            case 8:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<sin(x)<<endl;
            break;
            case 9:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<cos(x)<<endl;
            break;
            case 10:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<tan(x)<<endl;
            break;
            case 11:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<asin(x)*180.0/PI<<endl;
            break;
            case 12:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<acos(x)*180.0/PI<<endl;
            break;
            case 13:
            cout<<"\n Enter the number : ";
            cin>>x;
            cout<<"\nResult = "<<atan(x)*180.0/PI<<endl;
            break;
            case 14:
            break;
            default:
            cout<<"\nWrong Input\n";
            break;
        }

    }
    while (choice !=14);
    return 0;
}