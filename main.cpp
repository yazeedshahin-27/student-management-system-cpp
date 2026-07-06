#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.id = 1;
    s.name = "Test Student";
    s.display();
    return 0;
}
