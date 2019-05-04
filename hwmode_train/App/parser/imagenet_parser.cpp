#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <time.h>
#include <iostream>
#include "imagenet_parser.h"

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    srand(time(0));
    int width, height, stx, sty, edx, edy, blue[230][230], green[230][230], red[230][230];
    freopen("output.txt", "w", stdout);
    Mat img = imread("150013000229.jpg", IMREAD_COLOR);
    Mat cropped_img(227, 227, CV_8UC3);
    
    cv::resize(img, cropped_img, cv::Size(227, 227));
	   
    namedWindow( "test",  WINDOW_AUTOSIZE);
    imshow("test",  cropped_img);
    waitKey(0);
    return 0;
}
