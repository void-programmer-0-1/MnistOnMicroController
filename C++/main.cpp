#include "includes/argmax.h"

int main()
{
    system("./mnist.exe img.data");
    
    std::vector<float> array = getArray("deepSea_result_1.out");

    float max = argmax(array);
    std::cout << "Prediction :: " << max << std::endl;


    return 0;
}
