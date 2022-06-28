#ifndef __LOAD_DATABASE__
#define __LOAD_DATABASE__

#include <iostream>
#include <fstream>
#include <sstream>


class Load_database {

private:
  std::string m_database_path;
  std::fstream m_file_reader;
  void load(void);
  void check_file_heath(void);

public:
  std::stringstream m_raw_data;

  Load_database();
  Load_database(std::string database_path);
};

#endif
