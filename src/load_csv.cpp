#include "load_csv.h"

Load_csv::Load_csv()
{/* */}

void Load_csv::check_file_heath() {
  if (m_file_reader.is_open()) {
    std::cout << "[!] Error at opening file" << std::endl;
    exit(1);
  }
}

void Load_csv::load() {
  check_file_heath();
  std::string current_line;

  m_file_reader.open(m_file_path);

  current_line = "";

  while (m_file_reader.good()) {
    std::getline(m_file_reader, current_line);
    m_file_content << current_line << "\n";
  }

  m_file_reader.close();
}

// std::string Load_csv::get_file_content() {
//   return m_file_content.str();
// }

void Load_csv::set_file_path(std::string file_path) {
  m_file_path = file_path;
}

