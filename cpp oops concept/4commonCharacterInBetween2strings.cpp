
//Q4) Write a program to input 2 strings from the user and print the common characters in both the strings.

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s1, s2;

    cout<<"Enter 1st string :";

    cin>>s1;

    cout<<"Enter 2nd string :";

    cin>>s2;

    string b;

    int p=-1;

    cout<<"Same characters are :";

    for (int i = 0; i < s1.length(); i++)
    {
            for (int j = 0; j <s2.length(); j++)
                {
                    if(s1[i]==s2[j])
                    {
                       if(p!=j)
                        {   
                             b=b+s2[j];
                             p=j;
                        }
                    }    
                }    
    }
  
   cout<<b;

    return 0;

}
