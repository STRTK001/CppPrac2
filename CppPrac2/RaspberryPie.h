#ifndef RAPSBERRYPIE_H
#define RASPBERRYPIE_H

#include "Pie.h"

class RaspberryPie : public Pie
{
public:

	virtual std::string description()const override;
	virtual std::string tastiness()const override;
};
#endif //RASPBERRYPIE_H