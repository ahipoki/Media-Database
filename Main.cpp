#include <iostream>
#include <cstring>
#include <vector>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include "Media.h"
using namespace std;

/*
 * Finn McKinley
 * 11/19/19
 * A database for video games, movies, and music
 */

void addVG(vector<Media*>*mListM);

void addMU(vector<Media*>*mListM);

void addMO(vector<Media*>*mListM);

void deleteMedia(vector<Media*>*mListM) 
{//Delete Method
  char deleteInput[80];
  //User input for year or title
  bool stillDeleting = true;
  //Still deleting
  while (stillDeleting == true) {//While the user is still deleting
    std::cout << "Do you want to delete by title or year? (TITLE/YEAR)" << std::endl;
    //Ask user if they want to delete by title or year
    cin.getline(deleteInput, 80);
    //Take in user input
    for (int i = 0; i < strlen(deleteInput); i++) 
      {//Make the input lower case
      deleteInput[i] = tolower(deleteInput[i]);
    }
    vector<Media*>::iterator mListIt;
    //Iterator
    if(strcmp(deleteInput, "title") == 0) 
    {//If they want to delete by title
      char titleInput[80];
      //Input for title
      std::cout << "What is the title?" << std::endl;
      //Ask for the title
      cin.getline(titleInput, 80);
      //Take in user input
      for (mListIt = mListM->begin(); mListIt != mListM->end();) 
      {//For the entries in the database
	if (strcmp((*mListIt)->getTitle(), titleInput) == 0) 
	{//If they input equals at least 1 entry in the database
	  int mediaType = (*mListIt)->getType();
	  //Get the type of media
	  if (mediaType == 1) 
	  {//If it's a video game
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	    //Print out the video game
	  }
	  else if (mediaType == 2) 
	    {//Else if it's a movie
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	    //Print out the movie
	  }
	  else if (mediaType == 3) 
	    {//Else if it's music
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	    //Print out the music
	  }
	  std::cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	  //Confirm if they want to delete it
	  char confirmDel;
	  std::cin >> confirmDel;
	  //Take in user input
	  if (confirmDel == 'y') 
	  {//If they say yes
	    delete *mListIt;
	    mListIt = mListM->erase(mListIt);
	    //Delete it
	    stillDeleting = false;
	    //Not deleting anymore
	  }
	  else if (confirmDel == 'n')
	  {//Else if they say no
	    std::cout << "You cancelled the deletion" << std::endl;
	    //Tell them they cancelled the deletion
	    ++mListIt;
	    stillDeleting = true;
	    //Still deleting
	  }
	  else
	  {//Any other input
	    std::cout << "That's an invalid option" << std::endl;
	    //Tell them that's an invalid option
	    stillDeleting = true;
	    //Still deleting
	  }
	}
      }
    }
    else if (strcmp(deleteInput, "year") == 0)
    {//Else if they want to delete by year
      int yearInput = 0;
      std::cout << "What is the year?" << std::endl;
      //Ask the user what year it is
      std::cin >> yearInput;
      //Take in user input
      for (mListIt = mListM->begin(); mListIt != mListM->end();) 
      {//For the database
	if ((*mListIt)->getYear() == yearInput) 
	{//If the input equals an entry in the database
	  int mediaType = (*mListIt)->getType();
	  //Get the type of media
	  if (mediaType == 1) 
	  {//If it's a video game
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	    //Print out the video game
	  }
	  else if (mediaType == 2) 
	  {//Else if it's a movie
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	    //Print out the movie
	  }
	  else if (mediaType == 3) 
	  {//Else if it's music
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	    //Print out the music
	  }
	  std::cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	  //Confirm if they want to delete it
	  char confirmDel;
	  std::cin >> confirmDel;
	  //Take in their input
	  if (confirmDel == 'y') 
	  {//If they say yes
	    delete *mListIt;
	    mListIt = mListM->erase(mListIt);
	    //Delete it
	    stillDeleting = false;
	    //Not deleting anymore
	  }
	  else if (confirmDel == 'n')
	  {//Else if they say no
	    std::cout << "You cancelled the deletion" << std::endl;
	    //Tell them that they cancelled the deletion
	    ++mListIt;
	    stillDeleting = true;
	    //Still deleting
	  }
	  else
	  {//Any other input
	    std::cout << "That's an invalid option" << std::endl;
	    //Tell them that's an invalid option
	    stillDeleting = true;
	    //Still deleting
	  }
	}
      }
    }
    else
    {//Any other input
      std::cout << "That's an invalid option" << std::endl;
      //Tell them that's an invalid option
    }
  }
}

void search(vector <Media*>* mListM) 
{//Search method
  char input[80];
  std::cout << "Do you want to search by title or year?" << std::endl;
  //Ask if they want to search by title or year
  cin.getline(input, 80);
  //Take in their input
  vector<Media*>::iterator mListIt;
  if (strcmp(input, "title") == 0) 
  {//If they want to search by title
    char titleInput[80];
    std::cout << "What is the title?" << std::endl;
    //Ask them for the title
    cin.getline(titleInput, 80);
    //Take in their input
    for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) 
    {//For the database
      if (strcmp((*mListIt)->getTitle(), titleInput) == 0) 
      {//If the input equals an entry in the database
	int mediaType = (*mListIt)->getType();
	if (mediaType == 1) 
	{//If it's a video game
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
		//Print out the video game
	}
	else if (mediaType == 2) 
	{//Else if it's a movie
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
		//Print out the movie
	}
	else if (mediaType == 3) 
	{//Else if it's music
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
		//Print out the music
	}
      }
    }
  }
  else if (strcmp(input, "year") == 0)
  {//Else if they search by year
    int yearInput = 0;
    std::cout << "What is the year?" << std::endl;
    //Ask them for the year
    std::cin >> yearInput;
    //Take in the input
    for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) 
    {//For the database
      if ((*mListIt)->getYear() == yearInput) 
      {//If the input equals an entry in the database
	int mediaType = (*mListIt)->getType();
	if (mediaType == 1) 
	{//If it's a video game
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	  //Print out the video game
	}
	else if (mediaType == 2) 
	{//Else if it's a movie
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	  //Print out the movie
	}
	else if (mediaType == 3) 
	{//Else if it's music
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	  //Print out the music
	}
      }
    }
  }
  else {//Else if it's any other input
    std::cout << "That's an invalid option" << std::endl;
    //Tell the user that's an invalid option
  }
}

void addVG(vector<Media*>*mListM) 
{//Add video game method
  char tempTitle[80];
	//Temporary title
  int tempYear = 0;
	//Temporary year
  char tempPublisher[80];
	//Temporary publisher
  char tempRating = 0;
	//Temporary rating
  std::cout << "What is the title?" << std::endl;
	//Ask for the title
  cin.getline(tempTitle, 80);
	//Take in the user input
  std::cout << "What is the year?" << std::endl;
	//Ask for the year
  cin >> tempYear;
	//Take in the user input
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the publisher?" << std::endl;
	//Ask for the publisher
  cin.getline(tempPublisher, 80);
	//Take in the user input
  std::cout << "What is the rating?" << std::endl;
	//Ask for the rating
  std::cin >> tempRating;
	//Take in the user input
  mListM->push_back(new VideoGame(tempTitle, tempYear, tempPublisher, tempRating));
	//Push a new video game back to the database
}

void addMU(vector<Media*>*mListM) 
{//Add music method
  char tempTitle[80];
	//Temporary title
  int tempYear = 0;
	//Temporary year
  char tempArtist[80];
	//Temporary artist
  float tempDuration = 0.0;
	//Temporary duration
  char tempPublisher[80];
	//Temporary publisher
  std::cout << "What is the title?" << std::endl;
	//Ask for the title
  cin.getline(tempTitle, 80);
	//Take in user input
  std::cout << "What is the year?" << std::endl;
	//Ask for the year
  std::cin >> tempYear;
	//Take in user input
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the artist?" << std::endl;
	//Ask for the artist
  cin.getline(tempArtist, 80);
	//Take in user input
  std::cout << "What is the duration?" << std::endl;
	//Ask for the duration
  std::cin >> tempDuration;
	//Take in user input
  std::cout << "Who is the publisher?" << std::endl;
	//Ask for the publisher
  cin.getline(tempPublisher, 80);
	//Take in user input
  mListM->push_back(new Music(tempTitle, tempYear, tempArtist, tempDuration, tempPublisher));
	//Add a new music to the database
}

void addMO(vector<Media*>*mListM) 
{//Add movie method
  char tempTitle[80];
	//Temporary title
  int tempYear = 0;
	//Temporary year
  char tempDirector[80];
	//Temporary director
  float tempDuration = 0.0;
	//Temporary duration
  int tempRating = 0;
	//Temporary rating
  std::cout << "What is the title?" << std::endl;
	//Ask the user for the title
  cin.getline(tempTitle, 80);
	//Take in the user input
  std::cout << "What is the year?" << std::endl;
	//Ask the user for the year
  cin >> tempYear;
	//Take in the user input
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the director?" << std::endl;
	//Ask for the director
  cin.getline(tempDirector, 80);
	//Take in the user input
  std::cout << "What is the duration?" << std::endl;
	//Ask for the duration
  cin >> tempDuration;
	//Take in the user input
  std::cout << "What is the rating?" << std::endl;
	//Ask for the rating
  cin >> tempRating;
	//Take in the user input
  mListM->push_back(new Movie(tempTitle, tempYear, tempDirector, tempDuration, tempRating));
	//Add a new music to the database
}

int main() 
{//Main method
  char input[80];
  char addInput[80];
  bool running = true;
	//For the while still running loop
  vector<Media*>mList;
  vector<Media*>*mListM = &mList;
	//Vector for all the methods
  while (running == true) 
  {//While it's still running
    std::cout << "Do you want to add, search, delete or quit? (ADD/SEARCH/DELETE/QUIT)" << std::endl;
	  //Ask if they want to add, search, delete, or quit
    cin.getline(input, 80);
	  //Take in the user input
    if (strcmp(input, "add") == 0) 
    {//If they said add
      std::cout << "Do you want to add a video game, a movie, or music?" << std::endl;
	    //Ask if they want to add a video game, a movie, or music
      cin.getline(addInput, 80);
	    //Take in the user input
      for (int i = 0; i < strlen(addInput); i++) 
      {//For the user input
      	addInput[i] = tolower(addInput[i]);
	      //Make everything lowercase
      }
      if (strcmp(addInput, "video game") == 0) 
      {//If the user wants to add a video game
	addVG(mListM);
	      //Call the add video game method passing in the vector
	cin.clear();
	cin.ignore(999, '\n');
      }
      else if (strcmp(addInput, "movie") == 0) 
      {//If the user wants to add a movie
	addMO(mListM);
	      //Call the add movie method passing in the vector
	cin.clear();
	cin.ignore(999, '\n');
      }
      else if (strcmp(addInput, "music") == 0) 
      {//If the user wants to add music
	addMU(mListM);
	      //Call the add method passing in the vector
	cin.clear();
	cin.ignore(999, '\n');
      }
      else 
      {//Else if it's any other input
	std::cout << "That's an invalid option" << std::endl;
	      //Tell the user that that's an invalid option
      }
    }
    else if (strcmp(input, "search") == 0) 
    {//If they want to search
      search(mListM);
	    //Call the search method passing in the vector
      cin.clear();
      cin.ignore(999, '\n');
    }
    else if (strcmp(input, "delete") == 0) 
    {//Else if they want to delete
      deleteMedia(mListM);
	    //Call the delete method passing in the vector
      cin.clear();
      cin.ignore(999, '\n');
    }
    else if (strcmp(input, "quit") == 0)
    {//Else if they want to quit
      running = false;
	    //Quit
    }
    else {//Any other input
      std::cout << "That's an invalid option" << std::endl;
	    //Tell the user that that's an invalid option
    }
  }
}
