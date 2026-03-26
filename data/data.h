#include <string>
#include <map>
#include <algorithm>
#include <string>

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
            std::pair<std::string,x_data>& a,std::pair<std::string, x_data>&b 
            ){ return a.second < b.second
          }
          );
     if constexpr(std::is_same_v<dcont->x_data,int>){
        return *best;
     }else{
       return 0;
     }
  }
}
