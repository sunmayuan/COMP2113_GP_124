# COMP2113_GP_124

//
To identify a text-based game type that you would like to implement. Or design your own game.
To decide what features your proposed text-based game would have.
//

Team members:
Chen Kexin  3035773113
Sun Mayuan  3035767255

Description of our game:


Game rules:


When the player's health bar is empty, the game will be lost. When the player reaches the highest level, the game will be won and one of the endings will be seen.


A list of features that we plan to implement:
1. Update and show the player's current health bar and level. 
2. Depending on the player's choice, different situations will be encountered. For example, a player may need to challenge a wizard or play a poker with a gambler.
3. The player may encounter random game set every time. For example, the computer need to generate random cards in a poker game.
4. Stores the player's game state so that they can choose to continue last game.

Coding elements to support our features:
1. Generation of random game sets or events 
    - Support feature 3
2. Data structures for storing game status
    - A 2D array to store the map
    - Two integers to store the health bar and level
3. Dynamic memory management
    - Update the health bar and level
    - Stores each choice of the player and updates the player's current position
4. File input/output (e.g., for loading/saving game status)
    - Get the player's input and store their names in a file for checking
    - Save the latest game status
5. Program codes in multiple files
    - Easy to call different sub-stories
