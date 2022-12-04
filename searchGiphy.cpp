#include <iostream>
#include "mashape.h"
#include <curl/curl.h>

/*curl is a C API to interface with internet sites.  We have 
to set up thequery string and collect the page(s) returned into 
a string.  This is becauselarge pages will be sent in packets 
rather than all at once.  handleData isa way to collect and 
recombine these packets.  Read this link for information about 
the 'callback' function */
/*
https://curl.haxx.se/libcurl/c/CURLOPT_WRITEFUNCTION.html
The include file has the specific `keys` needed for mashape.
*/

//libcurl
size_t handleData(void* c, size_t s, size_t n, void* j)
{
	*static_cast<std:: string*>(j) += static_cast<char*>(c);
	return s * n;
}
std::string searchGiphy(std::string k)
{
	std::string s = "";
	struct curl_slist* slist1 = NULL;
	slist1 = curl_slist_append(slist1,key.c_str()); 
	slist1 = curl_slist_append(slist1,js.c_str()); 
	std::string q = url + api + "&q=" + k;
	CURL* hnd = curl_easy_init();
	curl_easy_setopt(hnd,CURLOPT_URL,q.c_str());
	curl_easy_setopt(hnd,CURLOPT_HTTPHEADER,slist1);
	curl_easy_setopt(hnd,CURLOPT_WRITEFUNCTION,handleData);
	curl_easy_setopt(hnd,CURLOPT_WRITEDATA, &s);
	curl_easy_perform(hnd);
	curl_easy_cleanup(hnd);
	return s;
}
//@   \newpage @
