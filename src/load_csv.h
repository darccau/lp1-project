#ifndef __LOAD_CSV__
#define __LOAD_CSV__

#include <iostream>
#include <fstream>
#include <sstream>

class Load_csv {

private:
  std::string m_file_path;
  std::fstream m_file_reader;

public:
  std::stringstream m_file_content;
  Load_csv();
  void set_file_path(std::string file_path);
  void check_file_heath(void);
  void load(void);
  // std::stringstream get_file_content();
};

#endif
