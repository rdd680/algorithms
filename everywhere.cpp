#include <iostream>
#include <string>
#include <vector>

int main(){
    int test = 1;
    int amt = 0;
    int total = 0;
    std::string place= "";
    std::cin>>test;
    for(int j=0; j < test; ++j){
        std::cin>>amt;
        std::vector<std::string> places;
        for(int i=0; i < amt; ++i){
            std::cin>>place; 
            places.push_back(place);
        }
        for(int k=0; k<amt; ++k){
            if(place[k] == place[k+1]){
                total +=1;
            }
        }
        std::cout << total << std::endl;
        
        places.clear();
        total=1;
    }
    return 0;
}