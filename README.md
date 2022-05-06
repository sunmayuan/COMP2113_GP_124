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


When the player's [house credit] is empty, the game will be lost. When the player reaches the highest level, the game will be won and one of the endings will be seen.


List of features and coding elements to support them:
1. Generation of random game sets or events - The player will be randomly assigned to one of the four Houses according to their birthdays. Also, the player may encounter a random game set on most days, like random cards in the game with gambler, dargon's HP and player's power in fighting dragons, the random integer for the player to guess in psycho class.
2. Data structures for storing game status - A struct named [Wizard] is defined to store the information of players. In the struct, three integers used to store [magic power], [House credit], and [day]; two strings used to store [name] and [House]. 
3. Dynamic memory management - Use pointers to create and access the sturct [Wizard]. Update [magic power] and [House credit] according to the player's choices every day. 
4. File input/output - Every time a new player comes, a file named "Player_name.txt" will be created. The players' information and latest game status will be saved in a file when entering [Quit], so that the player can continue the last game next time by file input.
5. Program codes in multiple files - The main function and several self-defined functions containing different sub-stories are written in seperate files. There is a function.cpp to define functions and a function.h to save functions. Finally, the [Makefile] run all functions together.
