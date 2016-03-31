// main.cpp
// Problem Set 4a                                 Chris Canal
// Team cansym                                    canal.c@husky.neu.edu
//                                                Sarada Symonds
//                                                symonds.s@husky.neu.edu
//
// Main program file for homework 4a.
#include <limits.h>
#include <list>
#include <fstream>
#include <time.h>
#include "d_node.h"

using namespace std;

//C<A
void insertRelationship(node<char> &lesserNode,node<char> &greaterNode)
{
    greaterNode.outNodeVector.push_back(lesserNode);
}

void testRelationship(node<char>& firstLetter,node<char> & secondLetter){
    //travers starting at greaterNode
}

int main()
{

	std::cout << "Clock time: " << clock() << std::endl;
    clock_t t1,t2, t3, t4;

    node <char> Anode;
    node <char> Bnode;
    node <char> Cnode;
    node <char> Dnode;
    node <char> Enode;
    node <char> Fnode;
    node <char> Gnode;

    Anode.nodeValue = 'A';
    Bnode.nodeValue = 'B';
    Cnode.nodeValue = 'C';
    Dnode.nodeValue = 'D';
    Enode.nodeValue = 'E';
    Fnode.nodeValue = 'F';
    Gnode.nodeValue = 'G';
    //C<B
    insertRelationship(Cnode,Bnode);
    //D<B
    insertRelationship(Dnode,Bnode);
    //D<C
    insertRelationship(Dnode,Cnode);
    //E<A
    insertRelationship(Enode,Anode);
    //E<B
    insertRelationship(Enode,Bnode);
    //F<B
    insertRelationship(Fnode,Bnode);
    //F<D
    insertRelationship(Fnode,Dnode);
    //G<A
    insertRelationship(Gnode,Anode);
    //G<B
    insertRelationship(Gnode,Bnode);
    //G<C
    insertRelationship(Gnode,Cnode);
    //G<E
    insertRelationship(Gnode,Enode);
    //G<F
    insertRelationship(Gnode,Fnode);

    while(true){
        char firstLetter;
        char secondLetter
        cout << "Hi what relationship would you like to test?\nformat firstLetter < secondLetter\nPlease enter the first letter:";
        cin >> firstLetter;
        testRelationship(firstLetter, secondLetter);
    }



	t3=clock();

	//Code goes here

	t4=clock();
	float diff = ((float)t4-(float)t3);
    float seconds = diff / CLOCKS_PER_SEC;
    std::cout << "\n\nThe average puzzle took: "<< seconds << " seconds to solve\n";
	std::cout << "\nRuntime of program: "<< seconds << " seconds\n";
}
