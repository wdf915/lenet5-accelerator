#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "nnet.h"

typedef float accum_default_t;
typedef float weight_default_t;
typedef float bias_default_t;
typedef float input_t;
typedef float result_t;

#define IN_HEIGHT_1 28
#define IN_WIDTH_1 28
#define N_CHAN_1 1
#define OUT_HEIGHT_1 24
#define OUT_WIDTH_1 24
#define N_FILT_1 6
#define IN_HEIGHT_2 24
#define IN_WIDTH_2 24
#define OUT_HEIGHT_2 12
#define OUT_WIDTH_2 12
#define POOL_HEIGHT_2 2
#define POOL_WIDTH_2 2
#define N_FILT_2 6
#define N_LAYER_2 864
#define IN_HEIGHT_3 12
#define IN_WIDTH_3 12
#define N_CHAN_3 6
#define OUT_HEIGHT_3 8
#define OUT_WIDTH_3 8
#define N_FILT_3 16
#define IN_HEIGHT_4 8
#define IN_WIDTH_4 8
#define OUT_HEIGHT_4 4
#define OUT_WIDTH_4 4
#define POOL_HEIGHT_4 2
#define POOL_WIDTH_4 2
#define N_FILT_4 16
#define N_LAYER_4 256
#define N_LAYER_5 120
#define N_LAYER_6 84
#define N_OUTPUTS 10

#define FILT_HEIGHT 5
#define FILT_WIDTH 5

typedef float layer1_t;
typedef float layer2_t;
typedef float layer3_t;
typedef float layer4_t;
typedef float layer5_t;
typedef float layer6_t;

//hls-fpga-machine-learning insert layer-config
struct config1 : nnet::conv2d_config {
        static const unsigned pad_top = 0;
        static const unsigned pad_bottom = 0;
        static const unsigned pad_left = 0;
        static const unsigned pad_right = 0;
        static const unsigned in_height = IN_HEIGHT_1;
        static const unsigned in_width = IN_WIDTH_1;
        static const unsigned n_chan = N_CHAN_1;
        static const unsigned filt_height = 5;
        static const unsigned filt_width = 5;
        static const unsigned n_filt = N_FILT_1;
        static const unsigned stride_height = 1;
        static const unsigned stride_width = 1;
        static const unsigned out_height = OUT_HEIGHT_1;
        static const unsigned out_width = OUT_WIDTH_1;
        static const unsigned reuse_factor = 50;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef accum_default_t accum_t;
        typedef bias_default_t bias_t;
        typedef weight_default_t weight_t;
        };

struct config2 : nnet::pooling2d_config {
        static const unsigned in_height = IN_HEIGHT_2;
        static const unsigned in_width = IN_WIDTH_2;
        static const unsigned n_filt = N_FILT_2;
        static const unsigned stride_height = 2;
        static const unsigned stride_width = 2;
        static const unsigned pool_height = 2;
        static const unsigned pool_width = 2;
        static const unsigned out_height = OUT_HEIGHT_2;
        static const unsigned out_width = OUT_WIDTH_2;
        static const unsigned pad_top = 0;
        static const unsigned pad_bottom = 0;
        static const unsigned pad_left = 0;
        static const unsigned pad_right = 0;
//        static const nnet::Pool_Op pool_op = nnet::Max;
        static const unsigned reuse = 50;
    };

    struct config3 : nnet::conv2d_config {
        static const unsigned pad_top = 0;
        static const unsigned pad_bottom = 0;
        static const unsigned pad_left = 0;
        static const unsigned pad_right = 0;
        static const unsigned in_height = IN_HEIGHT_3;
        static const unsigned in_width = IN_WIDTH_3;
        static const unsigned n_chan = N_CHAN_3;
        static const unsigned filt_height = 5;
        static const unsigned filt_width = 5;
        static const unsigned n_filt = N_FILT_3;
        static const unsigned stride_height = 1;
        static const unsigned stride_width = 1;
        static const unsigned out_height = OUT_HEIGHT_3;
        static const unsigned out_width = OUT_WIDTH_3;
        static const unsigned reuse_factor = 50;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef accum_default_t accum_t;
        typedef bias_default_t bias_t;
        typedef weight_default_t weight_t;
        };

struct config4 : nnet::pooling2d_config {
        static const unsigned in_height = IN_HEIGHT_4;
        static const unsigned in_width = IN_WIDTH_4;
        static const unsigned n_filt = N_FILT_4;
        static const unsigned stride_height = 2;
        static const unsigned stride_width = 2;
        static const unsigned pool_height = 2;
        static const unsigned pool_width = 2;
        static const unsigned out_height = OUT_HEIGHT_4;
        static const unsigned out_width = OUT_WIDTH_4;
        static const unsigned pad_top = 0;
        static const unsigned pad_bottom = 0;
        static const unsigned pad_left = 0;
        static const unsigned pad_right = 0;
        static const unsigned reuse = 50;
    };

    struct config5 : nnet::layer_config {
        static const unsigned n_in = N_LAYER_4;
        static const unsigned n_out = N_LAYER_5;
        static const unsigned reuse_factor = 24;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef accum_default_t accum_t;
        typedef bias_default_t bias_t;
        typedef weight_default_t weight_t;
        };

struct config6 : nnet::layer_config {
        static const unsigned n_in = N_LAYER_5;
        static const unsigned n_out = N_LAYER_6;
        static const unsigned reuse_factor = 12;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef accum_default_t accum_t;
        typedef bias_default_t bias_t;
        typedef weight_default_t weight_t;
        };

struct config7 : nnet::layer_config {
        static const unsigned n_in = N_LAYER_6;
        static const unsigned n_out = N_OUTPUTS;
        static const unsigned reuse_factor = 2;
        static const unsigned n_zeros = 0;
        static const bool store_weights_in_bram = false;
        typedef accum_default_t accum_t;
        typedef bias_default_t bias_t;
        typedef weight_default_t weight_t;
        };
#endif 
