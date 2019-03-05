/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>

void init_random(int *array, unsigned long length)
{
  for(unsigned int i=0;i<length;i++)
  {
    array[i]=rand()%100;
  }
}
void bubble_sort(int *array, unsigned long length)
{
  for (unsigned int i = 0 ; i < length - 1; i++)
  {
    for (unsigned int d = 0 ;d < length - i - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        int swap = array[d];
        array[d] = array[d+1];
        array[d+1] = swap;
      }
    }
  }
}
void insertion_sort(int *array, unsigned long length)
{
  for (unsigned int c = 1 ; c <= length - 1; c++)
  {
    int d = c;
    while (d > 0 && array[d-1] > array[d])
    {
      int temp = array[d];
      array[d] = array[d-1];
      array[d-1] = temp;
      d--;
    }
  }
}
