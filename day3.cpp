#include <iostream>

void arr(int*, int);

int main(){
    int varArr[9];
    varArr = new int[9];
    for(int i = 0; i<9; ++i){
        varArr[i] = i;
    }
    for(int i = 0; i<9; ++i){
        std::cout << varArr[i]<<", ";
        std::cout << std::endl;
    }

    arr(varArr, int);
    for(int i = 0; i<9; ++i){
        std::cout << varArr[i]<<", ";
        std::cout << std::endl;
    }

    delete varArr;
    return 0;
}

void arr(int *arr, int n){
    for(int i = 0; i < i; ++i){
        varArr[i] += 1;
    }
    return;
}
