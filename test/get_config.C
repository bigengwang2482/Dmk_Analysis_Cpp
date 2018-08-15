#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "config.h"

void list_config( std::vector<std::string> &list, std::string path)
{
	std::ifstream in(path, std::ios::in);

	std::string temp_str; 
	
	while ( in >> temp_str)
		list.push_back(temp_str);

	in.close();

}
	
