

#ifndef GAMESDL_MATHEQUATION_H
#define GAMESDL_MATHEQUATION_H

#include <cstring>

class MathEquation {
public:
    MathEquation();
    char key_;
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    virtual ~MathEquation();
    const void getEquation();
};


#endif//GAMESDL_MATHEQUATION_H
