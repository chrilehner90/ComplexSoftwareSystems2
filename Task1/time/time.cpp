#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int main() {
	time_t start, end;
 
	for(unsigned i = 0; i < 3; i++) {
		time(&start);
		sleep(i + 1);
		cout << "Time: " << difftime(time(&end), start) << endl;
	}
	return 0;
}