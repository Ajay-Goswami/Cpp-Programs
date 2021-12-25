#include <iostream>
#include <string.h>
using namespace std;
class cour
{
private:
    string courseName;

public:
    void setCourseName(string course)
    {
        Name = course;
        Age = course;
    }
    string getName()
    {
        return courseName;
    }
    string getAge()
    {
        return courseName;
    }
    void displayMessage()
    {
        cout << "Your Course Name is ->" << courseName << " and you learning C++ language" << endl;
    }
};

int main()
{
    cour gb;
    string cName;
    cout << "Enter course Name ";
    getline(cin, cName);
    gb.setCourseName(cName);
    string course = gb.getCourseName();
    cout << "Value REturned - " << course << endl;
    gb.displayMessage();
}
