#include "lab.h"
extern Fl_Input* k;

/*
Write the Callback function for the button. It will use the 
system call to delete the old giphy.gif file, thencall getGifInfo 
(passing in the keyword the user typed into the input box.  
Then use the wget commandin a system call to retrieve] the 
gif from the url returned by getGifInfo, naming it giphy.gif.
Then usedynamic memory allocation to put the gif in memory, 
and  call theFl_Boximage function to associatetheFl_GIF_Imagewith 
the box.  Lastly, call the window redraw function.
*/

void cbDisplay(Fl_Button*, void*)
{
	system("rm giphy.gif");
	//This is for removing the giphy!we don't need it right now!!
	std::string url = getGifInfo(k->value());
	
	url = "wget " + url + " -O giphy.gif";//name the file giphy.gif
	
	system(url.c_str());
	
	gb->image(new Fl_GIF_Image("giphy.gif"));//find the file
	dw->redraw();
}
//@   \newpage @
