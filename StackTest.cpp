#include <iostream>
#include "Stack.h"
#include "Link.h"

using namespace std;

int main()
{
  Stack StackObject;
  
  cout << "Pushing integers onto StackObject" <<endl;
  
  for(int i = 0; i < 5; i++)
    {
      StackObject.Push(i);
      cout << i << ' ';
    }
  cout << endl;
  
  cout << "Contents of StackObject" << endl;
   StackObject.Print();          // output the stack contents


   cout << endl << "Popping integers from StackObject" << endl;

   while( !StackObject.IsEmpty() )
      cout << StackObject.Pop() << ' ';

   cout << endl;
   StackObject.Print();          // output the stack contents


   if( StackObject.IsEmpty() )
       cout << "The stack is empty" << endl;
   else
       cout << "The stack is not empty" << endl;
 
  return 0;
}
