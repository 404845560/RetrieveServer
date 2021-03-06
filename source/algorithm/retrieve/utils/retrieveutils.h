#ifndef RETRIEVEUTILS_H
#define RETRIEVEUTILS_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "../ASIFT/extract_feature.h"

using namespace std;

typedef struct _InputInterface{
    string imgurl;
    string saveurl;
}InputInterface;


void* retrieveInterface(void* args);

#endif // RETRIEVEUTILS_H
