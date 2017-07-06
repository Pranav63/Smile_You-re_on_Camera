#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{

    Mat img=imread("pranav.jpg");
    namedWindow("gotcha",WINDOW_AUTOSIZE);
    imshow("gotcha",img);
    waitKey(0);
    //destoryWindow("gotcha");
    return 0 ;
}
