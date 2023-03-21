#pragma once

#include "Settings.h"

class Registrator {
public:
	Registrator(const Settings& settings);
	void Register();
private:
	const Settings& settings_;
};