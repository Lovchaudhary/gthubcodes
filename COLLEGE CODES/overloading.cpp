#include <iostream>
using namespace  std;
 class Lov {
 public:
     int s;
     Lov(){}
     Lov operator+(Lov l1) {
          Lov x;
         x.s = l1.s+ s;
         return x;
     }

     void display() {
         cout<<s<<endl;
     }

 };
int main() {
    Lov l1,l2,l3;
    l1.s =5;
    l2.s = 2;
    l3 = l1+l2;
    l3.display();
}