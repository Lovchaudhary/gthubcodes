//
// Created by lov chaudhary on 22/04/25.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string username, password;
    ofstream file("user.txt",ios::app); // Open file in append mode

    cout << "\n=== Register ===\n";
    cout << "Enter username: ";
     cin ws;
    getline(cin,username);
    cout << "Enter password: ";
    cin >> password;

    file << username << " " << password << endl;
    file.close();

    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password, u, p;
    bool found = false;
    ifstream file("user.txt"); // Open file to read user data

    cout << "\n=== Login ===\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    while (file >> u >> p) {
        // Uncomment below line for debugging
        // cout << "[Debug] Checking: " << u << " | " << p << endl;

        if (u == username && p == password) {
            found = true;
            break;
        }
    }

    file.close();

    if (found) {
        cout << "Login successful! Welcome, " << username << "!\n";
    } else {
        cout << "Invalid username or password!\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n========== LOGIN SYSTEM ==========\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
            break;
            case 2:
                loginUser();
            break;
            case 3:
                cout << "Goodbye!\n";
            return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}

