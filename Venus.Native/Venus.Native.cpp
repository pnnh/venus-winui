#include "pch.h"

#include "Venus.Native.h"
#include <iostream>
#include <logger/logger.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

void VenusNative::Class1::Hello(System::String^ message)
{
	std::string str = msclr::interop::marshal_as<std::string>(message);
	std::cout << "Hello from native: " << str << std::endl;
	common::Logger::log(str);
}
