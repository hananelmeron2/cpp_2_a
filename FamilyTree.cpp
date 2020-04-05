#include "FamilyTree.hpp"
#include <iostream>
using namespace std;



namespace family
{


Tree &Tree::addFather(string son_name, string father_name)
{
    return *this;
};

Tree &Tree::addMother(string son_name, string mom_name)
{
    return *this;
};

void Tree::display()
{

};

string Tree::relation(string name)
{
    return "";
};

string Tree::find(string name)
{
    return "";
};

void Tree::remove(string name)
{

};

}
