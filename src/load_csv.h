#ifndef __LOAD_CSV__
#define __LOAD_CSV__

#include <iostream>
#include <fstream>
#include <sstream>

class Load_csv {

private:
  std::string m_file_path;
  std::string m_file_content;
  std::fstream m_file_reader;

public:
  Load_csv(std::string);
  void check_file_heath(void);
  void load_file(void);
};



#endif
