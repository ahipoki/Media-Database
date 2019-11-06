#include <iostream>
using namespace std;

Movie::Movie(string* newtype) {
  type = newtype;
  //char director[80];
  duration = 0.0;
  rating = 0.0;
}

char* Movie::getType() {
  return type;
}

char[]* Movie::getTitle() {
  cout<<"Title"<<endl;
  //return char[80];
}

char[]* Movie::getDirector() {
  cout<<"Director"<<endl;
  //return char[80];
}

int Movie::getYear() {
  cout<<"Year"<<endl;
  //return int;
}

float Movie::getDuration() {
  cout<<"Duration"<<endl;
  //return float;
}

float Movie::getRating() {
  cout<<"Rating"<<endl;
  //return float;
}
