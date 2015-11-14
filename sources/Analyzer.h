#ifndef __ANALYZER__H
#define __ANALYZER__H

#include <memory>
#include <vector>

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
			instance_ = std::auto_ptr<Analyzer>(new Analyzer);
		return *instance_;
	}
public:
	std::vector<std::shared_ptr<Dialogue>> 
		analyze(const std::string& fileName);
};
#endif//__ANALYZER__H
