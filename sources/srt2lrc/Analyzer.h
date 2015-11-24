#ifndef __ANALYZER__H
#define __ANALYZER__H

#include <memory>
#include <vector>
#include <string>

class Dialogue;

class Analyzer
{
	Analyzer();
public:
	~Analyzer();
private:
	static std::unique_ptr<Analyzer> instance_;
public:
	static Analyzer& instance()
	{
		if (!instance_)
			instance_ = std::unique_ptr<Analyzer>(new Analyzer);
		return *instance_;
	}
public:
	void analyze(const std::string& fileName);
	void analyzeLine(const std::string& line, const std::string& fileName);
};
#endif//__ANALYZER__H
