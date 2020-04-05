#include <iostream>
#include <string>
using namespace std;

namespace family
{
    
    // struct to create family tree node
    struct TreeNode
    {
      public:
	    string person_name;
      TreeNode* parent;
      TreeNode* left;
      TreeNode* right;
    };
   
    class Tree
    {
        TreeNode* root; 
        string input;

        public:

        Tree(string person_name)
        {
            input = person_name;
            root = new TreeNode;
            root->person_name = input;
            root->left = NULL;
            root->right = NULL;
        }

        //tree function
        Tree &addFather(string son_name, string father_name); // add father function
        Tree &addMother(string son_name, string mom_name);    // add mother function
        string relation(string name);                        // return the relation of the input family member to the root(yourself)
        string find(string name);                            // get realation and return the family member that suit
        void remove(string name);                            //remove the given name and all his relation 
        void display();                                      // dispaly the family tree

    };

};
