
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
        /**
         * Inverts the binary tree.
         * 
         * Example:
         * `Node->Invert();`
         */
        void Invert()
        {
            Node *bucket = left;
            left = right;
            right = bucket;
            delete bucket;
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