#include <iostream>
using namespace std;
#define MAX 10
class Student
{
    private:
        string  name;
        int   rollNo;
        int   total;
        float perc;
    public:
        //member function to get Student's details
        void getDetails(void);
        //member function to print Student's details
        void putDetails(void);
};
//member function definition, outside of the class
void Student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
//member function definition, outside of the class
void Student::putDetails(void){
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
int main()
{
    Student students[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        students[loop].getDetails();
    } 
    for(loop=0;loop< n; loop++){
        cout <<endl<< "Details of student " << (loop+1) << ":\n";
        students[loop].putDetails();
    }    
    return 0;
}