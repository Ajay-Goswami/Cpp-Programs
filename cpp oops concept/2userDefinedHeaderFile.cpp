
/*Q2) Write a program in C++ to showcase the use of header files. The header file should include a variable, a method, and both should be kept inside a namespace. Access this variable and method from the main method.*/

#include<iostream>
// #include<C:\Users\Ajay Goswami\Desktop\program\c++practical\calculator.cpp>
#include"calculator.cpp"

using namespace std;

int main()
{
    cout<<"num1 is "<<endl;
    cin>>calculator::num1;
 
    cout<<"num2 is "<<endl;
    cin>>calculator::num2;  

    cout<<"Sum of num1 + num2= "<<calculator::sumNum()<<endl;  

    cout<<"Subtract of num1 - num2= "<<calculator::subtractNum()<<endl; 

    cout<<"Multiplication of num1 * num2= "<<calculator::multiplyNum()<<endl; 

    cout<<"Division of num1 / num2= "<<calculator::divideNum()<<endl;
  
    return 0;
}
