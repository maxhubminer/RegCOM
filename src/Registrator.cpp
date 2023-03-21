#include "Registrator.h"

#include <string>

Registrator::Registrator(const Settings& settings)
	: settings_(settings)
{
}

void Registrator::Register()
{
	std::string complete_command = settings_["regsvr"] + " " + settings_["dll_folder"] + settings_["dll"];
	std::system(complete_command.c_str());
}
