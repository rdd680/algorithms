#include <iostream>

float BPMcalc(int b, float p){
    int BPM = (60 * b)/p;
    return BPM;
}


int main(){
    int amt =0;
    std:::cin>>amt>>endl;

    for(int i=0; i<amt; ++i){
        std::cin>>int b;
        std::cin>>float p;
        float BPM;
        BPM = BPMcalc(b,p); 
        
    }

     

    return 0;
}