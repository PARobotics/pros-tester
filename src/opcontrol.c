#include "main.h"
#include "../parallax-library-pros/include/constants.h"

void operatorControl() {
  taskDelete(autonomous);

    while(true){
      //put your user control code here

      userControlUpdate();
    }
}
