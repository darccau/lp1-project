#include "../include/dna_query.h"
#include "../include/load_database.h"


struct dna_structure {
  std::string id;
  std::string raw_data;
  std::vector<std::string> strs;
};


DNA_query::DNA_query()
{/* */}

DNA_query::DNA_query(std::string database_path) {
  m_database_path = database_path;
  Load_database loader(m_database_path);

  parse_dna(loader.m_raw_data.str());

}

// void DNA_query::update_database() {
// }

void DNA_query::parse_dna(std::string dna_line) {
  struct dna_structure dna;
  // int counter;
  std::stringstream split_dna(dna_line);
  
  split_dna >> dna.id;
  split_dna >> dna.raw_data;

  // counter = 0;
  // while (split_dna >> dna.strs[counter]) {
  //   counter++;
  // }

  std::cout << dna.id << std::endl;
  std::cout << dna.raw_data << std::endl;
  // std::cout << dna.strs[0] << std::endl;
  // std::cout << dna.strs[1] << std::endl;
  // std::cout << dna.strs[2] << std::endl;
}

//TODO Pegar o resultado do menu
// std::string DNA_query::craft_dna() {
//   struct dna_structure new_dna;
//   new_dna.id = "sample-id";
//   new_dna.raw_data = "sample-raw_data";
//   new_dna.strs = "sample-strs";
//
//   return "sample";
// }

void DNA_query::add_dna(void) {
  // m_file_writer.open(m_database_path, std::ios_base::app);
  // m_file_writer << sample;
  // m_file_writer.close();
}


void DNA_query::del_dna(void) {
  std::cout << "del_dna" << std::endl;
}


void DNA_query::proc_dna_str(void) {
  std::cout << "prc_dna_str" << std::endl;
}


void DNA_query::del_dna_str(void) {
  std::cout << "del_dna_str" << std::endl;
}


