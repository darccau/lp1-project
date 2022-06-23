#include <iostream>
#include "load_csv.h"
#include "dna_query.h"
#include "crimedb_query.h"


int main(int argc, char ** argv) {

  std::string crimedb_file_path = argv[1];
  std::string dnadb_file_path = argv[2];

  Load_csv loader(crimedb_file_path);

  loader.load_file();
  std::cout << loader.m_file_content << std::endl;


  // crime.sample();
  // dna_query.sample();

} 
