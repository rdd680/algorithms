#include <iostream>
#include "Stack.hpp"
#include "LinkedList.hpp"

Stack::Stack(){
    int fr = 0;


}
Stack::~Stack(){
    clear();
}

unsigned int Stack::size(){
    return fr;
}

void Stack::push(int data){
    if(fr+1 > max) throw "overflow";
    ++fr;
    stack[fr] = &data;
}

int Stack::pop(){
    if (empty()) throw "Error";
    --fr;
    return *stack[fr+1];
}

int Stack::top(){
return 0;
}

bool Stack::empty(){
    if (fr < 0) return true;
    return false;
}


void Stack::clear(){
    delete[] *stack;
}

