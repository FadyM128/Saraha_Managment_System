#pragma once
#include "user.h"
#include <msclr/gcroot.h>
#include<string>
using namespace msclr;

using namespace System;
using namespace std;

namespace Globals {
	extern user* myGlobalDS;

	//extern gcroot<SqlRepo<UserData^>^> usersRepo;

	//convert .NET String to c++ string
	extern string cliToSTD(String^ cliString);

	//convert c++ string to .NET String
	extern String^ stdToCLI(string stdString);
}