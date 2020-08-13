#include <iostream>
class Person{
    // properties
    private:
        std::string id;
        std:: string name;
    // methods
    public:
    // default constructor
    Person(){
        this->id = "000";
        this->name = "No Name";
    }
    // arguments constructor
    Person(std::string id, std::string name){
        this->id = id;
        this->name = name;
    }
    // copy Constructor
    Person(const Person& other){
        this->id = other.id + "-person_other";
        this->name = other. name;
    } 
    // assignment operator
    Person&operator=(const Person& other){
        this->id = other.id+"-person_other";
        this->name = other.name;
        return *this;
    }
};
int main(){
    Person person1;// person1 constructor
    Person person2("001","Minh Anh");
    Person person3(person2);
    Person person4 = person2;
    Person person5;
    person5 = person2;
    return 0;
}