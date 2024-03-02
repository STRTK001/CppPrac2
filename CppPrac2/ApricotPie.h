#ifndef APRICOTPIE_H
#define APRICOTPIE_H

#include "Pie.h"

class ApricotPie : public Pie
{
public:

	virtual std::string description() const override;
	virtual std::string tastiness() const override;
};
#endif // APRICOTPIE_H