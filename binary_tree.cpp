#include <iostream>
using namespace std;

class BinaryTree{
    private:
         class Node{
            int value; 
            Node* left;
            Node* right;
        public: 
            Node(int value){
                this->value = value;
                left = nullptr;
                right = nullptr;
            };
            
        int getValue(){
        return this->value;
        }
        };
        


    Node* rootNode;


    public:
        BinaryTree(){
        rootNode = nullptr;
        }

        void populate(){
            int value;
            cout << "Enter the root value: ";
            cin >> value;
            rootNode = new Node(value);
            cout << "Root Node address is: " << rootNode->getValue();
        }

};


int main(){
    BinaryTree tree;
     tree.populate();
    return 0;
}


