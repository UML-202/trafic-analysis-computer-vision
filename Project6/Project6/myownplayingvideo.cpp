#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<conio.h>
#include<time.h>
using namespace cv;
using namespace std;
int main()
{
	VideoCapture play("CarsDrivingUnderBridge.mp4");
	Mat frame;
	Rect r(200, 150, 400, 500);
	int totalframes = play.get(CAP_PROP_FRAME_COUNT);
	while (1)
	{
		
		play >> frame;
		frame = frame(r);
		imshow("video", frame);
		if (waitKey(30) == 'c')break;
		//getchar(); getchar();
	}
}