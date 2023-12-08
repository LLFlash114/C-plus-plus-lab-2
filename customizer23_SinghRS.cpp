/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: customizer23_SinghRS
// Summary: Uses a user interface to prompt user to redesign features of a teddy bear ASCII art 
// Reference: chris.com (https://asciiart.website/index.php?art=animals/bears%20(teddybears))
*-------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Initial teddy bear ASCII art 
	string ears = "         __	        __\n"
				  "        /_ \\_.--\"\"\"--._/ _\\\n";
	string eyebrows = "        \\ )   _     _   ( /\n";
	string eyes = "         |   (o)___(o)   |";
	string teddy_name = "		 --- [Unnamed teddy]\n";
	string nose = "         |      \\_/      |\n"
				  "         \\       |       /\n";
	string mouth = "          \\     <Y>     /\n";
	string chin = "           \\_    _    _/\n";
	string collar = "          ___)==( )==(___   <---------- Give the teddy a new collar design!  \n";
	string tie = "        /'      //\\      `\\\n"
				 "       /       // \\\\       \\\n"
				 "      /   |   |/   \\|   |   \\\n";
	string hands = "     /,_ /|             |\\ _,\\\n"
				   "    ((_// |             | \\\\_))\n"
				   "     `-'  |             |  `-'\n";
	string body = "          |             |\n"
				  "          |             |\n"
				  "          |      _      |\n";
	string legs = "         /      / \\      \\\n"
				  "        /      /   \\      \\\n"
				  "       /      /     \\      \\\n"
				  "     _/      /       \\      \\_\n";
	string feet = "    ( _____ /         \\ _____ )\n"
				  "     '-----'           `-----'\n";
				  
	string teddy_bear = ears + eyebrows + eyes + teddy_name + nose + 
		mouth + chin + collar + tie + hands + body + legs + feet;
				  
	// Storing user customization options
	string new_collar, new_tie_top, new_tie_middle, new_tie_bottom,
		belt, new_teddy_name;
				  
				  
	// Customizing collar with user input 
	cout << teddy_bear;	  // Outputting initial ASCII art
	cout << "\n\nEnter a new design for the collar (tip: use exactly 7 characters, spaces count as characters):\n";
	getline(cin,new_collar);
	
	collar = "          ___)" + new_collar + "(___\n";
	tie = "        /'      //\\      `\\     <---------- Teddy is sad now, he also wants a new tie.\n"
		  "       /       // \\\\       \\\n"
		  "      /   |   |/   \\|   |   \\\n";
	mouth = "          \\    -----    /\n";
	teddy_bear = ears + eyebrows + eyes + teddy_name + nose + 
		mouth + chin + collar + tie + hands + body + legs + feet;
		
	cout << "\n------------------------------------------------------------------";
	cout << "\n\n" << teddy_bear;	// Outputting teddy bear with new collar
	
	
	// Customizing tie with user input
	cout << "\nEnter a design for the top of the tie (tip: use exactly 3 characters, spaces count as characters):\n";
	getline(cin,new_tie_top);
	cout << "\nEnter a design for the middle of the tie (tip: use exactly 6 characters, spaces count as characters):\n";
	getline(cin,new_tie_middle);
	cout << "\nEnter a design for the bottom of the tie (tip: use exactly 7 characters, spaces count as characters):\n";
	getline(cin,new_tie_bottom);
	
	tie = "        /'      " + new_tie_top + "      `\\\n"
		  "       /       " + new_tie_middle + "      \\\n"
		  "      /   |   " + new_tie_bottom + "   |   \\\n";
	mouth = "          \\    \\___/    /\n";
	body = "          |             |\n"
				  "          |             |   <----------- Teddy is happy now, but give him a belt!\n"
				  "          |      _      |\n";
	teddy_bear = ears + eyebrows + eyes + teddy_name + nose +
		mouth + chin + collar + tie + hands + body + legs + feet;
		
	cout << "\n------------------------------------------------------------------";
	cout << "\n\n" << teddy_bear;	// Outputting teddy bear with new tie 
	
	
	// Customizing belt with user input
	cout << "\nEnter a design for the belt (tip: use exactly 13 characters, spaces count as characters):\n";
	getline(cin,belt);
	
	body = "          |             |\n"
		   "          |" + belt + "|\n"
		   "          |      _      |\n";
	teddy_name = "		 --- [Unnamed teddy]  <------- Give the teddy a name!\n";
	teddy_bear = ears + eyebrows + eyes + teddy_name + nose +
		mouth + chin + collar + tie + hands + body + legs + feet;
	
	cout << "\n------------------------------------------------------------------";
	cout << "\n\n" << teddy_bear;	// Outputting teddy bear with new belt 
	
	
	// Customizing teddy name with user input
	cout << "\nEnter a name for the teddy:\n";
	getline(cin,new_teddy_name);
	
	teddy_name = "		 --- [" + new_teddy_name + "]\n";
	eyebrows = "        \\ )   \\     /   ( /\n";
	mouth = "          \\    =====    /\n";
	collar = "          ___)" + new_collar + "(___           " + new_teddy_name + " is ready for battle! :)\n";
	hands = "     /,_ /|  .........  |\\ _,\\    |\n"
			"    ((_// | ........... | \\\\_()===|=======================>\n"
			"     `-'  | ........... |  `-'    |\n";
	body = "          |.............|\n"
		   "          |" + belt + "|\n"
		   "          |      _      |\n";
	teddy_bear = ears + eyebrows + eyes + teddy_name + nose +
		mouth + chin + collar + tie + hands + body + legs + feet;
		
	cout << "\n------------------------------------------------------------------";
	cout << "\n\n" << teddy_bear;  // Outputting final teddy bear design
	cout << "\n\nAwesome customization choices!";
	
	return 0;
}
