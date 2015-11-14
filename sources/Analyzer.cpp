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
	return vec;
}
