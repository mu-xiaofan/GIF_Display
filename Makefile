objs =	main.o	makeSearchWindow.o	makeDisplayWindow.o	\
cbDisplay.o getGifInfo.o searchGiphy.o

FLTKCXXFLAGS = `fltk-config --cxxflags --use-cairo --use-images`
FLTKLDFLAGS = `fltk-config --ldflags --use-cairo --use-images`

CXXFLAGS = -std=c++11 -I /home/debian/fltk-1.3.4-2 ${FLTKCXXFLAGS}
LDFLAGS =  ${FLTKLDFLAGS} -lcurl

all: ${objs} lab.h
	g++ ${CXXFLAGS} -o lab ${objs} ${LDFLAGS}

clean:
	rm *.o 
	rm lab
	
	#@   \newpage @

