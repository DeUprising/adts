#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 
 L1.insert(10,1);
 L1.insert(22,2);
 L2.insert(9,1);
 L2.insert(13,2);
 cout<<L1.get(2);
 cout<<L2.get(1);
 L1.clear();
 L2.clear();
 

}
