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


void list_file_name( std::vector<std::string> &list_file, const std::vector<std::string> &config, const std::string &common_name, std::string marker)
{
	for (auto i=config.begin(); i != config.end(); ++i )
	{	
		std::string tmp_file_name=common_name;
		replace(tmp_file_name, marker, (*i));	
		list_file.push_back(tmp_file_name);
	}
}	

bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}
