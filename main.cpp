// main.cpp
// Problem Set 4a                                 Chris Canal
// Team ChrisCanal                                canal.c@husky.neu.edu
//
// Main program file for in class coding session 2
#include <limits.h>
#include <list>
#include <fstream>
#include <time.h>
#include <iostream>

#include "Stack.h"


using namespace std;


//------------ Stack Funcitons ------------------

Stack::Stack(){
    stackA = 0;
    stackB = 0;
    array = new int[100];

}

//check if stack is empty, return true if it is empty
bool Stack::empty(char stack) const{
    if (stack == 'A'){
        return stackA;
    } else if (stack == 'B'){
        return stackB;
    } else {
        cout << "\nThat is not a valid stack, please enter 'A' or 'B'";
        return false;
    }
}

//return size of the stack
int Stack::size(char stack) const{
    if (stack == 'A'){
        return stackA/2;
    } else if (stack == 'B'){
        return (stackB-1)/2;
    } else {
        cout << "\nThat is not a valid stack, please enter 'A' or 'B'";
        return 0;
    }
}

//push an element on to the stack, return true if stack has room
bool Stack::push(char stack, int i){
    if (stack == 'A'){
        if (stackA < 50){
            stackA += 1;
            array[(stackA*2)] = i;
            return true;
        } else {
            cout << "\nSorry the stack is currently full, maybe try stack B?";
            return false;
        }
    } else if (stack == 'B'){
        if (stackB < 50){
            stackB += 1;
            array[((stackB*2)+1)] = i;
            return true;
        } else {
            cout << "\nSorry the stack is currently full, maybe try stack B?";
            return false;
        }
    } else {
        cout << "\nThat is not a valid stack, please enter 'A' or 'B'";
        return false;
    }
}

//pop an element off the stack, return the element and delete it from array
int Stack::pop(char stack){
    if (stack == 'A'){
        stackA--;
        return array[((stackA+1)*2)];
    } else if (stack == 'B'){
        stackB--;
        return array[(((stackB+1)*2)+1)];
    } else {
        cout << "\nThat is not a valid stack, please enter 'A' or 'B'";
        return 0;
    }
}

//access the top element without deleting it
int Stack::top(char stack){
    if (stack == 'A'){
        return array[(stackA*2)];
    } else if (stack == 'B'){
        return array[((stackB*2)+1)];
    } else {
        cout << "\nThat is not a valid stack, please enter 'A' or 'B'";
        return 0;
    }
}

void Stack::printStack(char stack) const{
    cout << "\nStack: ";
    if (stack == 'A'){
        for (int i = 1; i <= size(stack); i++ ){
            cout << array[((stackB*2))] << ", ";
        }
        cout << "end of stack\n";
    }
    if (stack == 'B'){
        for (int i = 1; i <= size(stack); i++ ){
            cout << array[((stackB*2)+1)] << ", ";
        }
        cout << "end of stack\n";
    }

}

void Stack::printArray() const{
    cout << "\nArray: ";
    for (int i = 0; i <= 99; i++ ){
        cout << array[i] << ", ";
    }
}



int main()
{

	cout << "Begining clock cycle: " << clock() << "\n";
    clock_t t1,t2, t3, t4;

	t1=clock();

    Stack newStack;
    //push 15 numbers in stackA
    for (int i = 0; i < 50; i++){
        newStack.push('A',i*3);
    }

    //print out entire array
    newStack.printArray();

    //push 50 numbers in stackB
    for (int i = 0; i < 50; i++){
        newStack.push('B',i);
    }

    //print out entire array
    newStack.printArray();

    //print topA
    cout << "\nTop A:" << newStack.top('A');

    //print topB
    cout << "\nTop B:" << newStack.top('B');

    //print sizeA
    cout << "\nSize A:" << newStack.size('A');

    //print sizeB
    cout << "\nSize B:" << newStack.size('B');






	//Code goes here

	t2=clock();
	float diff = ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
	cout << "\nRuntime of program: "<< seconds << " seconds\n";
}
