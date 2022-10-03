#ifndef JOIN_H
#define JOIN_H

#include <string>
#include <vector>
#include <sstream>

template<typename T>
std::string& join(const std::vector<T>& vec, const std::string& str) {
	std::ostringstream ostr;
	std::string item;
	for (size_t i = 0; i < vec.size(); i++)
	{
		ostr << vec[i];
		if (i<vec.size()-1)
		{
			ostr << str;

		}
		

	}
	return ostr.str();
}


#endif // !JOIN_H
