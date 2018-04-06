#include "main.h"
#include "../parallax-library-pros/Bin/constants.h"

void operatorControl() {
  taskDelete(autonomous);

    while(true){
      //put your user control code here

      userControlUpdate();
    }
}
