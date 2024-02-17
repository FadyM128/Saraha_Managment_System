
#include "global.h"
#include <msclr/gcroot.h>

using namespace msclr;


namespace Globals {
	user* myGlobalDS;
	string cliToSTD(String^ cliString) {
		char cStr[450] = { 0 };
		if (cliString->Length < sizeof(cStr))
		sprintf(cStr,"%s", cliString);
		string stdString(cStr);
		return stdString;
	}

	String^ stdToCLI(string stdString) {
		return gcnew String(stdString.c_str());
	}
}