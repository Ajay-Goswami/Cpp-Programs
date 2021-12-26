
//Q10) Write a program to demonstrate how friend functions can be used to access private data member of a class.

#include <iostream>

using namespace std;

class sample
{
	private:
   	 	 float a;
   		 float b;

	public:
    		void setvalue()
    		{
        		      a=25;
        		      b=40;
    		}
 
   friend float mean(sample s)
    {
        cout<<"1st value = "<<s.a<<endl<<endl;

        cout<<"2nd value = "<<s.b<<endl<<endl;

        return (float(s.a +s.b)/2.0);
    }

};

int main()
{
    sample X;

    X.setvalue();

    float m= mean(X);

    cout<<"Mean value = "<<m<<endl;
   
 return 0;

}
