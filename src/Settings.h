#pragma once

#include <fstream>
#include <string>
#include <map>

class Settings {
public:
    explicit Settings();

    const std::string& operator[](const std::string&) const;
    void Save();
    void Set(const std::string&, std::string);

private:
    const std::string filepath_ = "settings.txt";
    std::map<std::string, std::string> settings_;
};
