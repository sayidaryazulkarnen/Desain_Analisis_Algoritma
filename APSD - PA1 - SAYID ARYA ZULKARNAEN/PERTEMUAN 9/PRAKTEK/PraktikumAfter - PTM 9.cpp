#include <iostream>
using namespace std;

//definisi struktur node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    //Constructor untuk membuat node baru
    TreeNode(int value) : data(value), left(NULL), right(NULL) {} //Mengganti nullptr
};

int main() 
{
TreeNode* tree[50];
    tree[0] = new TreeNode(1);

    tree[1] = new TreeNode(2);
    tree[2] = new TreeNode(3);

    tree[0] -> left = tree[1]; 
    tree[0] -> right = tree[2];

    tree[3] = new TreeNode(4);
    tree[4] = new TreeNode(5);

    tree[1] -> left = tree[3]; 
    tree[1] -> right = tree[4];

    // Menampilkan nilai simpul - simpul pohon
    cout << "Nilai simpul - simpul pohon : " << endl;
    cout << "Akar : " << tree[0] -> data << endl;
    cout << "Anak kiri dari akar : " << tree[0] -> left -> data << endl;
    cout << "Anak kanan dari akar : " << tree[0] -> right  -> data << endl;
    cout << "Anak kiri dari anak kiri dari akar : " << tree[0] -> left -> left -> data << endl;
    cout << "Anak kanan dari anak kiri dari akar : " << tree[0] -> left -> right -> data << endl;

return 0;
}
