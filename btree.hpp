#include <stdlib.h>
class Node
{
    public:
        Node *left;
        Node *right;
        int data;
        Node(Node *_left, Node *_right, int _data)
        {
            data = _data;
            left = _left;
            right = _right;
        }
        void Invert()
        {
            Node *bucket = left;
            left = right;
            right = bucket;
            free(bucket);
            if (left != nullptr)
            {
                left->Invert();
            }
            if (right != nullptr)
            {
                right->Invert();
            }
        }
};