#include <iostream>
#include <cmath>
#include <valarray>
using namespace std;

class Calc {
protected:
    int num1, num2;

public:
    string h;

    void getdata(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void finder() {
        char task;
        cout << " +  -  *  / " << endl;
        cin >> task;
        switch (task) {
            case '+':
                cout << "The sum of 2 numbers is  is :" << "\t" << num1 + num2 << endl;
                break;
            case '-':
                cout << " The Subtraction of 2 numbers is : " << "\t" << num1 - num2 << endl;
                break;
            case 'x':
                cout << "The Multiplication of 2 numbers is  : " << "\t" << num1 * num2 << endl;
                break;
            case '/':
                cout << "The division of 2 numbers is : " << "\t" << num1 / num2 << endl;
        }
    }
};

class Scientific : protected Calc {
public:
    void getdata(int a, int b) {
        num1 = a;
        num2 = b;
    }


    void finder() {
        char task;
        cout <<
                "what do you wana do : for power/ exponential press ^, for  log press 'l' and for  sqrt press 's' and for trigonemetric funstiopns press 't'"
                << endl;
        cin >> task;
        switch (task) {
            case '^':
                cout << "the power of number : " << num1 << "To the power of " << num2 << " is : " << pow(num1, num2);
                break;
            case 'l':
                cout << "the log of numer 1 is :" << log(num1) << "\n" << "log of 2nd number is : " << log(num2) <<
                        endl;
                break;
            case 's':
                cout << "the squrt of 1st and 2nd num is " << sqrt(num1) << "\t" << "" << sqrt(num2);
                break;
            case 't':
                char t;
                cout << "Enter which trignometric function you waoul like to use " << endl;
                cin >> t;
                switch (t) {
                    case 's':
                        cout << "" << sin(num1) << "\t" << "" << sin(num2) << endl;
                        break;
                    case 'c':
                        cout << "" << cos(num1) << "\t" << "" << cos(num2) << endl;
                        break;
                    case 't':
                        cout << "" << tan(num1) << "\t" << "" << tan(num2) << endl;
                        break;
                }
        }
    }
};

int main() {
    int a, b;
    cout << "enter value of a and b:" << endl;
    cin >> a >> b;
    Calc c;
    c.getdata(a, b);
    string option;
    cout << "Enter which type of calculator you wanna use : Scientific or plain:";
    cin >> ws;
    getline(cin, option);
    if (option == "plain") {
        c.finder();
    } else {
        Scientific s;
        s.getdata(a, b);
        s.finder();
    }
    return 0;
}
