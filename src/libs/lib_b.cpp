
//---------------------------------------------------------------------------------------
//
//  Purpose: define C style / C++ enums and use them
//  
//  C++ enums :
//  1. support scoped enums, thus, same enum value can be used more than once 
//      in different scopes (and accordingly referred while using tye scope designation)
//  2. support defining the type of the enum for better memorty consumption
//  
// The above is not supported by C style enums
//---------------------------------------------------------------------------------------

#include <iostream>

// C style
enum DAY { MON = 2, YUE, WED, THU, FRI, SAT, SUN };             // enumerated from 0 upwards

// C++ Style
enum class DPRTMNT : unsigned char { CS = 4, IT, SEC, MNGMNT };   // enumerated from 4 upwards, sets the type to be used

enum class Color : unsigned char { GREEN, YELLOW, RED };
enum class TrafficLight : unsigned short int { GREEN, YELLOW, RED };


//------------------------------------------------------------
// Define enums and use them 
//
// Arguments:
//  None
//
// Returns:
//  None    
//------------------------------------------------------------
void lib_b(void)
{
    DAY     day;
    DPRTMNT department;

    day = MON;
    department = DPRTMNT::MNGMNT;

    Color color = Color::GREEN;
    TrafficLight trfc_light = TrafficLight::RED;

    int intColor = static_cast<int>(Color::GREEN);
    int intTrfcLight = static_cast<int>(TrafficLight::GREEN);

    std::cout << "The day is: " << day << std::endl;
    std::cout << "The department is: " << (int)department << std::endl;
}
