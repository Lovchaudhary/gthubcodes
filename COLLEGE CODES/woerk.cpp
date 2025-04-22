#include <iostream>
using namespace std;
class Students {
    int roll,sem,marks[5],tmark;
    string name,grade;
    float percent;

public:
    void getdata() {
        cout<<"Enter the name of student";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll ";
        cin>>roll;
        cout<<"Enter sem ";
        cin>>sem;
        cout<<"Enter marks of 5 subjects"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }

    }
    void totalmarks() {
        for (int i = 0; i<5;i++) {
            tmark = tmark + marks[i];
            percent = tmark/5.0;
        }
    }
  void Grading() {
        if (percent >= 90) {
            grade = "A";
        }
        else if (percent >= 80) {
            grade = "B";
        }
        else if (percent >= 70) {
            grade = "C";
        }
        else if (percent >= 60) {
            grade = "D";
        }
        else if (percent >= 50) {
            grade = "E";
        }
        else if (percent >=40)
           grade ="grace";
        else {
            grade = "F";
        }
    }
    void display() {
        cout<<"student  :\t"<<name<<"got "<<tmark<< "in sem \t "<<sem<<"and got :  "<<grade<<endl;
    }
};
int main() {
    int n;
    cout<<"Enter how many student in class"<<endl;
    cin>>n;
    Students Lov[n];
    for (int i=0;i<n;i++) {


        Lov[i].getdata();
        Lov[i].totalmarks();
        Lov[i].Grading();
        Lov[i].display();
    }
}