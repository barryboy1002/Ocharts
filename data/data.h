#include <string>
#include <map>
#include <algorithm>
#include <string>
#include <type_traits>

template <typename x_data>
struct data{
  public:
    x_data points;
    std::string label;
    std::map<std::string,x_data> data_cont;

    data(std::string dlabel, x_data value):points{value}, label{dlabel}{}
    data(std::map<std::string,x_data> dict){
      for(auto& data_pair : dict){
        data_cont[data_pair.first] = data_pair.second;
      }
    }
    int max_value(){
      auto best  = std::max_element(data_cont.begin(), data_cont.end(), [](
            const std::pair<std::string,x_data>& a,const std::pair<std::string, x_data>&b 
            ){ return a.second < b.second;
          }
          );
     if constexpr(std::is_same_v<x_data,int>){
        return best->second;
     }else{
       return 0;
     }
  }
};

void draw_graph(const char point_char, data<int>* dcont);
