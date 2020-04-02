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
      TreeNode(string person_name);

    };
   
    class Tree
    {

        TreeNode* root; 

        public:

        Tree(string person_name);

        //tree function
        Tree addFather(string son_name, string father_name); // add father function
        Tree addMother(string son_name, string mom_name);    // add mother function
        string relation(string name);                        // return the relation of the input family member to the root(yourself)
        string find(string name);                            // get realation and return the family member that suit
        void remove(string name);                            //remove the given name and all his relation 
        void display();                                      // dispaly the family tree

    };
  

	

}