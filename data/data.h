#include <string>
#include <map>

template <typename x_data>
struct data{
  x_data points;
  y_data label;
  std::map<std::string,xdata> data_cont;

  data(ydata dlabel, x_data value):points{value}, label{dlabel}{}
  data(std::map<std::string,xdata> dict){
    for(auto& data_pair : dict){
      data_cont[data_pair.first] = data_pair.second;
    }
  } 
}
