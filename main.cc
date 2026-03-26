#include <iostream>
#include "data/data.h"

std::map<std::string,int> mock_data  {{"CPU", 10}, {"GPU", 10 }, {"TPU", 80} }
data(mock_data);

int main(){
  draw_graph(&data);
  return 0;
}
