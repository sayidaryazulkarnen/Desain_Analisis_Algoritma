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
    // Membuat simpul - simpul pohon
       // Membuat simpul - simpul pohon menggunakan array C-style
    TreeNode* nodes[5]; // Array untuk 5 pointer TreeNode

    nodes[0] root->data = new TreeNode(1); // root
    nodes[1] root->left = new TreeNode(2); // anak kiri root
    nodes[2] root->right = new TreeNode(3); // anak kanan root
    nodes[3] root->left->left = new TreeNode(4); // anak kiri dari anak kiri root
    nodes[4] root->left->right = new TreeNode(4); // anak kanan dari anak kiri root
    
    // Menampilkan nilai simpul - simpul pohon
    cout << "Nilai simpul - simpul pohon : " <<endl;
    cout << "Akar : " << root->data << endl;
    cout << "Anak kiri dari akar : " << root->left->data <<endl;
    cout << "Anak kanan dari akar : " << root->right->data <<endl;
    cout << "Anak kiri dari anak kiri dari akar : " << root->left->left->data <<endl;
    cout << "Anak kanan dari anak kiri dari akar : " << root->left->right->data <<endl;
    
    // Membersihkan memory
delete root->left->left;
delete root->left->right;
delete root->left;
delete root->right;
delete root;

return 0;
}
