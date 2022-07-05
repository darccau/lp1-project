#ifndef __CRIMEDB_QUERY__
#define __CRIMEDB_QUERY__

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

struct crime_scene_structure {
  std::stringstream id;
  std::string raw_data;
};

class Crimedb_query {

private:
  std::string m_database_path;
  std::ofstream m_file_writer;
  std::vector<crime_scene_structure> m_crime_scene_database;

public:
  Crimedb_query();
  Crimedb_query(std::string database_path);
  crime_scene_structure parse_crime_scene(std::string crime_scene_line);
  void add_dna(std::string raw_crime_scene);
  void del_dna(std::string id);
  void update_database(void);
};

#endif 
