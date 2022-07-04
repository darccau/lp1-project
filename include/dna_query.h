#ifndef __DNA_QUERY__
#define __DNA_QUERY__

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>


struct dna_structure {
  std::string id;
  std::string raw_data;
  std::vector<std::string> strs;
};

class DNA_query {

private:
  std::string m_database_path;
  std::ofstream m_file_writer;
  std::vector<dna_structure> m_dna_database;

public:
  DNA_query();
  DNA_query(std::string database_path);
  dna_structure parse_dna(std::string dna_line);
  void show_db(void);
  void update_database(void);
  void add_dna(std::string raw_dna);
  void del_dna(std::string id);
  void proc_dna_str(std::string id);
  void del_dna_str(std::string id);
};

#endif 

