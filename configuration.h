/*
This file is included in:
formAlignment.cpp/.h
PCA_classifier.cpp/.h
Processor.cpp/.h

It defines platform specific constants
*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

//For printing in a android comapatible way.
#define LOGI(x) (cout << (x) << endl)

//Processor.cpp
#define DEBUG_PROCESSOR
//FormAlignmnet.cpp
#define DEBUG_ALIGN_IMAGE

#endif