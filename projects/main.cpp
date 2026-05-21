#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout <<"What is your name: "; std::cin >> name;
    std::cout <<"Hello " << name <<std::endl;
    int san, san2;
    std::cout << "Write the first number: "; std::cin >> san;
    std::cout << "Write the second number: "; std::cin >> san2;
    std::cout << "The sum of your two number is: " << san + san2 << "\n";
    return 0;
}
