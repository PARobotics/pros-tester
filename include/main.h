#ifndef MAIN_H_
#define MAIN_H_

#include <API.h>
#include "../parallax-library-pros/include/constants.h"
#include "../parallax-library-pros/include/main.h"

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
