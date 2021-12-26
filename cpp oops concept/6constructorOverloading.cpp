
//Q6) Write a program to create a Student class, create its 2 objects and initialize them with help of multiple overloaded constructors.

#include<iostream>
#include<cstring>

using namespace std;

class Student
{
	private:
    		int age;

	public:
 	   Student();
 	   Student(int x);
};

Student::Student()
{
    cout<<"Enter age of student::"<<endl;

    cin>>age;

    cout<<"Age of student is "<<age<<endl;
}

Student::Student(int x)
{
   age=x;

   cout<<"Default age :"<<age;   
}


int main()
{
    Student s1, s2(50);

    return 0;

}