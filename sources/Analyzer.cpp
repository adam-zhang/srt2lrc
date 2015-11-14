#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 
#include <fstream>
//#include <boost/lexical_cast.hpp>

using namespace std;

unique_ptr<Analyzer> Analyzer::instance_;

Analyzer::Analyzer() {}
Analyzer::~Analyzer() {}

std::vector<shared_ptr<Dialogue>> Analyzer::analyze(const string& fileName)
{
	vector<shared_ptr<Dialogue>> vec;
	vector<vector<string>> strVec = split(fileName);
	for(auto i = strVec.begin(); i != strVec.end(); ++i)
	{
		shared_ptr<Dialogue> dialogue = analyzeText(*i);
		vec.push_back(dialogue);
	}
	return vec;
}

vector<vector<string>> Analyzer::split(const string& fileName)
{
	vector<string> text = getFileContent(fileName);
	vector<vector<string>> dialogues = mergeDialogue(text);
	return dialogues;
}

vector<vector<string>> Analyzer::mergeDialogue(const vector<string>& lines)
{
	vector<vector<string>> vecVec;
	vector<string> vec;
	for(auto i = lines.begin(); i != lines.end(); ++i)
	{
		if ((*i).empty())
			vec.push_back(*i);
		else
		{
			vecVec.push_back(vec);
			vec.clear();
		}
	}
	return vecVec;
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

shared_ptr<Dialogue> Analyzer::analyzeText(const vector<string>& lines)
{
	shared_ptr<Dialogue> dialogue(new Dialogue);
	dialogue->setSerial(atoll(lines[0].c_str()));
	std::pair<string, string> timePair = getTime(lines[1]);
	dialogue->setBeginningTime(timePair.first);
	dialogue->setEndingTime(timePair.second);
	string text;
	for(auto i = lines.begin(); i != lines.end(); ++i)
	{
		text + (*i);
	}
	dialogue->setContent(text);
	return dialogue;
}

std::pair<string, string> Analyzer::getTime(const string& line)
{
	string first = line.substr(0, line.find("-->"));
	string second = line.substr(line.find("-->") + 3);
	return make_pair(first, second);
}
