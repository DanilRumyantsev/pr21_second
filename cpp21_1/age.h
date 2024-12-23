#pragma once
#include <string>

namespace age {
	enum AgeHuman {
		Leon_French = 21,
		Nik_Fury = 32,
		Freddy_Mercury = 35,
		Brian_May = 28
	};

	std::string correctAlpha(std::string str);
	int correctCount(int count);
}