#include <iostream>
#include <cstdlib>
#include <time.h>
#include "MinHeap.h"

int main() {
    
    // initialize rand function with random seed
    srand(time(NULL));
    
    MinHeap *minHeap = new MinHeap(10);
    
    unsigned value = 0;
    for(unsigned i = 0; i<10; i++){
        value = rand() % 100;
        minHeap->push(value);
    }
    
    minHeap->print();
    
    minHeap->pop();
    minHeap->print();
    return EXIT_SUCCESS;
}
