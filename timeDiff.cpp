#include <iostream>
#include <ctime>
#include <chrono>
#include <sys/time.h>

using namespace std;


auto times = chrono::system_clock::now();

auto millis = chrono::duration_cast<chrono::milliseconds>(times.time_since_epoch());

int main(){
//// get log of times

	cout << millis.count() << endl;

	return 0;

}
