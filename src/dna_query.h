#ifndef __DNA_QUERY__
#define __DNA_QUERY

#include <iostream>
#include <fstream>
#include "load_csv.h"

class DNA_query {

private:
  std::string m_file_path;
  std::ofstream m_file_writer;
  Load_csv m_file_loader;


public:
  DNA_query(std::string file_path);
  void add_dna();
  void del_dna();
  void proc_dna_str();
  void del_dna_str();
};

#endif 
