//
// Created by lov chaudhary on 29/04/25.
//
#include <iostream>
using namespace std;

int main(){
  int index;
  int arr[6];
  cout<<"Enter what index you wanna find level of array"<<endl;
  cin>>index;

  for(int i=0;i<6;i++){
    cout<<"Enter value of array ["<<i<<"]"<<endl;
    cin>>arr[i];
    }
       try{
        if( index <0 || index >=6){
        throw 1;
       }
        else{
         cout<<"the value is "<<arr[index];
         }
       }
       catch(int a){
         cout<<"Out of bound array exception"<<endl;
         }
         return 0;
  }
