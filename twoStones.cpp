#include <iostream>

int main(){
    int stones;
    std::cin >> stones;
    if(stones%2){
        std::cout << "Alice" << std::endl;
    } 
    else {
        std::cout << "Bob" << std::endl;
    }

    return 0;
}