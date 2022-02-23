
//-------------------------------------------------------------------------------------*
//
//  Purpose: Language primitive types
//  
//  primitive:      int, unsigned int, long/short/double int, float, double, char, bool
//  compound:       array, pointer, reference
//  user defined :  enum, struct, union, class
//
//  constants that represnet the MAXand MIN values for the type's range INT_MIB, INT_MAX
//
//---------------------------------------------------------------------------------------*

#include <string>
#include <iostream>

using namespace std;

// define enums 
#define CONST_VALUE     5

const int typed_some_value = 5;         // 
const auto auto_typed_some_value = 5;   // 


// define types based on primitive types
typedef int     mark;
typedef float   salary;


//------------------------------------------------------------
// define types based on C++ primitive types  
//
// Arguments:
//  None
//
// Returns:
//  None    
//------------------------------------------------------------
void appl_a(void)
{
    mark    m1, m2;
    salary  s1, s2;     // static declarion of variables.
 
    std::cout << "The department is great" << std::endl;
}

