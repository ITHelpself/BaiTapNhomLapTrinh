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
        void push(int element);
};
Array::Array(){
    elements = NULL;
    size =  0;
}
void Array::printArray(){
    std::cout<<std::endl<<"Elements: ";
    if(size == 0){
        std::cout<<"no elements"<<std::endl;
    } else {
        for(int i=0; i< size; i++){
        // in ra tung element
        std::cout<<*(elements + i)<<"  ";
        }
    }
}
void Array::push(int element){
    if(size == 0){// hoac elements = NULL
        elements = new int;
        elements[0] = element;
    }
    else{
        int* temp;
        temp = new int[size];
        // copy tu elements sang temp
        for(int i =0;i<size;i++){
           *(temp+i) = *(elements + i); 
        }
        // reset gia tri cua elements
        delete[] elements;
        elements = new int[size+1];
        // copy tu temp sang elements
        for(int i=0;i<size;i++){
            elements[i] = temp[i];
        }
        // them  1 phan tu
        elements[size] = element;
    }
    size++;
}
int main(){
    Array array1;// object
    array1.printArray();
    array1.push(4);
    array1.printArray();
    array1.push(5);
    array1.printArray();
     array1.push(6);
    array1.printArray();
     array1.push(7);
    array1.printArray();
    return 0;
}
