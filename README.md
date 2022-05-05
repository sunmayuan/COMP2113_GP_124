# COMP2113_GP_124

//
To identify a text-based game type that you would like to implement. Or design your own game.
To decide what features your proposed text-based game would have.
//

Team members:
Chen Kexin  3035773113
Sun Mayuan  3035767255

Description of our game:

Someday when a COMP2113 student was working with his terminal, some magical events occurred...

So, the following instructions will regulate you to restore the situation and start a brand new adventure of your own. 
In the beginning, you will find out some magical words shown on your screen. You should choose to [enter] this mysterious world and explore more or [refuse] it and continue to be a muggle, not knowing magic. Then someone will ask you about the [date] at that moment, based on that you will have a different experience. If the day you come in is odd, you will be [randomly] arranged based on the [date] of your arrival to have [lessons] in the magnificent and legendary Hogwarts castle. Each [lesson] would have its unique stories. Also, you will be [tested] too. If that day is even, you will have some [field trip] inside or nearby the castle.
Along with magical life is your [magical power] and house [credits]. Qualified [magical power] is the [requirement] of your graduation. However, if your house is [deducted] a certain amount of points by what you have done, you would have to [stop] your school life immediately. In this wonderful magical world, you will encounter various situations. You must use your bravery and knowledge to make proper choices, no matter in [tests] in class or something happens in the [field trip]. The result of these events would influence the two measurements, [magical power] and house [points], we talked about before. We are here waiting for your successful graduation!


Game rules:


When the player's health bar is empty, the game will be lost. When the player reaches the highest level, the game will be won and one of the endings will be seen.


List of features and coding elements to support them:
1. Generation of random game sets or events - The player will be randomly assigned to one of the four Houses using their lucky numbers as the random seed. Also, the player may encounter a random game set every time. For example, the computer needs to generate random cards in a poker game. 
2. Data structures for storing game status - Two integers used to store the level of magic power and the points earned for the House; Linked list used to store each day information; And arrays used to store scenarios and related options. 
3. Dynamic memory management - Update the level of magic power and the points earned for the House according to the player's choices; The linked list for storing each day's choice is a dynamic data structure that needs to be updated every round. 
4. File input/output - Store the players' names in a file for checking; Save the latest game status so that the player can choose to continue the last game next time. 
5. Program codes in multiple files - Multiple files contain different sub-stories for easy calling when the player makes choices, like Diagon_Alley, Gringotts, and Forbidden_Forest; Multiple files contain various situations the players may encounter in classes.
