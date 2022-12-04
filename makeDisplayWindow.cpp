#include "lab.h"

Fl_Cairo_Window* dw;
Fl_Box * gb;

Fl_Cairo_Window* makeDisplayWindow()
{
	dw = new Fl_Cairo_Window(WIDTH,HEIGHT);
	dw->label("GIF Display");
	dw->position(cw->x()+cw->w()+MARGIN, cw->y());
	gb = new Fl_Box(0,0,WIDTH,HEIGHT);
	gb->image(new Fl_GIF_Image("giphy.gif"));
	return dw;
	
}
//@   \newpage @
