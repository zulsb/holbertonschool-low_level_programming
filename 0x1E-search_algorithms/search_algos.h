#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <math.h>

/**========================================================================*/
/**-STRUCTURES-& DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** 0. Function that linear searches for a value in an array */
int linear_search(int *array, size_t size, int value);

/** 1. Function that binary searches for a value in a sorted array */
int binary_search(int *array, size_t size, int value);

#endif
