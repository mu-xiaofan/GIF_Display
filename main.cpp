#include "lab.h"

/*mainsets up the GUI interface and passes control to 
FLTK subsystem.Before  returning  it  cleans  up  the  
gif  by  removing  it  from  the   working directory.
*/

int main()
{
	makeSearchWindow()->show();
	makeDisplayWindow()->show();
	Fl::run();
	
	system("rm giphy* ");
	//We don't need it right now!
	
	return 0;
}
//@   \newpage @

