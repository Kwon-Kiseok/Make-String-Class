#pragma once
#define MAX_STRING_LENGTH 1025

namespace my
{
	class istream
	{
	public:
		istream& operator>>(char*& str);
		istream& operator>>(char& str);
		istream& operator>>(int& num);
		istream& operator>>(double& e);
	};

	static istream cin;
}

