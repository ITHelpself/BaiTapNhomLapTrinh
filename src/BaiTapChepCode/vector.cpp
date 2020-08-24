#include <iostream>
#include <vector>
#include<stack>
class Numbers{
    private:
      std::vector<int> elements;  
    public:
        void display();
        void push(int element);
        void pop();// dinh nghia ham pop
};
void Numbers::display(){
    std::cout<<std::endl<<"Elements: ";
    if(elements.empty()){
        std::cout<<"no elements"<<std::endl;
    } else {
        for(int element:elements){
        // in ra tung element
        std::cout<<element<<"  ";
        }
    }
}
void Numbers::push(int element){
    elements.push_back(element);
}
void Numbers::pop(){
     if(elements.empty()){
        std::cout<<"dont pop because of: array was empty!";
    }
    else
    {
        elements.pop_back();
    }
}
int main(){
    Numbers numbers1;// object
    numbers1.display();
    numbers1.push(4);
    numbers1.display();
    numbers1.push(5);
    numbers1.display();
    numbers1.push(6);
    numbers1.display();
    numbers1.push(7);
    numbers1.display();
    numbers1.pop();
    numbers1.display();
    numbers1.pop();
    numbers1.display();
    numbers1.pop();
    numbers1.display();
    numbers1.pop();
    numbers1.display();
    return 0;
}