
#include <iostream>
#include <string>
#include "TutorialConfig.h"

#include "MathFunctions.h"

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
    const double val = mathfunctions::sqrt(inVal);

    std::cout <<inVal << " is " << val <<std::endl;

    return 0;
}