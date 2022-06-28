#ifndef __DNA_QUERY__
#define __DNA_QUERY__

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


struct dna_structure;

class DNA_query {

private:
  std::string m_database_path;
  std::ofstream m_file_writer;
  // std::vector<struct dna_structure> m_dna_database;

public:
  DNA_query();
  DNA_query(std::string database_path);
  void parse_dna(std::string dna_line);
  void update_database();
  // std::string craft_dna();
  void add_dna(void);
  void del_dna(void);
  void proc_dna_str(void);
  void del_dna_str(void);
};

#endif 

