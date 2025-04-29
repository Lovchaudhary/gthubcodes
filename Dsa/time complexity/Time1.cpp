//
// Created by lov chaudhary on 28/04/25.
//
#include <iostream>
using namespace std;
 int main(){
   int n,count;
   cout<<"Enter value of n"<<endl;
   cin>>n;
   for(int i =0;i<n;i++){
     for(int j=0;j<n;j++){
       cout<<"The value is : "<<i<<"\t"<<j<<endl;


       }
     count ++;
       }
     cout<<"The time complexity is : "<<count<<endl;
       return 0;
       }
