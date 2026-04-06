#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 
#include <fstream>
#include <iostream>
#include <memory>
#include <cctype>
#include <algorithm>

using namespace std;

unique_ptr<Analyzer> Analyzer::instance_;

Analyzer::Analyzer() {}
Analyzer::~Analyzer() {}

bool isdigit(const std::string& line)
{
	return for_each(line.begin(), line.end(), [](char ch)
			{
				if (!isdigit(ch))
					return false;
				return true;
			});
}

vector<string> getlines(fstream& file)
{
	vector<string> lines;
	string line;
	while(getline(file, line))
		lines.emplace_back(line);
	return lines;
}

bool isTimeStamp(const std::string& line)
{
	return line.substr
}

vector<unique_ptr<Dialogue>> toDialogues(const vector<string>& lines)
{
	vector<unique_ptr<Dialogue>> dialogues;
	for_each(lines.begin(), lines.end(), [&dialogues](const string& line)
			{
				auto dialogue = make_unique<Dialogue>();
				if (isdigit(line))
					dialogue->setSerial(stoi(line));
				if (isTimeStamp(line))
					dialogue->
			});
	return vector<unique_ptr<Dialogue>>();
}

vector<unique_ptr<Dialogue>> Analyzer::analyze(const string& fileName)
{
	fstream file(fileName);
	Dialogue dialogue;
	auto lines = getlines(file);


	vector<unique_ptr<Dialogue>> dialogues = toDialogues(lines);
	return dialogues;
}



