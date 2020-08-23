#include<iostream>
class Array{
    // property
    private:
        int *elements;
        int size;
    // methods
    public:
        Array();//default constructor
        void printArray();
};
Array::Array(){
    elements = NULL;
    size =  0;
}
void Array::printArray(){
    std::cout<<"Elements: ";
    if(size == 0){
        std::cout<<"no elements";
    } else {
        for(int i=0; i< size; i++){
        // in ra tung element
        std::cout<<*(elements + i);
        }
    }
}
int main(){
    Array array1;// object
    array1.printArray();
    return 0;
}
