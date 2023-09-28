#include <iostream>
#include <string>

int main(){
    std::string age;
    // std:: cin >> age;
    //int age;

    // to get the full line we are using this function. This function only accepts string for the second argument
    std::getline(std::cin, age);
    std::clog << "std::clog output: age entered" << std::endl;
    std::cout << "I am Erfan " << "and " << age << " years old" << std::endl;
    return 0;
}

