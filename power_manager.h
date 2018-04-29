#ifndef POWER_CMD
    #define POWER_CMD "upower -i $(upower -e | grep BAT) | grep 'percentage' | grep -o '[0-9]*'" 
#endif
#ifndef DEFAULT_POWER_VALUE
    #define DEFAULT_POWER_VALUE "-"
#endif
#ifndef POWER_DELIMETER
    #define POWER_DELIMETER ":"
#endif

/**
 * 
 * @param string value
 * @return string|null
 */
char * format_power_value(char *value) {
    return NULL != value ? strtok(value, "\n") : DEFAULT_POWER_VALUE; 
}

/**
 * 
 * @return string|null
 */
char * read_power_value() {
    FILE *fp;
    char *result = malloc(1024);
    char readed[1024];

    fp = popen(POWER_CMD, "r");
    if (fp == NULL) {
      return DEFAULT_POWER_VALUE;
    }

    while (fgets(readed, sizeof(readed)-1, fp) != NULL) {
        if (NULL != readed) {
            strcat(result, readed);
        }
    }
    pclose(fp);

    return format_power_value(result);
}
