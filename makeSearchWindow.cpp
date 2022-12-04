#include "lab.h"

Fl_Cairo_Window* cw;
Fl_Input* k;
Fl_Button *b;

Fl_Cairo_Window* makeSearchWindow()
{
	cw = new Fl_Cairo_Window(WIDTH,HEIGHT);
	cw->label("GIF Search");
	k = new Fl_Input(0.5*WIDTH, 0.25*HEIGHT, 0.25*WIDTH, 0.1*HEIGHT,
	"Search Keyword: ");
	b = new Fl_Button(0.25*WIDTH, 0.5*HEIGHT, 0.25*WIDTH, 0.1*HEIGHT, 
	"Display");
	b->color(FL_YELLOW);
	b->callback((Fl_Callback * ) cbDisplay);
	return cw;
	
	
}
//@   \newpage @
