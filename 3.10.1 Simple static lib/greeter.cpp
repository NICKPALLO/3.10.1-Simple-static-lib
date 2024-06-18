#include "greeter.h"

namespace Greeter
{
	std::string Greeter::greet(std::string name)
	{
		name = "Приветствую, " + name;
		return name;
	}
}