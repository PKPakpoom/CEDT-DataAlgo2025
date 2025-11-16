#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  CP::map_bst<KeyT, MappedT, CompareT> temp;
  size_t len = mSize;
  for (size_t i = 0; i < len; ++i) {
    ValueT v = *begin();
    if (v.first < val) {
      temp.insert(*begin());
    } else {
      result.insert(*begin());
    }
    this->erase((*begin()).first);
  }

  *this = temp;

  return result;
}

#endif
