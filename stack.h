#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <assert.h>
#include "link.h"

class Stack
{
 public:
  Stack();
  ~Stack();
  
  void Push(double n);
  double Pop();
  int IsEmpty();
  void Print();
  
 private:
  LinkedList TopPtr;
};

#endif
