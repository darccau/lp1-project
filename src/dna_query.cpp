#include "dna_query.h"

DNA_query::DNA_query(std::string file_path) {
  m_file_loader.set_file_path(file_path);
  m_file_loader.load();
  
  std::string sample1;
  std::string sample2;
  std::string sample3;

  m_file_loader.m_file_content >> sample1;
  m_file_loader.m_file_content >> sample2;
  m_file_loader.m_file_content >> sample3;

  std::cout << sample1 << std::endl;
  std::cout << sample2 << std::endl;
  std::cout << sample3 << std::endl;

}

void DNA_query::add_dna() {
  std::string sample = "sample";

  m_file_writer.open("database.txt");

  m_file_writer << sample;
  
  m_file_writer.close();
}


void DNA_query::del_dna() {
  std::cout << "del_dna" << std::endl;
}


void DNA_query::proc_dna_str() {
  std::cout << "prc_dna_str" << std::endl;
}


void DNA_query::del_dna_str() {
  std::cout << "del_dna_str" << std::endl;
}

