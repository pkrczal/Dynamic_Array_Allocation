//
// Created by Paul Krczal on 23.05.22.
//

#ifndef TUTORIUM_TEST_DYNAMIC_ARRAY_H
#define TUTORIUM_TEST_DYNAMIC_ARRAY_H
#pragma once


class Dynamic_Array {

public:

    explicit Dynamic_Array(int size, int rows, int columns) : size(size), rows(rows), columns(columns) {
        arr = allocateArray(size);
        arr_2d = allocateArray2D(rows, columns);
    }

    static int **allocateArray2D(int rows, int columns) {
        int **return_arr = new int *[rows]();
        for (int i = 0; i < rows; i++) {
            return_arr[i] = new int[columns]();
            for (int t = 0; t < columns; t++) {
                return_arr[i][t] = 0;
            }
        }
        return return_arr;
    }

    static int *allocateArray(int size) {
        int *return_arr = new int[size]();
        for (int i = 0; i < size; i++) { return_arr[i] = 0; }
        return return_arr;
    }

    ~Dynamic_Array() {
        for (int i = 0; i < rows; i++) {
            delete arr_2d[i];
        }
        delete arr_2d;
        delete arr;
    }

    Dynamic_Array(Dynamic_Array &d1) : size(d1.size), rows(d1.rows), columns(d1.columns) {
        arr = d1.arr;
        arr_2d = d1.arr_2d;
    }

    Dynamic_Array() = default;

    void insertValue(int row, int col, int value);

    int getValue(int row, int col);

    void printArray();

private:
    int *arr = nullptr;
    int **arr_2d = nullptr;
    int size;
    int rows;
    int columns;


};


#endif //TUTORIUM_TEST_DYNAMIC_ARRAY_H
