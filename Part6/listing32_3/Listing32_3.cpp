#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

int *pInt = new int[50536];
    
double *pDouble = new double[1000];

float (*pFloat)[10][10];
pFloat = new float[10][10][10];

    //*snip*
    //Do something with the allocated arrays
    //*snip*

    //now clean them up
    delete [] pInt;

    delete [] pDouble;

    delete [] pFloat;

    return 0;
}

