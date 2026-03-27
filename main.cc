#include <iostream>
#include "data/data.h"

std::map<std::string,int> mock_data  {{"CPU", 10}, {"GPU", 20 }, {"TPU", 80} };
data my_data{mock_data};

int main(){
  draw_graph('*',&my_data);
  return 0;
}
