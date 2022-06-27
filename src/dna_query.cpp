#include "../include/dna_query.h"
#include "../include/load_database.h"


struct dna_structure {
  std::string id;        
  std::string raw_data;   
  std::string strs;       
};


DNA_query::DNA_query()
{/* */}

DNA_query::DNA_query(std::string database_path) {
  // parse_dna(database_path);
  // Load_database loader(m_database_path);
  // add_dna();
  m_database_path = database_path;
  std::cout << m_database_path << std::endl;
  add_dna();
}

// void DNA_query::update_database() {
// }

// void DNA_query::parse_dna(std::string dna) {
  // struct dna_structure dna; 
  // 
  // loader.m_raw_data >> dna.id;
  // loader.m_raw_data >> dna.raw_data;
  //
  // std::cout << loader.m_raw_data.wkkkkkkkkkkkktr() << std::endl;
// }

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
  std::string sample = "Amanda, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8\n";

  m_file_writer.open(m_database_path, std::ios_base::app);

  m_file_writer << sample;

  m_file_writer.close();
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


