#include <iostream>
#include <vector>
#include "Dialogue.h"
#include "Analyzer.h"

using namespace std;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: srt2lrc filename" << std::endl;
		return 1;
	}
	
	std::vector<shared_ptr<Dialogue>> dialogues = Analyzer::instance().analyze(argv[1]);
}
