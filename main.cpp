#include <iostream>
#include <math.h>
using namespace std;
class Snail {
public:
   virtual  void sound() {
      cout<<"The sound of snail "<<endl;
   }
};
 class Dog:public Snail {
 public:
    void sound() override {
       cout<<"The sound of a Dog barrkkkk"<<endl;
    }
 };
int main() {
   Snail s1;
   Dog d1;

   Snail* ptr;

   ptr = &s1;
   ptr ->sound();
   ptr= &d1;
   ptr->sound();
}