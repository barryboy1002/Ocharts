#include <iostream>
#include <termios.h>
#include "../data/data.h"
#include <cstdlib>

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


void draw_graph(char point_char, data<int> * dcont ){ 
  //draw the actual graph 

  //draw the axes 
  draw_axes(WIDTH,HEIGHT);
  //get the scale
  int max_data = dcont->max_value();
  std::cout << max_data <<"\n";
  int xscale = max_data/HEIGHT;

  for (auto& pair : dcont->data_cont){
    printf(" label ->%s \t",pair.first);
  }
  /*
  for(auto& pair : dcont->data_cont){
    for (int d = 0 ; d < xscale;d++){
      std::cout<<"\e[A";
      printf("%c",point_char);
    }
  }
*/

}







