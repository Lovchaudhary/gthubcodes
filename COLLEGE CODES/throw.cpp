#include <iostream>
using namespace std;

int main() {
    int number,d;
    cout << "Enter no of chances you wanna give " << endl;
    cin >> number;
    cout<<"the number you wanna divide it by "<<endl;
    cin>>d;


    try {
        if (d==0) {
         }
         else{
           cout<<"The number "<<number<<"divided by "<<d<<"is "<<(number/d)<<endl;

             }}
             catch(int a){
               cout<<"this accured an error cause you trynna  div by 0"<<endl;
               }

    return 0;
}
