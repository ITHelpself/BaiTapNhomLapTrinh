#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception {
   public:
   const char * what () const throw () {
      return "C++ Exception";
   }
};
int main() {
   try {
      throw MyException();
   } catch(MyException& e) {
      cout << "MyException caught" << std::endl;
      cout << e.what() << endl;
   } catch(std::exception& e) {
      //Other errors
   }
}