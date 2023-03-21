#include "Settings.h"

Settings::Settings()
{

    using namespace std;

    std::string name, value;

    string line;
    ifstream settings_file(filepath_);
    if (settings_file.is_open())
    {
        while (getline(settings_file, line))
        {
            if (name.empty())
                name = line;
            else {
                value = line;
                settings_[name] = value;
                name = "";
            }
        }
        settings_file.close();
    }
    else {
        // Set default settings:
        settings_["dll"] = "comcntr.dll";
        settings_["regsvr"] = "regsvr32.exe";
        settings_["dll_folder"] = "";
        settings_["platform_folder"] = "C:\\Program Files\\1cv8";
    }

}

const std::string& Settings::operator[](const std::string& name) const
{
    return settings_.at(name);
}

std::string Settings::GetSetting(const std::string& name) const
{
    return settings_.at(name);
}

void Settings::Save()
{
    using namespace std;

    ofstream settings_file(filepath_);
    if (settings_file.is_open())
    {
        for (const auto& [name, value] : settings_) {
            settings_file << name << "\n";
            settings_file << value << "\n";
        }

        settings_file.close();
    }
}

void Settings::Set(const std::string& name, std::string value)
{
    settings_[name] = value;
}
