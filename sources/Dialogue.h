#ifndef __DIALOGUE__H
#define __DIALOGUE__H

#include <string>

class Dialogue
{
public:
	Dialogue();
	~Dialogue();
private:
	long long serial_;
	std::string beginningTime_;
	std::string endingTime_;
	std::string content_;

public:
	long long serial()
	{
		return serial_;
	}

	void setSerial(long long serial)
	{
		serial_ = serial;
	}

	const std::string& beginningTime()const
	{
		return beginningTime_;
	}

	void setBeginningTime(const std::string& beginningTime)
	{
		beginningTime_ = beginningTime;
	}

	const std::string& endingTime()const
	{
		return endingTime_;
	}

	void setEndingTime(const std::string& endingTime)
	{
		endingTime_ = endingTime;
	}

	const std::string& content()const
	{
		return content_;
	}

	void setContent(const std::string& content)
	{
		content_ = content;
	}
};
#endif//__DIALOGUE__H
