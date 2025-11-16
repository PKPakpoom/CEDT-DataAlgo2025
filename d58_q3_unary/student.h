#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  //you may write additional code here
  if (ptr == NULL) return 0;
  
  size_t l = this->process(ptr->left);
  size_t r = this->process(ptr->right);

  if (
    (ptr->left != NULL && ptr->right == NULL) ||
    (ptr->left == NULL && ptr->right != NULL)) {
    return l + r + 1;
  } else {
    return l + r;
  }
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  return this->process(mRoot);
}

#endif
