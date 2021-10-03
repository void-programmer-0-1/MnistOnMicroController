#ifndef __ARGMAX_H__
#define __ARGMAX_H__

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>


std::vector<float> getArray(std::string filename);
void printArray(std::vector<float> array);
float argmax(std::vector<float> array);


#endif // __ARGMAX_H__