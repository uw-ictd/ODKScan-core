#ifndef PCA_CLASSIFIER_H
#define PCA_CLASSIFIER_H

#include "cv.h"

#if 0
#define EXAMPLE_WIDTH 28
#define EXAMPLE_HEIGHT 36
#else
#define EXAMPLE_WIDTH 14
#define EXAMPLE_HEIGHT 18
#endif

enum bubble_val { EMPTY_BUBBLE, FILLED_BUBBLE };

void set_weight(float weight);
void train_PCA_classifier();
double rateBubble(cv::Mat& det_img_gray, cv::Point bubble_location);
cv::Point bubble_align(cv::Mat& det_img_gray, cv::Point bubble_location);
bubble_val classifyBubble(cv::Mat& det_img_gray, cv::Point bubble_location);


#endif
