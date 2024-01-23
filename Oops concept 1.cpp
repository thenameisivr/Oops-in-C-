#include <iostream>
#include<cstring>
using namespace std;
class Student{
  public:
  string name;
  char section;
  int age;
  int standard;
  Student(string _name,char _section,int _age,int _standard){
      name = _name;
      section = _section;
      age = _age;
      standard = _standard;
  }

};
int main() {
  Student s1("Madhur",'A',19,12); 
  cout<<s1.standard<<endl;

  return 0;
}