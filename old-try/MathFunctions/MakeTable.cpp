#include <cstdio>
#include <iostream>

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << "Usage MakeTable <filepath>"<<std::endl;
        return 1;
    }

    FILE* f = fopen(argv[1],"w");
    char cc[] = " \0";
    fprintf(f,"double sqrtTable[] = {0,1,1.414,1.67,2,2.314,2.6,2.7,2.8,3};");
    fflush(f);
    fclose(f);

    return 0;
}