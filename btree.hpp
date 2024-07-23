class Node
{
    public:
        Node *left;
        Node *right;
        Node *bucket;
        int data;
        Node(Node *_left, Node *_right, int _data)
        {
            data = _data;
            left = _left;
            right = _right;
        }
        void Invert()
        {
            bucket = left;
            left = right;
            right = bucket;
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