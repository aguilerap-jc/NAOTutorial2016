/*
 * Copyright (c) 2012-2015 Aldebaran Robotics. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the COPYING file.
 */
#include <iostream>
#include <alproxies/almotionproxy.h>
#include <alproxies/alrobotpostureproxy.h>
#include <alvision/alimage.h>
#include <alvision/alvisiondefinitions.h>

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace AL;
using namespace cv;


int main(int argc, char *argv[])
{
    string ip;
    ip = argv[1];
    AL::ALRobotPostureProxy posture(ip, 9559);
    AL::ALMotionProxy motion(ip,9559);

    posture.goToPosture("Crouch",0.5);
    posture.goToPosture("StandInit",0.5);

    //Mat src;

    //VideoCapture(1);
    //const string clientName = cameraProxy.subscribe("test", AL::kQVGA, AL::kBGRColorSpace,30);

    //Mat src_gray;

  return 0;
}
