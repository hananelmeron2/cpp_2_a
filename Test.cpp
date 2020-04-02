#include "doctest.h"
#include "FamilyTree.hpp"


family::Tree T("a");


TEST_CASE("tree checks")
{
    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));

    T.addFather("david","sholmo"); 
    CHECK(T.relation("sholmo") == string("son"));
    CHECK(T.relation("sholmo") == string("son"));

    T.addMother("bat-sheva","sholmo"); 
    CHECK(T.relation("bat-sheva") == string("mother"));
    CHECK(T.relation("bat-sheva") == string("mother"));

    T.addMother("hava","hevel"); 
    CHECK(T.relation("hava") == string("mother"));
    CHECK(T.relation("hava") == string("mother"));



   



}  



    
