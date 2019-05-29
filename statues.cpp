#include <iostream>
#include <vector>

int main(){
    static const int arr[] = {1, 4, 13};
    std::vector<int> statues(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int largest = -1; 
    int smallest = 1000;
    int amount;
    int fill;
    //std::cout <<statues.size() << std::endl;
    /* find smallest */
    for(int i = 0; i<statues.size(); ++i){
        if(statues[i]>largest){
            largest = statues[i];
        }
    }
    /* find largest */
    for(int i = 0; i<statues.size(); ++i){
        if(statues[i]<smallest){
            smallest = statues[i];
        }
    }
    amount = largest - (smallest + 1);
    fill = (statues.size()-2);
    amount = amount - fill;
    
    std::cout << amount << std::endl;
    return 0;
}