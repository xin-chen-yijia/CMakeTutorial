#include "MathFunctions.h"
#include <cmath>
#include <iostream>

#include "Table.h"


double mysqrt(double inVal)
{
// #if defined(HAVE_LOG) && defined(HAVE_EXP)
//     double ret = std::exp(std::log(inVal) * 0.5);
//     std::cout << "Computing sqrt of " << inVal << " to be " << ret << " using log and exp " << std::endl;
// #else
//     double ret = inVal;
// #endif

    if(inVal <= 0)
    {
        return 0;
    }

    double ret = inVal;
    if(inVal >= 1 && inVal < 10){
        std::cout << "Use the table t help find and initial value " << std::endl;
        ret = sqrtTable[static_cast<int>(inVal)];
    }

    for(int i=0;i<10;++i)
    {
        if(ret <= 0)
        {
            return  0.1;
        }

        double delta = inVal - (ret * ret);
        ret = ret + 0.5 * delta / ret;
        std::cout << "Computing sqrt of " << inVal << " to be " << ret << std::endl;
    }

    return ret;
}