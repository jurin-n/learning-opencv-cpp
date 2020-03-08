CXX = c++
CXXFLAGS = -I/usr/local/opt/opencv@3/include/
LDFLAGS = -L/usr/local/opt/opencv@3/lib/
LDLIBS = -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc -lopencv_videoio
CXXVERSION = -std=c++11

main: ${CPP_FILE}
	$(CXX) $< -o $@ $(CXXFLAGS) $(CXXVERSION) $(LDFLAGS) $(LDLIBS) -v

clean:
	rm main
