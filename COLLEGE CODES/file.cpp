//
// Created by lov chaudhary on 29/04/25.
//
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream file("lov.txt");
  if(file.is_open()){
    file<<"Hello world"<<endl;
    file.close();}
    else{
      cout<<"Error 404"<<endl;
      }
      return 0;

  }

