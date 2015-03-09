#include <iostream>
#include <stdio.h>
using namespace std;

// erstes Kind: i * 2 + 1;
// zweite Kind: i * 2 + 2;


class MinHeap {
    private:
    
        unsigned size;
        unsigned elements;
        double *values;
        
        unsigned leftChildIndex(unsigned index);
        unsigned rightChildIndex(unsigned index);
        unsigned parentIndex(unsigned index);
        unsigned getMinChildIndex(unsigned index);
        double top();
        
    public:
    
        MinHeap(unsigned size);
        ~MinHeap();

        void push(double value);
        double pop();
        
        void print();
        
};