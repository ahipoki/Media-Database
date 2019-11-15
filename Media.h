#include <iostream>
#include <cstring>

#ifndef MEDIA_H
#define MEDIA_H

class Media
{
  public:
    Media(char*, int);
    char* getTitle();
    int getYear();
    virtual int getType();
  private:
    char title[80];
    int year;
};

#endif
