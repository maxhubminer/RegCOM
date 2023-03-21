#include "Registrator.h"

#include <string>
#include <iostream>

Registrator::Registrator(const Settings& settings)
	: settings_(settings)
{
}

void Registrator::Register()
{	
	/*std::string complete_command = "runas /user:<admin-user> \"" + settings_["regsvr"] + " \""
									+ settings_["platform_folder"] + "\\" + settings_["dll_folder"]
									+ "\\bin\\" + settings_["dll"] + "\"";*/
	std::string complete_command = settings_["regsvr"] + " \""
		+ settings_["platform_folder"] + "\\" + settings_["dll_folder"]
		+ "\\bin\\" + settings_["dll"] + "\"";
	std::cout << complete_command << std::endl;
	std::system(complete_command.c_str());
}
