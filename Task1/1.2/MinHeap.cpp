#include "MinHeap.h"

MinHeap::MinHeap(unsigned newSize){
    elements = 0;
    size = newSize;
    values = new double(size);
}

MinHeap::~MinHeap(){
    delete[] values;
}

double MinHeap::top() {
    return values[0];
}

void MinHeap::push(double value){
    // insert at the end
    values[elements++] = value;
    unsigned index = elements - 1;
    unsigned parent = parentIndex(index);
    
    // upheap
    while(index != 0 && value < values[parent]) {
        std::swap(values[index], values[parent]);
        index = parent;
        parent = parentIndex(index);
    }
}

double MinHeap::pop(){
    // replace first element with the last one
    unsigned index = 0;
    unsigned oldRoot = values[0];
    cout << "pop: " << values[index] << endl;
    values[index] = values[--elements];
    
    unsigned leftChild = leftChildIndex(index);
    unsigned rightChild = rightChildIndex(index);
    
    
    
    unsigned minChildIndex = 0;
    
    do {
        (values[leftChild] < values[rightChild]) ? minChildIndex = leftChild : minChildIndex = rightChild;
        /*
         if(values[leftChild] < values[rightChild]) {
         minChildIndex = leftChild;
         }
         else {
         minChildIndex = rightChild;
         }
         */
        if(values[index] > values[minChildIndex]) {
            std::swap(values[index], values[minChildIndex]);
        }
        
        index = minChildIndex;
        leftChild = leftChildIndex(index);
        rightChild = rightChildIndex(index);
    } while(values[index] > values[minChildIndex] && (rightChild < elements || leftChild < elements));
    return oldRoot;
}

void MinHeap::print() {
    for(unsigned i=0; i < elements; i++) {
        cout << "Value " << i << ": " << values[i] << " " << endl;
    }
}

unsigned MinHeap::leftChildIndex(unsigned index) {
    return 2 * index + 1;
}

unsigned MinHeap::rightChildIndex(unsigned index) {
    return 2 * index + 2;
}

unsigned MinHeap::parentIndex(unsigned index) {
    return (index - 1) / 2;
}