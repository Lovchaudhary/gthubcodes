#include <iostream>
using namespace std;

class base{
    int value ;
    public:
      void show(int a){
       value =a;
      }
};

class der: public base{
  public:
    void showdisplay(){
      cout<<"the value is : "<<value<<endl;
}
};
int main(){
  der d;
   d.show(3);
   d.showdisplay();
   return 0;
  }