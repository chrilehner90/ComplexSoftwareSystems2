#include <cstdlib>
#include "MinHeap.h"
#include <time.h>

int main() {
    
    srand(time(NULL));
    
    MinHeap *minHeap = new MinHeap(2);
    
    unsigned value = 0;
    for(unsigned i = 0; i < 10; i++){
        value = rand() % 100;
        minHeap->push(value);
    }
    
    minHeap->print();
    minHeap->pop();
    minHeap->print();

    return EXIT_SUCCESS;
}
