#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::jenga(char c, int a)
{
    // Your code here
    size_t idx = mSize - a - 1;
    if (c == 'p') {
        T e = mData[idx];
        for (size_t i = idx; i < mSize - 1; ++i) {
            mData[i] = mData[i + 1];
        }
        mData[mSize - 1] = e;
    } else if (c == 'c') {
        mSize = idx + 1;
    }
}

#endif