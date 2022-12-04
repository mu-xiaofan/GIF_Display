#include "lab.h"
#include <iostream>
#include <fstream>
#include <sstream>

/*
Call searchGiphy passing the in the keyword stored in s. 
Parse the longstring returned to find the original gif 
and extract the url needed to re-trieve it.  The string 
returned by giphy is in json format.   We are usingstring
 functions to find unique words within it and then getting
  the sub-string.
*/

std::string getGifInfo (std::string s)
{
std::string gifInfo = searchGiphy(s);


std::string gifURL = gifInfo.substr(gifInfo.find("original"),200);


//declaring a string named gifURL then assign substr to gifInfo, 
//the first word of gifInfo is original with the lenght of 200 characters

size_t p1 = gifURL.find("http");
size_t p2 = gifURL.find("\"",p1);
//size_t is an unsgined integer

gifURL = gifURL.substr(p1, p2 - p1);
return gifURL;

}	
//@   \newpage @
