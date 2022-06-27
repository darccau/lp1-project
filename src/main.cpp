#include <iostream>
#include "../include/dna_query.h"
// #include "crimedb_query.h"


int main(int argc, char ** argv) {

  std::string crimedb_file_path = argv[1];
  std::string dnadb_file_path = argv[2];

  

  DNA_query dna(dnadb_file_path);
  // dna.get_loader().set_database_path(dnadb_file_path);
  // dna.get_loader().load();
  // std::cout << dna.get_loader().get_raw_data() << std::endl;

} 
