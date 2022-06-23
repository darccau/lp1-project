#include "load_csv.h"


Load_csv::Load_csv(std::string file_path) {
  m_file_path = file_path;
  m_file_content = "test";
  std::cout << m_file_content << std::endl;
}

void Load_csv::check_file_heath() {
  if (m_file_reader.is_open()) {
    std::cout << "[!] Error at opening file" << std::endl;
    exit(1);
  }
}

void Load_csv::load_file() {
  check_file_heath();

  m_file_reader.open(m_file_path);

  while (std::getline(m_file_reader, m_file_content))

  m_file_reader.close();
}

// const std::string crime_db = "../data/crimedb.csv";
// const std::string dna_db = "../data/dnadb.csv";
//
// std::ifstream dna_dataset_reader;
// std::ifstream crime_dataset_reader;
//
// std::string dnadb_buffer;
// std::string crimedb_buffer;
//
// dna_dataset_reader.open(dna_db);
// crime_dataset_reader.open(crime_db);
//
// while (std::getline(dna_dataset_reader, crimedb_buffer)) {
//   std::cout << crimedb_buffer << std::endl;
// }
//
// while (std::getline(crime_dataset_reader, dnadb_buffer)) {
//   std::cout << dnadb_buffer << std::endl;
// }
//
// dna_dataset_reader.close();
// crime_dataset_reader.close();

