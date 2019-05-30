#include <iostream>
#include <stdio.h>

int power(int base, int p) {
    if (p == 0) return 1;
    int ans = base;
    while (p > 1) {
        ans *= base;
        --p;
    }
    return ans;
}

int main(){
int iter=0;
std::cin>>iter;
int pow = power(2, iter)+1;
int ans = power(pow, 2);

std::cout<<ans<<std::endl;
return ans;
}
    
