#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <string.h>

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    size_t final_size = mSize + (b - a + 1);
    size_t idx_a = mSize - a;
    size_t idx_b = mSize - b - 1;

    T *aloc = new T[final_size]();
    mCap = final_size;

    size_t idx = 0;
    for (size_t i = 0; i < idx_b; ++i) {
        aloc[idx++] = mData[i];
    }

    for (size_t i = idx_b; i < idx_a; ++i) {
        aloc[idx++] = mData[i];
        aloc[idx++] = mData[i];        
    }

    for (size_t i = idx_a; i < mSize; ++i) {
        aloc[idx++] = mData[i];
    }
    
    delete[] mData;
    mData = aloc;
    mSize = final_size;
}

#endif