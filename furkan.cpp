#include <iostream>
  

using namespace std;

int main(){
    cout<<"welcome to my basic calculator"<<endl;

    char operation;
    cout<<"enter the operation you want to perform (+, -, *, /): ";
    cin>>operation;
    int num1, num2;

     cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    switch (operation) {
        case '+':
            cout<<"the result is: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"the result is: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"the result is: "<<num1*num2<<endl;
            break;
        case '/':
            if(num2==0){
                cout<<"division by zero is not allowed"<<endl;
            }else{
                cout<<"the result is: "<<num1/num2<<endl;
            }
            break;
        default:
            cout<<"invalid operation"<<endl;
    }
}