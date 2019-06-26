#pragma once
#include "LinkedList.hpp"

/** Stack
 * A container class that stores data using a LIFO
 * (last in, first out) scheme.
 */
class Stack {
 private:
  /* static const int max= 10; //define 10 elements in the Stack
  int stack[max]; //stack array of integers
  int fr;
  */

 public:
  Stack();
  ~Stack();
  /** size()
   * Returns the size of the stack.
   */
  unsigned int size();

  /** push(int data)
   * Pushes a node containing the given data to the top of the stack.
   */
  void push(int data);

  /** pop()
   * Removes and returns the data at the top of the stack.
   */
  int pop();

  /** top()
   * Returns the data at the top of the stack without changing the stack.
   */
  int top();

  /** empty()
   * Returns whether or not the stack is empty.
   */
  bool empty();

  /** clear()
   * Clears the entire stack.
   */
  void clear();
};