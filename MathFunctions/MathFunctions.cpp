#include "MathFunctions.h"
#include <cmath>
#include <iostream>


double mysqrt(double inVal)
{
#if defined(HAVE_LOG) && defined(HAVE_EXP)
    double ret = std::exp(std::log(inVal) * 0.5);
    std::cout << "Computing sqrt of " << inVal << " to be " << ret << " using log and exp " << std::endl;
#else
    double ret = inVal;
#endif
    return ret;
}