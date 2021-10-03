#include <iostream>
#include <stdlib.h>


int main()
{
    int response = system("./mnist.exe img.data");
    std::cout << response << std::endl;

    return 0;
}
