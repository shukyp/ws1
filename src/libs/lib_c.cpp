
#include <iostream>

/*
    Operatorts
    --------------
    Arithmatic: +, -, *, /, %       [compound:   +=, -=, *=, /=, %=]
    Relational: <, <=, >, >=, ==, !=
    Logical:    &&, ||, !
    Bitwise:    &, |, ~(negate), ^(xor), <<(shift), >>(shift)  [compound: &=, |=, <<=, >>=] 
    Incremenet|Decremenet: ++, --
    Assignment: =

*/

void lib_c(void)
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

