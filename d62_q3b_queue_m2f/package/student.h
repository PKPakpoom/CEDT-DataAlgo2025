#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    size_t idx_p = (mFront + pos) % mCap;
    T e = mData[idx_p];

    for (size_t i = idx_p; i != mFront; i = (i + mCap - 1) % mCap) {
        mData[i] = mData[(i + mCap - 1) % mCap];
        // std::cout << "this: " << mData[i] << '\n';
    }

    mData[mFront] = e;
}

#endif
