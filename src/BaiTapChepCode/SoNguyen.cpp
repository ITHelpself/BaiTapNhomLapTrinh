#include <iostream>
int add(int i); 
int main()
{
    int a;
    std::cin >> a; 
    std::cout << add(a) << "\n"; 
    return 0;
}
int add(int i){
    int j = i + 2; 
    return j; 
}
