/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <time.h>

static clock_t start;
static clock_t end;

void start_stopwatch()
{
  start=clock();
}

void stop_stopwatch()
{

}

float elapsed_time()
{
  end=clock();
  return (float)(end-start)/CLOCKS_PER_SEC;
}
