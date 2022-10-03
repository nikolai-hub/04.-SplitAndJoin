#ifndef SPLIT_H
#define SPLIT_H
#include <string>
#include <vector>
#include <sstream>

template<typename T>
T parser(std::string& str) {
	std::istringstream istr(str);
	T temp;
	istr >> temp;
	return temp;
}

template<typename T>
std::vector<T> split(const std::string& str, const char separator) {
	std::istringstream istr(str);
	std::vector<T> items;
	std::string line;
	while (std::getline(istr, str, separator)) {
		items.push_back(parse<T>(line));
	}
	return items;
}



#endif // !SPLIT_H