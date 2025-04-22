#include<iostream>
using namespace std;

class Shop
{
    int id;
    float price;
public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout<<"Code of this item is "<< id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main() {
    int size,s;
    float l;
    cout<<"Enter number of Shops :"<<endl;
    cin>>size;
     Shop *ptr = new Shop[size];
    for (int i=0;i<size;i++) {
        cout<<"Enter id and Price of item :"<<i+1<<endl;
        cin>>s>>l;
        ptr->setData(s,l);
        ptr++;
    }
}