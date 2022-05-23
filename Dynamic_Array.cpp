//
// Created by Paul Krczal on 23.05.22.
//

#include "Dynamic_Array.h"
#include "iostream"

void Dynamic_Array::insertValue(int row, int col, int value) {
    if (row >= 0 && row < rows && col >= 0 && col < columns) {
        arr_2d[row][col] = value;
    }
}

int Dynamic_Array::getValue(int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < columns) {
        return arr_2d[row][col];
    }
    return -1;
}

void Dynamic_Array::printArray() {
    for (int i = 0; i < rows; i++) {
        for (int t = 0; t < columns; t++) {
            std::cout << arr_2d[i][t] << " ";
        }
        std::cout << std::endl;
    }
}

