#include <iostream>
#include <vector>

int main(){
    int amt =0;
    int expo=0;
    int num=0;
    int numMin=0;
    int out=0;
    std::cin>>amt;
    for(int t = 0; t < amt; ++t){
        std::cin>>num;
        expo = (num % 10);
        numMin = 10 * (num / 10);
        numMin = numMin / 10;
        int res = 1;
        for(int j = 1; j <= expo; j++) {
            res *= numMin;
        } 
        out += res; 
    }
    std::cout << out << std::endl;
    return out;
}