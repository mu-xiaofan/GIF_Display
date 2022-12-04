#include <string>
#include <iostream>
#include <cstdlib>
#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_GIF_Image.H>
std::string getGifInfo(std::string);
std::string searchGiphy(std::string);
Fl_Cairo_Window* makeSearchWindow();
Fl_Cairo_Window* makeDisplayWindow();
void cbDisplay(Fl_Button*,void*);
const int WIDTH = 300;  
const int HEIGHT = 300;
const int MARGIN = 100;
extern Fl_Box* gb;
extern Fl_Cairo_Window* dw;
extern Fl_Cairo_Window* cw;
