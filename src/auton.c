//#include "../main.c"
#include "../parallax-library-pros/Bin/constants.h"
#include "../parallax-library-pros/main.c"

void autonomous(void) {
  taskDelete(usercontrol);
	autonProcedure();
}
