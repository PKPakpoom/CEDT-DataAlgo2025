void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int first_size = (mSize + 1) / 2;
    int second_size = mSize / 2;

    if (first_size == 0) {
        return;
    }

    iterator mid = begin();
    for (int i = 0; i < first_size - 1; ++i) {
        mid = mid.ptr->next;
    }

    iterator mid_2 = mid.ptr->next;

    list1.end().ptr->prev->next = begin().ptr;
    begin().ptr->prev = list1.end().ptr;
    mid.ptr->next = list1.mHeader;
    list1.mHeader->prev = mid.ptr;
    
    list2.end().ptr->prev->next = mid_2.ptr;
    mid_2.ptr->prev = list2.end().ptr->prev;
    end().ptr->prev->next = list2.mHeader;
    list2.mHeader->prev = end().ptr->prev;
    
    
    list1.mSize += first_size;
    list2.mSize += second_size;
    
    mHeader->prev = mHeader;
    mHeader->next = mHeader;
    mSize = 0;
}