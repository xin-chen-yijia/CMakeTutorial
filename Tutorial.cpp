
#include <iostream>
#include <string>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc,char* argv[])
{
    if(argc < 2){
        //report version
        std::cout<< argv[0] << "Version " << Tutorial_VERSION_MAJOR << "."
                            << Tutorial_VERSION_MINOR << std::endl;

        std::cout << "Usage: " << argv[0] << " number" << std::endl;

        return 0;
    }

    double inVal = std::stoi(argv[1]);
#ifdef USE_MYMATH
    const double val = mysqrt(inVal);
#else
    const double val = sqrt(inVal);
#endif

    std::cout <<inVal << " is " << val <<std::endl;

    return 0;
}