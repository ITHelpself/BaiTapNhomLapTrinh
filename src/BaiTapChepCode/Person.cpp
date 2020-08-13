#include<iostream>  
#include<stdio.h>  
using namespace std;  
class Person
{  
    string id;
    public:  
    // default constructor
    Person() {
        id = "000";
    }  
    // argument constructor
    Person(string id){
        this->id = id;
    }
    // copy constructor
    Person(const Person &t)  
    {  
        cout<<"Copy constructor called "<<endl;  
    }  
    // assignment operator  
    Person& operator = (const Person &t) 
    { 
        cout<<"Assignment operator called "<<endl; 
        return *this; 
    }  
};  
  
// Driver code 
int main()  
{  
    Person person1;
    Person t1, t2;  
    t2 = t1;  
    Person t3 = t1;  
    getchar();  
    return 0;  
} 