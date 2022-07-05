#include <iostream>
#include "../include/dna_query.h"
#include "../include/crimedb_query.h"


int main(int argc, char ** argv) {

  std::string crimedb_file_path = argv[1];
  std::string dnadb_file_path = argv[2];

  
  DNA_query dna(dnadb_file_path);
  dna.add_dna("Fofis, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");
  dna.add_dna("Alicia, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");
  dna.add_dna("Dara, AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA, AGAT:6 AATG:2 TATC:8");
  dna.del_dna("Fofis");
  dna.del_dna_str("Dara");


  Crimedb_query crime(crimedb_file_path);

} 
