#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 
#include <fstream>

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
	vector<string> text = getFileContent(fileName);
	return vec;
}

vector<string> Analyzer::getFileContent(const string& fileName)
{
	vector<string> vec;
	fstream stream(fileName);
	vector<char> buffer(512);
	while(!stream.eof())
	{
		stream.getline(&buffer[0], 512);
		vec.push_back(&buffer[0]);
	}
	return vec;
}

shared_ptr<Dialogue> Analyzer::analyzeText(const string& text)
{
	shared_ptr<Dialogue> dialogue(new Dialogue);
	return dialogue;
}
