#include <iostream>
using namespace std;




namespace family
{

//create the tree node

struct Tree
{
	Tree *left;
	Tree *right;
	int data;
};

	class FamilyTree       
{
        
           Tree *Troot;
           public:
           FamilyTree()
	   {
           Troot=NULL;
	   }
     
     void addFather(string name,string text);
     void addMother(string name, string text);
     string relation(string name);
     void find(string name);
     void display();
     void remove();







};
}