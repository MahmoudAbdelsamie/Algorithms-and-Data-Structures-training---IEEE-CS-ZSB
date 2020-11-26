// Problem Link : https://www.hackerrank.com/challenges/tree-huffman-decoding/problem
void decode_huff(node * root, string s)
{
    string result = "";
    node *current = root;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
            current = current->left;
        else
            current = current->right;


        if (current->left == NULL && current->right == NULL)
        {
            result += current->data;
            current = root;
        }
    }

    cout << result << "\n";
}
