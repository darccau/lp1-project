#include "../include/dna_query.h"
#include "../include/load_database.h"


DNA_query::DNA_query()
{/* */}

DNA_query::DNA_query(std::string database_path) {
  m_database_path = database_path;
  Load_database loader(m_database_path);

  m_dna_database.push_back(parse_dna(loader.m_raw_data.str()));
}

void DNA_query::update_database() {
  std::stringstream new_dna_database;

  m_file_writer.open("../data/sample_DNAdb.csv");

  for (auto dna : m_dna_database) {
    new_dna_database << dna.id << ", ";
    new_dna_database << dna.raw_data << ", ";

    for (auto str : dna.strs) {
      new_dna_database << str << " ";
    }
    new_dna_database << "\n";
  }

  m_file_writer << new_dna_database.str();

  m_file_writer.close();
}

struct dna_structure DNA_query::parse_dna(std::string dna_line) {
  int counter;
  std::string dummy;
  struct dna_structure dna;

  dna_line.erase(remove(dna_line.begin(), dna_line.end(), ','), dna_line.end());

  std::stringstream split_dna(dna_line);

  split_dna >> dna.id;
  split_dna >> dna.raw_data;

  counter = 0;
  while (split_dna >> dummy) {
    dna.strs.push_back(dummy);
    counter++;
  }

  return dna;
}

void DNA_query::add_dna(std::string raw_dna) {
  struct dna_structure new_dna = parse_dna(raw_dna);
  update_database();

   for (auto dna : m_dna_database) {
    
    // check insertion of duplicated id dna
    if (new_dna.id == dna.id) {
      std::cout << "[!] The current DNA inserted is alredy present on database" << std::endl;
      return;
    }
  }
  m_dna_database.push_back(new_dna);
}

void DNA_query::del_dna(std::string id) {
  for (unsigned int i = 0; i < m_dna_database.size(); i++) {
    if (m_dna_database[i].id == id) {
      m_dna_database.erase(m_dna_database.begin()+i);
      return;
    }
  }
  std::cout << "[!] Has no identifier with the especified pattern" << std::endl;
  update_database();
}

void DNA_query::proc_dna_str(void) {
}

void DNA_query::del_dna_str(void) {

}

void DNA_query::show_db() {
  std::stringstream new_dna_database;

  for (auto dna : m_dna_database) {
    new_dna_database << dna.id << " ";
    new_dna_database << dna.raw_data << " ";

    for (auto str : dna.strs) {
      new_dna_database << str << " ";
    }
    new_dna_database << "\n";
  }

  std::cout  << new_dna_database.str() << std::endl;
}

