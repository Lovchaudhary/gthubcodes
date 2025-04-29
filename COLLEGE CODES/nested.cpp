//
// Created by lov chaudhary on 23/04/25.
//
#include <iostream>
using namespace std;
 class S{
     public:
       class B{
         public:
         void show(){
           cout<<"the class is working"<<endl;
       }
 };
};

class L :public S::B{
  public:

};
int main(){
   L l1;
   l1.show();
  }