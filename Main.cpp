#include <iostream>
using namespace std;

class Media
{
public:
  char title[10];
  int year;
};

class VideoGames : public Media
{
public:
  char publisher[10];
  int rating;
}

class Music : public Media
{
public:
  char artist[10];
  float duration;
  char publisher[10];
}

class Movies : public Media
{
public:
  char director[10];
  float duration;
  int rating;
}

int main() {
  VideoGames game;
  game.rating = 1;
  cout << 
}
