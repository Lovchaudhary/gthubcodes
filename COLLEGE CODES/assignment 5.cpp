//
// Created by lov chaudhary on 24/04/25.
//
#include <iostream>
using namespace std;
 class Person{
     string name;
     int age;
     public:
         void getdata(int a){
             age = a;
           cout<<"Enter his name : " <<endl;
           getline(cin,name);}
          void display(){
            cout<<"your name is  :"<<name<<endl;
            cout<<"Your age is : "<<age<<endl;
            }
            };
   int main(){
     Person lov;
      lov.getdata(18);
      lov.display();
      };
