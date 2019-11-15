#include <iostream>
#include <cstring>

#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class Media
{
  public:
    Media(char*, int);
    char* getTitle();
    int getYear();
    virtual int getType();
    virtual ~Media();
  private:
    char* title;
    int year;
    int type;
};

#endif
