#ifndef ____MinHeap__
#define ____MinHeap__

#include <iostream>
#include <stdio.h>


using namespace std;

class MinHeap {
private:
    
    unsigned size;
    unsigned elements;
    double *values;
    
    unsigned leftChildIndex(unsigned index);
    unsigned rightChildIndex(unsigned index);
    unsigned parentIndex(unsigned index);
    double top();
    
public:
    
    MinHeap(unsigned size);
    ~MinHeap();
    
    void push(double value);
    double pop();
    
    void print();
    
};


#endif /* defined(____MinHeap__) */
