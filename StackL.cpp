#include "StackL.h"

int Stack::size()
  {
	  return data.size();
  }
  
void Stack::push(int k)
  {
	  data.insert(k,1);
	  
  }
  
void Stack::pop()
  {
	  data.remove(1);
  }
  
int Stack::top()
  {
	 data.get(1);
  }
  
void Stack::clear()
  {
	  data.clear();
  }
