#include "../include/crimedb_query.h"
#include "../include/load_database.h"


Crimedb_query::Crimedb_query()
{/* */}

Crimedb_query::Crimedb_query(std::string database_path) {
  m_database_path = database_path;
  Load_database loader(m_database_path);
  m_crime_scene_database.push_back(parse_crime_scene(loader.m_raw_data.str()));
}


crime_scene_structure Crimedb_query::parse_crime_scene(std::string crime_scene_line) {
  int counter;
  std::string dummy;
  struct crime_scene_structure crime_scene;

  crime_scene_line.erase(remove(crime_scene_line.begin(), crime_scene_line.end(), ','), crime_scene_line.end());

  std::stringstream split_crime_scene(crime_scene_line);

  split_crime_scene >> crime_scene.id;
  std::cout << crime_scene.id.str() << std::endl;

  return crime_scene;
}

void Crimedb_query::add_dna(std::string raw_crime_scene) {
}

void Crimedb_query::del_dna(std::string id) {
}

void Crimedb_query::update_database(void) {
  // std::stringstream new_crime_scene_database;
}
