#include <cstdio>

#include "animal/animal.h"

using namespace std;

int main(int argc,char* argv[])
{
	for(int i=0;i<argc;++i)
	{
		printf("%s ",argv[i]);
	}
	printf("\n");

	printf("%s\n",GetAnimalName());
	return 0;
}
