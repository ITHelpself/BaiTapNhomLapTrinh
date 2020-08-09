// C++ program to demonstrate working of regex_match() 
#include <iostream> 
#include <regex> 
  
using namespace std; 
int main() 
{ 
    string a = "Geeks-For-Geeks"; 
  
    // Here b is an object of regex (regular expression) 
    regex b("[-]"); // Geeks followed by any character 
    string result;
    regex_replace(back_inserter(result), a.begin(), a.end(), b,  " ");
    cout<<result;
    return 0; 
} 