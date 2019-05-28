#include <iostream>
#include <string>
int main(){
//get names
    std::cout << "What's your first name?" << std::endl;
    std::string Fname;
    std::cin >> Fname;
    std::cout << "What's your last name?" << std::endl;
    std::string Lname;
    std::cin >> Lname;
//make greeting
    std::string greeting = "* Hello, " + Fname + " " + Lname + "! *";
    std::string stars(greeting.size(), '*');
//print
    std::cout << stars << std::endl;
    std::cout << greeting << std::endl;
    std::cout << stars << std::endl;

    return 0;
}
