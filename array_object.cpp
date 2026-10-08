#include <iostream>
using namespace std;

class employee {
    char namea[30];
    float age;

public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void) {
    cout << "Enter name: ";
    cin >> namea;
    cout << "Enter age: ";
    cin >> age;
}

void employee::putdata(void) {
    cout << "Name: " << namea << "\n";
    cout << "Age: " << age << "\n";
}

const int SIZE = 3;

int main() {
    employee manager[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nDetails of manager " << i + 1 << "\n";
        manager[i].getdata();
    }

    cout << "\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nManager " << i + 1 << "\n";
        manager[i].putdata();   
    }

    return 0;
}
