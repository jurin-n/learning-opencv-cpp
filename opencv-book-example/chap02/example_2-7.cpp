#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;

int main( int argc, char** argv ) {

    cv:namedWindow("Example 2-3", cv::WINDOW_AUTOSIZE );
    cv::VideoCapture cap;

    if (argc==1) {
        cap.open(0);
    } else {
        cap.open(argv[1]);
    }

    if (!cap.isOpened()) {
        std::cerr << "Couldn't open capture." << std::endl;
        return -1;
    }


    cv::Mat frame;
    for(;;){
        cap >> frame;
        if( frame.empty() ) break;
        cv::imshow( "Example 2-3", frame );
        if( (char)cv::waitKey(33) >= 0 ) break;
    }

    return 0;
}
