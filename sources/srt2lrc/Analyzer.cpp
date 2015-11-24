#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 
#include <fstream>
#include <iostream>
#include "string_algo.hpp"
//#include <boost/lexical_cast.hpp>

using namespace std;

unique_ptr<Analyzer> Analyzer::instance_;

Analyzer::Analyzer() {}
Analyzer::~Analyzer() {}

void Analyzer::analyze(const string& fileName)
{
	fstream file(fileName);
	Dialogue dialogue;
	while(!file.eof())
	{

	}
}

void Analyzer::analyzeLine(const string& line, const string& fileName)
{
}


