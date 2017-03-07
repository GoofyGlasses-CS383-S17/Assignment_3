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
      TopPtr.DeleteNode(n);
      }
}

void Stack::Push(double n)
{
  TopPtr.AddNode(n);
}

double Stack::Pop()
{
  asser(!IsEmpty());
  
  double n =TopPtr.FirstNode();
  TopPtr.DeleteNode(n);
  return n;
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
  TopPtr.PrintNodes();
}
