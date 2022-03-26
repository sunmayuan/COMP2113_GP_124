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


List of features and coding elements to support them:
1. Generation of random game sets or events - The player will be randomly assigned to one of the four Houses using their lucky numbers as the random seed. Also, the player may encounter a random game set every time. For example, the computer needs to generate random cards in a poker game. 
2. Data structures for storing game status - Two integers used to store the level of magic power and the points earned for the House; Linked list used to store each day information; And arrays used to store scenarios and related options. 
3. Dynamic memory management - Update the level of magic power and the points earned for the House according to the player's choices; The linked list for storing each day's choice is a dynamic data structure that needs to be updated every round. 
4. File input/output - Store the players' names in a file for checking; Save the latest game status so that the player can choose to continue the last game next time. 
5. Program codes in multiple files - Multiple files contain different sub-stories for easy calling when the player makes choices, like Diagon_Alley, Gringotts, and Forbidden_Forest; Multiple files contain various situations the players may encounter in classes.
