#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>

#include "sv.h"

void SV::sort(std::string content)
{
    std::istringstream f(content);
    std::string line;
    while(getline(f,line))
    {
        lines.push_back(line);
        std::istringstream rec(line);
        std::vector<std::string> record;
        std::string entry;
        while(getline(rec,entry,delim))
        {
          record.push_back(entry);  
        }
        records.push_back(record);
    }
}

void SV::read()
{
  std::ifstream ifs(file.c_str());
  getline(ifs,first);
  std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
  sort(content);
}
void SV::print()
{
    for(auto e : records)
    {
      for(auto i : e)
        std::cout << i << " | ";
      std::cout << std::endl;
    }
}
void SV::format()
{
  std::string header;
  std::string element;
  std::istringstream firstln(first);
  while(getline(firstln,element,' '))
  {
    header += "<td>&nbsp;&nbsp;&nbsp;&nbsp;<b> " + element + "</b>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>"; 
  }
  std::sstream out(dest, std::ios::app);
  out << std::endl 
    << "<pre style=\"background-color:rgb(25, 4, 44)\">\n"
    << std::endl 
    << R"(<TABLE border = "1"style="border-spacing: 10px;color:red;background-color: black;">)" 
    << "<tr>" << header << "</tr>"
    << std::endl;
  for(auto e : records)
    {
      out << "<tr>" << std::endl;
      for(auto i : e){
        out << "<td>" << i << "   </td>"<< std::endl;
      }
      out << "</tr>" << std::endl;
    }
  out << "</TABLE></pre>" << std::endl << "</body>";
  out.close();
}
