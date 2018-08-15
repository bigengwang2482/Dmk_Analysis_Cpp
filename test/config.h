#ifndef CONFIG_H
#define CONFIG_H

void list_config( std::vector<std::string> &list, std::string path);
void list_file_name( std::vector<std::string> &list_file, const std::vector<std::string> &config, const std::string &common_name, std::string marker);
bool replace(std::string& str, const std::string& from, const std::string& to); 

#endif
