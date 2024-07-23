#include <iostream>
#include "btree.hpp"
int main()
{
    Node *child1 = new Node(nullptr, nullptr, 3);
    Node *child2 = new Node(nullptr, nullptr, 6);
    Node *root = new Node(child1, child2, 9);
    root->Invert();
    std::cout << root->right->data;
}