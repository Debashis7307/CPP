#include<iostream>
using namespace std;

class Student{
public:
  string name;
  int age;
  float marks;
  Student(string name, int age ,float m){  //constructor
    this->name =name;
    this -> age = age;
    marks =m;
  }
};

int main(){
  Student s1("Aarav", 21 , 99.9);
  cout << "Name: " << s1.name << endl;
  cout << "Age: " << s1.age << endl;
  cout << "Marks: " << s1.marks << endl;
  Student* s2= new Student("Vivaan", 22, 88.5);
  cout << "Name: " << s2->name << endl; // same as (*s2).name
  cout << "Age: " << s2->age << endl;
  cout << "Marks: " << s2->marks << endl;
  delete s2;

  return 0;
}