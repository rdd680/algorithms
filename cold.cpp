#include <iostream>
#include <vector>

int main(){
    int total;
    int temps;
    int out = 0;
    std::cin >> total;
    std::vector<int> degree;
    for(int i=0; i < total; ++i){
        std::cin >> temps;
        degree.push_back(temps);
    }
    for(int j=0; j < total; ++j){
        if(degree[j] < 0 ){
            out +=1;
        }
    }
    std::cout << out << std::endl;
    return 0;
}