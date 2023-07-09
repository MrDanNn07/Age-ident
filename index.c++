#include <iostream>
using namespace std;

int main() {

    int age = 100;

        cout << "Please Enter your age: ";
        cin >> age;

        if (age >=100)
        {
           cout << "Tanda mona boy!!";
        }
        else if (age >=60)
        {
           cout << "Senior";
        }
        else if (age >=18)
        {
            cout << "Adult";
        }
        else if (age >=10)
        {
            cout << "Bagito kapa boi!";
        }
        else 
        {
            cout << "Minor";
        }
        
    return 0;
}

   