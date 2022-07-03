#include "../include/load_database.h"

Load_database::Load_database()
{/* */}

Load_database::Load_database(std::string database_path) { 
  m_database_path = database_path;
  load();
}

void Load_database::check_file_heath() {
  if (m_file_reader.is_open()) {
    std::cout << "[!] Error at opening file" << std::endl;
    exit(1);
  }
}

void Load_database::load() {
  check_file_heath();
  std::string current_dna;

  m_file_reader.open(m_database_path);

  while (m_file_reader.good()) {
    std::getline(m_file_reader, current_dna);
    m_raw_data << current_dna << "\n";
  }

  m_file_reader.close();
}

