#include <iostream>
#include <assert.h>
#include "stack.h"


//Andrew Butler
//stack.cpp



Stack::Stack()
{}

Stack::~Stack()
{
  while(!IsEmpty())
  {
      double n = TopPtr.FirstNode();
      TopPtr.RemoveNode();
      }
}

void Stack::Push(double n)
{
  TopPtr.AddNode(n);
}

double Stack::Pop()
{
  TopPtr.RemoveNode();
}

int Stack::IsEmpty()
{
  int n = TopPtr.Size();
  if(n == 0)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

void Stack::Print()
{
  TopPtr.PrintList();
}
