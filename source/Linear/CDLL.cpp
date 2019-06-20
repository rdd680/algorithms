#include "LinkedList.hpp"

LinkedList::LinkedList() {
  len = 0;
  head = tail =nullptr;
}

LinkedList::~LinkedList() {
  clear();
}

unsigned int LinkedList::length() {
  Node* p = head;
  while(p!=tail){
    len++;
    p = p->next;
  }
  p = p->next;
  len++;
  return len;
}

void LinkedList::push_front(int d) {
  return;
}

int LinkedList::pop_front() {
  return 0;
}

int LinkedList::index(int data) {
  return 0;
}

void LinkedList::push_back(int d) {
  return;
}

int LinkedList::pop_back() {
  Node *p = tail;
  tail = tail->prev;

  p-> prev = nullptr;
  p->next = nullptr;

  int temp = p->data;
  delete p;

  tail->next = nullptr;
  head->prev = tail; 

  return temp;
}

int LinkedList::at(int idx) {
  return 0;
}

int LinkedList::set(int idx, int d) {
  return 0;
}

void LinkedList::push(int d, int idx) {
  return;
}

int LinkedList::pop(int idx) {
  return 0;
}

void LinkedList::clear() {
  Node* to_remove;
  while (to_remove !=tail) {
    to_remove = head;
    head = head->next;

    delete to_remove;
    --len;

    head->prev = tail;
    tail->next = head;
  }
  head = nullptr;
  tail = nullptr;
  len = 0;
}

void LinkedList::remove(int d) {}

void LinkedList::reverse() {}

void LinkedList::print(std::ostream& oss) {
  Node* temp = head;
  while (temp) {
    oss << temp->data << ", ";
    temp = temp->next;
  }
  oss << std::endl;
  return;
}