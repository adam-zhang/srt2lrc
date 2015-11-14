#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 

using namespace std;

unique_ptr<Analyzer> Analyzer::instance_;

Analyzer::Analyzer() {}
Analyzer::~Analyzer() {}

std::vector<shared_ptr<Dialogue>> Analyzer::analyze(const string& fileName)
{
	vector<shared_ptr<Dialogue>> vec;
	vector<string> strVec = split(fileName);
	for(auto i = strVec.begin(); i != strVec.end(); ++i)
	{
		shared_ptr<Dialogue> dialogue = analyzeText(*i);
		vec.push_back(dialogue);
	}
	return vec;
}

vector<string> Analyzer::split(const string& fileName)
{
	vector<string> vec;
	return vec;
}

shared_ptr<Dialogue> Analyzer::analyzeText(const string& text)
{
	shared_ptr<Dialogue> dialogue(new Dialogue);
	return dialogue;
}
