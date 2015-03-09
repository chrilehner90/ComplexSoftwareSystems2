#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int main() {
	timespec start, end;
 
	for(unsigned i = 0; i < 3; i++) {
		clock_gettime(CLOCK_REALTIME, &start);
		sleep(i + 1);
		clock_gettime(CLOCK_REALTIME, &end);
		cout << "Time (s): " << difftime(end.tv_sec, start.tv_sec) << endl;
		cout << "Time (ns): " << difftime(end.tv_nsec, start.tv_nsec) << endl;
	}
	return 0;
}