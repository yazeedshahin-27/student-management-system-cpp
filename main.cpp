#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student students[50];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            students[count].input();
            count++;
            cout << "Student added successfully.\n";
        } 
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                students[i].display();
            }
        }

    } while (choice != 3);

    return 0;
}
