#ifndef _MAIN_H_
#define _MAIN_H_

#include <API.h>
//#include <parallax-library-pros>
#include "../parallax-library-pros/include/constants.h"
//#include "../parallax-library-pros/include/main.h"
//#include "../parallax-library-pros/main.c"

// utility functions (already in functions.c in the lib but it's also here for now)
#define BOUND(A,AMIN,AMAX) MIN(AMAX,MAX(A,AMIN))
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

// for use in config.c
#define M_WHEEL_L1 2
#define M_WHEEL_L2 3
#define M_WHEEL_R1 4
#define M_WHEEL_R2 5

// Allow usage of this file in C++ programs
#ifdef __cplusplus
extern "C" {
#endif

// Definition of Global functions!
void autonomous();
void initializeIO();
void initialize();
void operatorControl();

#ifdef __cplusplus
}
#endif
#endif
