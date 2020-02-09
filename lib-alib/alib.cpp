#include "alib.hpp"  
#include <iostream>  
using namespace std; 
namespace alib
{
void hello() 
{ 
    cout<<"Hello World from the library\n"; 
} 

int add(int n1, int n2) 
{ 
    return n1+n2; 
} 
}