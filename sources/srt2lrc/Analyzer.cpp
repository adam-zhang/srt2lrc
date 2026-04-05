#include "Analyzer.h"
#include "Dialogue.h"
#include <string>
#include <vector>
#include <memory> 
#include <fstream>
#include <iostream>

using namespace std;

unique_ptr<Analyzer> Analyzer::instance_;

Analyzer::Analyzer() {}
Analyzer::~Analyzer() {}

vector<string> getlines(fstream& file)
{
	vector<string> lines;
	string line;
	while(getline(file, line))
		lines.emplace_back(line);
	return lines;
}

vector<unique_ptr<Dialogue>> toDialogues(const vector<string>& lines)
{
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



