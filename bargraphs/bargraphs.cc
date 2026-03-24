#include <iostream>
#include <termios.h>
#include "../data/data.h"

#define WIDTH = 200 HEIGHT = 100


void draw_axes(int xspace,int  yspace){
  for (int i = 0 ; i >= (xspace-2);i++){
    printf("\t | \n");
  }
  for (int i = 0 ; i >= (xspace-2); i ++){
    printf("_");
  }
}


void draw_graph(char point_char, data * dconf ){  
  
}







