//
// Created by nickmint on 12/11/20.
//

#ifndef TEMPLATE_FINANCE_ANALYZER_HPP
#define TEMPLATE_FINANCE_ANALYZER_HPP
#include <vector>

#include "account.hpp"
#include "boost/filesystem.hpp"

using namespace boost;
class finance_analyzer {
 public:
  explicit finance_analyzer();
  void analyze(const filesystem::path& path);
  std::ostream& print_info(std::ostream& out);
  friend std::ostream& operator<<(std::ostream &out, finance_analyzer& fin);
  ~finance_analyzer();

 private:
  filesystem::path path_to_dir;
  std::vector<account*> accounts;
};
#endif  // TEMPLATE_FINANCE_ANALYZER_HPP
