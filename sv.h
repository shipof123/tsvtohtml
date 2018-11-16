#include <vector>

#ifndef TSV_H_
#define TSV_H_

template <char _delim>
class SV
{
private:
  char delim = _delim;
  std::vector<std::string> lines;
  std::string first;
  std::vector<std::vector<std::string> > records; 
  std::string file;
  std::string dest;
public:
  SV(const std::string& fname)
  {
    file = fname;
  }
  void read();
  void print();
  void write_to_html();
  void sort(std::string content);
  void format();
};
#endif
