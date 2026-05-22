#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout <<"What is your name: "; cin >> name;
    cout <<"Hello " << name << endl;
    int san, san2;
    cout << "Write the first number: "; cin >> san;
    cout << "Write the second number: "; cin >> san2;
    cout << "The sum of your two number is: " << san + san2 << "\n";
    return 0;
}
