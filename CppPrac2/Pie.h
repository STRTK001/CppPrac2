#ifndef PIE_H
#define PIE_H

#include <String>

/// <summary>
/// Abstract class for Pie
/// </summary>
class Pie
{
public:

	/// <summary>
	/// Returns this pie's description
	/// </summary>
	/// <returns>String</returns>
	virtual std::string description() const = 0;
	/// <summary>
	/// Returns the tastiness of the pie?
	/// </summary>
	/// <returns>String</returns>
	virtual std::string tastiness() const = 0;
};

#endif // PIE_H