#include <iostream>
#include <cstring>
#include "Media.h"

/* Finn McKinley
 * 11/19/19
 * Media.cpp file
 */

Media::Media(char* newTitle, int newYear) 
{//Media.cpp class
  title = new char[strlen(newTitle)+1];
  //New title
  strcpy(title, newTitle);
  //Copy to the new title
  year = newYear;
  //New year
}

char* Media::getTitle() 
{//Get title method
  return title;
}

int Media::getYear() 
{//Get year method
  return year;
}

int Media::getType() 
{//Get type method
  return 0;
}

Media::~Media() 
{//Media destructor
  delete []title;
}
