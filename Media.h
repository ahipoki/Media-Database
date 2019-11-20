#include <iostream>
#include <cstring>

#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class Media
{//Media.h file
  public:
    Media(char*, int);
    char* getTitle();
    //Get title
    int getYear();
    //Get year
    virtual int getType();
    //Get type
    virtual ~Media();
    //Media destructor
  private:
    char* title;
    //Title
    int year;
    //Year
    int type;
    //Type
};

#endif
