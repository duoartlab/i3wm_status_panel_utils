#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "power_manager.h"

/**
 * By default executes battery status
 * 
 * @param int argc
 * @param string argv
 * @return 
 */
int main(int argc, char** argv) {
    printf("%s%%", read_power_value());
    return (EXIT_SUCCESS);
}
