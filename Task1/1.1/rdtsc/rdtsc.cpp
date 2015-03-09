#include <iostream>
#include <unistd.h>
#include <inttypes.h>

using namespace std;

/***
 source of GetCPUCount function: http://bit.ly/1wSULAj
***/

static inline uint64_t RDTSC()
{
  unsigned int hi = 0, lo = 0;
  __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
  return ((uint64_t)hi << 32) | lo;
}


int main() { 
	double start, end;
	for(unsigned i = 0; i < 3; i++) {
		start = RDTSC();
		sleep(i + 1);
		end = RDTSC();
		cout << "Cycle count: " << end - start << endl;
	}
	return 0;
}