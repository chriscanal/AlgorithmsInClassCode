// Tree.h
// Problem Set 2b                                 Chris Canal
// Team cansym                                    canal.c@husky.neu.edu
//                                                Sarada Symonds
//                                                symonds.s@husky.neu.edu
//
// Deck header file for homework 2a. Contains
// declarations for the Deck Class
#include <iostream>


using namespace std;

#ifndef Stack_h
#define Stack_h

class Stack
//declaration of the deck class
{
    public:

        //default constructor
        Stack();

        //check if stack is empty, return true if it is empty
        bool empty(char stack) const;

        //return size of the stack
        int size(char stack) const;

        //push an element on to the stack, return true if stack has room
        bool push(char stack, int i);

        //pop an element off the stack, return the element and delete it from array
        int pop(char stack);

        //access the top element without deleting it
        int top(char stack);

        void printArray() const;

        void printStack(char stack) const;

    private:

        int stackA;
        int stackB;
        int *array;

}; //end of deck class

#endif //Deck class

//end of deck header file
