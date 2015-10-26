#ifndef MAP_H
#define MAP_H

/**
 *@class Map
 *@brief Enables the concepts of position and movement.
 */
 
class Map
{
private:
    char** MapContents;
    char* FileLocation;
    void SetMap();
    int mapSizeX;
    int mapSizeY;
public:
  /**
   *@ brief Destructor for class map.
   */
    ~Map();
    /**
     *@ brief Constructor that takes a filename for reading in map
     */
    Map(char*);
    /**
     *@ brief Function to display the map in the terminal.
     */
    void printMap();
    /**
     *@ brief Function to move a specific tile to another location
     *@return bool containing whether the movement was successful.
     */
    bool Move(int,int,int,int);
    /**
     *@ brief
     */
    void setMap();
    /**
     *@ brief Getter function for maximum x bounds.
     *@ return int containing maximum x value;
     */
    int getMapSizeX();
    /**
     *@ brief Getter function for maximum y bounds.
     *@ return int containing maximum y value;
     */
    int getMapSizeY();
    /**
     *@ brief Function to retreive a specific char from the map.
     *@ char containing the tile at given coordinates
     */
    char getMapTile(int x, int y);
    /**
     *@ brief Function to set the tile at specific coordinates.
     */
    void setMapTile(char c, int x, int y);


};
#endif
