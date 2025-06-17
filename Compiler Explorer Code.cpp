// Calculator
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int choice;
    cout<<"Fun Calculator app\n";
    cout<<"1. Basic Calculator\n2. Temperature Converter\n3. Weight on planets\n4. Area of circle\nEnter Choice: ";
    cin>> choice;
    if (choice==1){
        float a, b;
        char op;
        cout<< "Enter the first number:";
        cin>> a;
        cout<<"Enter the operator(+ - * /):";
        cin>> op;
        cout<<"Enter second number:";
        cin>> b;
        if (op=='+')
        cout<< "Result" << a+b;
        else if (op=='-')
        cout<< "Result:"<< a-b;
        else if (op=='*')
        cout<<"Result:"<< a*b;
        else if (op=='/' && b!=0)
        cout<< "Result:"<< a/b;
        else
        cout<<"Invalid operation";       
    }
    else if(choice==2){
        float T;char type;
        cout<<"Enter Temprature:";
        cin>> T;
        cout<<"(C),(F) :";
        cin>> type;
        if(type=='C'||type=='c'){
            cout<<"F:"<<(T*9/5)+32<<"F";
            
        }
        else if(type=='F' || type=='f'){
           cout<<"C"<<(T-32)*5/9 <<"C";
            
        }else{
            cout << "Invalid Option";
        }
        
    }
    
}