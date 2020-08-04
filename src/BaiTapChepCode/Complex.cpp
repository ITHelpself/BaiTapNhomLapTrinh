#include<iostream>
using namespace std;
class complex {
   int real, img;
   public:
      complex() {
         //default constructor to initialize complex number to 0+0i
         real = 0; img = 0;
      }
      complex(int r, int i) {
         //parameterized constructor to initialize complex number.
         real = r; img = i;
      }
      void set();
      void get();
      void display();
      friend complex add(complex, complex);
      friend complex sub(complex, complex);
};
void complex::set() {
   cout << "Enter Real part: ";
   cin >> real;
   cout << "Enter Imaginary Part: ";
   cin >> img;
}
void complex::get() {
   cout << "The complex number is: "<< real << "+" << img << "i" << endl;
}
void complex::display() {
   if(img < 0)
      if(img == -1)
         cout << "The complex number is: "<< real << "-i" << endl;
      else
         cout << "The complex number is: "<< real << img << "i" << endl;
      else
         if(img == 1)
            cout << "The complex number is: "<< real << " + i"<< endl;
         else
            cout << "The complex number is: "<< real << " + " << img << "i" <<
   endl;
}
complex add(complex c1, complex c2) {
   complex res;
   res.real = c1.real + c2.real;//addition for real part
   res.img = c1.img + c2.img;//addition for imaginary part
   return res;//the result after addition
}
complex sub(complex c1, complex c2) {
   complex res;
   res.real = c1.real - c2.real;//subtraction for real part
   res.img = c1.img - c2.img;//subtraction for imaginary part
   return res;//the result after subtraction
}
main() {
   complex n1(3, 2), n2(4, -3);
   complex result;
   result = add(n1,n2);
   result.display();
   result = sub(n1,n2);
   result.display();
}