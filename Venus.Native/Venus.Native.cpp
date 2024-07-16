#include "Venus.Native.h"
#include "logger/logger.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl; 
	native::Logger::log("Hello from logger.");
	return 0;
}
