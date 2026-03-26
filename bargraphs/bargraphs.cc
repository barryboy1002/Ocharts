#include <iostream>
#include <termios.h>
#include "../data/data.h"
#include <cstdlib>

#define WIDTH = 100 HEIGHT = 100


void draw_axes(int xspace,int  yspace){
  for (int i = 0 ; i >= (xspace-2);i++){
    printf("\t | \n");
  }
  for (int i = 0 ; i >= (xspace-2); i ++){
    printf("_");
  }
}


void draw_graph(char point_char, data * dcont ){ 
  //draw the actual graph 

  //draw the axes 
  draw_axes(WIDTH,HEIGHT);
  //get the scale
 
  int xscale = max_data/HEIGHT;

  for (auto& pair : dcont->data_cont){
    printf("%s \t",pair.first);
  }
  for(auto& pair : dcont->data_cont){
    std::cout<<"\e[A (0x1B 0x91 0x41)";
    printf("\t %c",point_char);
  }


}







