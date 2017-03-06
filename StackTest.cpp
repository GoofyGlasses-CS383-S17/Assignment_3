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
 
  return 0;
}
