#include <iostream>
#include <termios.h>
#include "../data/data.h"
#include <iomanip>

#define WIDTH  50 
#define HEIGHT  30


void draw_axes(int xspace,int  yspace){
  for (int i = 0 ; i < (xspace-2);i++){
    printf("\t | \n");
  }
  for (int j = 0 ; j < (yspace-2);j++){
    printf("_");
  }
}


void draw_graph(const std::string point_char, data<int> * dcont ){ 
  //draw the actual graph 

  //draw the axes 
  draw_axes(HEIGHT,WIDTH);
  std::cout<<"\n ";
  //get the scale
  int max_data = dcont->max_value();
  int xscale = (max_data/HEIGHT)+1;

  for (auto& pair : dcont->data_cont){
    std::cout << "\t"<< pair.first ;
    int scale = pair.second/xscale;
    for (int d = 0 ; d < scale;d++){
      std::cout<<"\e[A";
      std::cout << point_char;
      std::cout << "\e[D"<<"\e[D";
    }
    printf("\e[%dB",scale);
  }
  std::cout << "\n";
  


}







