#include <iostream>
#include "../include/dna_query.h"
#include "../include/load_database.h"
// #include "crimedb_query.h"


int main(int argc, char ** argv) {

  std::string crimedb_file_path = argv[1];
  std::string dnadb_file_path = argv[2];

  
  DNA_query dna(dnadb_file_path);
  dna.update_database();
  dna.add_dna("Fofis, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");
  dna.add_dna("Alicia, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");
  dna.add_dna("Dara, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");

  dna.del_dna("Fofis");

  // dna.proc_dna_str("Alicia");
  dna.del_dna_str("Dara");
  dna.show_db();


} 
