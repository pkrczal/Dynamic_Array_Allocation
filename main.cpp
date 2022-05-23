#include <iostream>
#include "Dynamic_Array.h"

int main() {
    Dynamic_Array d(1,2,2);
    d.insertValue(0,0,1);
    d.insertValue(1,1,2);
    d.printArray();
    return 0;
}
