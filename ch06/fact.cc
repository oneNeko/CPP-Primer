#include "Chapter6.h"
#include <iostream>

int fact(int i){
    if(i == 1 || i == 0 ){
        return 1;
    }
    return i*fact(i-1);
}