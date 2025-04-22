#include <iostream>
using namespace std;

int main() {
    int chance;
    cout << "Enter no of chances you wanna give " << endl;
    cin >> chance;

    try {
        if (chance == 1) {
            throw 101;
        } else if (chance == 2) {
            throw 'x';
        } else {
            throw 789.9;
        }
    } catch (int y) {
        cout << "this is a numerical expcetions  using value " << y << endl;
    }
    catch (char s) {
        cout << "this is a character case exception" << endl;
    }
    catch (...) {
        cout << "the last throw" << endl;
    }
    return 0;
}
