# Smile_You-re_on_Camera
Smile_You-re_on_Camera

When a programmer realises that he is stuck at a particular spot , He/She turns a huge chuck of caffine into code to bust out a good piece of work . The above was nothing but a fancy starting to my nascent project.

It is all about the infamous "face recognition" using OpenCV library in C++. It detects your facial structure and eyes( thought the pretrained xml files can be used for a hell lot of features). What you need is :

OpenCV on ur system ( IF u r a Windows user , and don't know how to install openCV on ur IDE , Prefer to use https://www.youtube.com/watch?v=Qb9n8gQ0RwA&t=1772s this link . It is lenghty but clarifies everything how to use codeblocks , Cmake to make binary files, MingW-X64 compiler .( Prefer Code blocks rather than DEV C) . U might face problem while configeration in Cmake. Click the advance button and give the path to cmake-32 from opencv/bin folder at the place of CMAKE_NOT_FOUND

Working webcam or local video on ur node. (Pretty self-explainatory)

capture.open(0) --> is for live capture otherwise give the path of the file .

No need to import harcascades from opencv/data folder. Everything is preincluded in this repo.

# Run the recogniser.cpp file for the code .

# Only thing to look for is the installation of opencv on ur system. It is a "brain-frying" procedure if u awry the correct path :)

Any problem , feel free to ask .
