#include<vector>
#include "Product.h"
#include<fstream>
class Cart{// gio hang
    private:
        vector<Product> products;// danh sach mat hang
        const int MAX_COUNT = 100;
    public:
        void addProduct(Product product);
        bool updateProduct(Product product);
        void displayBills();
        void printBills(string fileName);
};
 void Cart::addProduct(Product product){
    cout<<endl<<"-------------Them vao gio hang----------"<<endl;
    bool updated = updateProduct(product);
    if(!updated){
        if(products.size()>=MAX_COUNT){
            cout<<"gio hang da day, khong the them vao!";
        }
        else{
            products.push_back(product);
            cout<<"- ADD: ";
            product.displayBill();
        }
    }  
 }
bool Cart::updateProduct(Product updateProduct){
    bool updated = false;
    int serialNumber = 0;// so thu tu
    for(Product product:products){
         if(product.equalTo(updateProduct)){
             products.erase(products.begin()+serialNumber);
             products.insert(products.begin()+serialNumber,updateProduct);
             cout<<"- UPDATE:"<<endl;
             product.displayBill();
             cout<<"-->INTO:"<<endl;
             updateProduct.displayBill();
             updated = true;
             break;
         }
         serialNumber ++;
     }
    return updated;
 }
  void Cart::displayBills(){
      cout<<endl<<"-------------Danh sach mat hang----------"<<endl;
      for(Product product:products){
          product.displayBill();
      }
  }
void Cart::printBills(string fileName){
    ofstream ofs;
    ofs.open(fileName,ios::app);
    for(Product product:products){
        ofs<<product.toString()<<"\n";
    }
    ofs.close();
}