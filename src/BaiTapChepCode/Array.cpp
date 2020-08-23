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
        void pop();// dinh nghia ham pop
        void shift(int element);
        void update(int element, int index);
        void insert(int element, int index);
        void deleteAtIndex(int index);
        void append(int *other);

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
        //su dung mang temp
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
void Array::pop(){
    if(size==0){
        std::cout<<"khong the xoa vi khong co phan tu trong mang!";
    }
    else
    {
        int *temp;
        //viet tiep di em nhe
        temp= new int[size];
        for( int i=0;i<size;i++){
            *(temp+i)=*(elements+i);// *(a+i) = a[i];
        }
        delete[] elements;
        elements = new int[size-1];
        for(int i=0;i<size-1;i++){
            *(elements+i) = *(temp+i);
        }
        size--;
        delete[] temp;
    }
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
    array1.pop();
    array1.printArray();
    array1.pop();
    array1.printArray();
    array1.pop();
    array1.printArray();
    array1.pop();
    array1.printArray();
    return 0;
}
