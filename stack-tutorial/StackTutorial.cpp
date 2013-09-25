// StackTutorial.cpp: 
// Implements the STL (Standard Template Library) Stack and demonstrates the advantages and limitations of it.
// This may be re-used and re-distributed for educational or commercial use as long as this header is intact
//
// Look for more Spikes on http://rmcqueenie.tumblr.com
//
// Copyright © Rachel McQueenie 2013
//

#include "stdafx.h"
#include <stack>
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	std::stack<std::string> stackExample;
	std::string input;

	stackExample.push("1. This is the first value you put in. It will be the last to come out.");
	stackExample.push("2.");
	stackExample.push("3. This is the last value you put in. It will be the first to come out.");

	for(std::stack<std::string> dump = stackExample; !dump.empty(); dump.pop())
		std::cout << dump.top() << "\n";

	std::cout << "\nInput something to quit the program. This is just here so you can see the output.\n";

	std::cin >> input;

	return 0;
}

