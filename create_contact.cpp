#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string name, mobile, email;

    cout << "Enter your name:\n";
    getline(cin, name);

    cout << "Enter your mobile:\n";
    getline(cin, mobile);

    cout << "Enter your email:\n";
    getline(cin, email);
    
    cout << "\nYour contact info\n\n";
    cout << "Name: " << name << "\n";
    cout << "Phone: " << mobile << "\n";
    cout << "Email: " << email << "\n";
 
    return 0;
}
