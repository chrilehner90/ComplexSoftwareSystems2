#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int main() { 
	time_t t;
	for(unsigned i = 0; i < 3; i++) {
		sleep(i + 1);
		t = clock();
		cout << "Ticks: " << t << "; seconds: " << t / CLOCKS_PER_SEC << endl;
	}
	return 0;
}