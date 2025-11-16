// Your code here
int process(node *n, KeyT &ans, int &max_imb) {
    if (n == NULL) return -1;

    int l = this->process(n->left, ans, max_imb);
    int r = this->process(n->right, ans, max_imb);

    int imb = l - r;
    if (imb < 0) imb = -imb;

    int h = 1 + ((l < r) ? r : l);
    if (imb > max_imb) {
    ans = n->data.first;
    max_imb = imb;
    } else if (imb == max_imb && mLess(n->data.first, ans)) {
        ans = n->data.first;
    }

    return h;
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT ans = mRoot->data.first;
    int max_imb = 0;
    this->process(mRoot, ans, max_imb);

    return ans;
}