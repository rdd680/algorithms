#include "Stack.hpp"
#include "iostream"

Stack::Stack(){
  len = 0;
  //head = nullptr;
}
Stack::~Stack(){
    clear();
}

unsigned int Stack::size(){
    return len;
}

void Stack::push(int data){

    Node* n= new Node(data);
    if(!head){
        head = n;
    } else {

    }
}

int Stack::pop(){
    return 0;
}

int Stack::top(){
    return 0;
}

bool Stack::empty(){
    return false;
}

void Stack::clear(){
    Node* to_remove = head;
    while (head) {
        to_remove = head;
        head = head->next;
        delete to_remove;
    }
    len = 0;
}