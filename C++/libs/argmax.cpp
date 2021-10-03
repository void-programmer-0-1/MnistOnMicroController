
#include "../includes/argmax.h"

std::vector<float> getArray(std::string filename){

    std::string text;
    const char* space = " ";

    std::vector<float> array;

    std::ifstream file(filename);

    std::string number;

    while(getline(file,text)){

        for(auto i : text){
            if(i == ' '){
                array.push_back(std::stof(number));
                number = "";
            }
            else{
                number += i;
            }
        }
    }

    return array;
}


float argmax(std::vector<float> array){
   
    float value,index;
    value = array[0];
    index = 0;

    for(int i=1;i<array.size();i++){
        if(value < array[i]){
            value = array[i];
            index = i;
        }
    }

    return index;

}

void printArray(std::vector<float> array){
    for(int i=0;i<array.size();i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
