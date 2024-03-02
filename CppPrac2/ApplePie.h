#ifndef APPLEPIE_H
#define APPLEPIE_H

#include "Pie.h"

class ApplePie : public Pie
{
public:

	virtual std::string description()const override;
	virtual std::string tastiness()const override;
};

#endif // APPLEPIE_H