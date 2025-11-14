#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *allocate = new T[mSize];

    for (int i = 0; i < mSize; ++i) {
        *(allocate + i) = mData[i];
    }

    delete mData;
    mData = allocate;
    mCap = mSize;
}

#endif
