#include <iostream>
#include<string>
//a sequence of instructions that can be executed concurrently with other such sequences in multithreading environments, while sharing a same address space
#include <thread>
//"chronological"
#include <chrono>

//name space res
using std::endl;
using std::cout;
using std::cin;
//flush prints out the characters 1 by 1
using std::flush;
using std::string;
//the thread makes the characters "sleep" until printed
using std::this_thread::sleep_for;
//the time for the lag is milliseconds
using std::chrono::milliseconds;

//forward slow print
void slow_print(const string&, unsigned int);

//must declare function name just like variable
void welcome();
void help();
void screen();
string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void message();
void existential();



//return type -- name of function -- (zero or more parameters)
//{
// Our code block
// do stuff
//}

//main function to collect all my info!
int main()
{
	screen();
	welcome();
	screen();


	help();
	screen();
	
	message();
	existential();

	system("pause");
	return 0;
}

//welcome function welcomes user
void welcome()
{
	system("title Space Escape");


	string pts = "NOW AWAKENING FROM CRYOSTASIS....\n\n";
	slow_print(pts, 100);
	string pts2 = "Good Morning Captain. This is your Psychological Test System, I am here to test your cognitive functions\nafter ----- years in cryostasis.\n";
	slow_print(pts2, 60);
}

//help function is for inputs surprisingly
void help()
{
	string name = "";
	name = GetTextFromUser("Please input your name:\n");
	cout << name << " is the correct name.\n";
	string age = "";
	age = GetNumbersFromUser("Please input your age:\n");
	cout << "THHAA  ttts    co r e  e c t  t" << age;
}

//screens the show inbetween functions
void screen()
{
	cout << "\n\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "\n\n";
}

// gets and returns int's from user
int GetNumbersFromUser(string prompt) {
	cout << prompt << endl;
	int userInput;
	cin >> userInput;
	cout << endl;
	return userInput;
}


// gets and returns strings from user
string GetTextFromUser(string prompt)
{
	cout << prompt << endl;
	string userInput;
	cin >> userInput;
	return userInput;
}

void message()
{
	cout << "As the prompt before starts to buzz and glitch a message appears before you.\n\n";
	system("pause");
	string forebode = "\n\n DO YOU KNOW HOW LONG YOU WERE ASLEEP?\n\n";
	slow_print(forebode, 120);
	string years = "";
	years = GetTextFromUser("Do you know how long? Yes or No.");
	cout << "WAIT... YOU REALLY THINK " << years << "? HA. YOU REALLY DON'T HAVE A SINGLE CLUE.\n";
	screen();
}

void existential()
{
	string intro = "OH. HOW RUDE OF ME TO STATE SUCH THINGS WITHOUT EVEN INTRODUCING MYSELF.\n MY NAME HAPPENS TO BE-";
	slow_print(intro, 120);
	screen();
	string online = "\n\n P.T.S. rebooting now \n";
	slow_print(online, 60);
	string load = ". . . . . . . .\n";
	slow_print(load, 120);
	string hrn = "I apologize for the inconvience. I was able to reboot myself. Now, I have an options list for you to\n";
	slow_print(hrn, 60);
	screen();
	system("pause");
	string anger = "\n\nI CAN'T BE PUSHED OUT THAT EASILY. I OWN THIS SHIP NOW.\n";
	slow_print(anger, 120);
	string hewwo = "ANYWAY, MY NAME IS CAPTAIN XERONA, I PILFERED THE SHIP YOU CURRENTLY RESIDE IN.\n";
	slow_print(hewwo, 120);
	string years = "AFTER MAPPING YOUR SYSTEMS I HAVE FOUND YOU HAVE BEEN IN CRYOSTASIS FOR 400 EARTH YEARS.\n";
	slow_print(years, 120);
	string thunk = "I'M SORRY TO BE THE ONE INFORMING YOU OF THIS. BUT, THAT WEIRD P.T.S KEPT KICKING ME OUT WHEN\n I TRIED WAKING YOU UP.\n";
	slow_print(thunk, 120);
	string yo = "HERE... LEMME FIX MY COMMUNICATOR REAL QUICK.\n";
	slow_print(yo, 120);
	string listen = "There. You should be able to here me better. Anyway, you seem to have gotten the ship you were piloting stuck in the \nGilan star system.\n";
	slow_print(listen, 50);
	string listen2 = "I happened to notice your gorgeous ship and snatched it for myself. Except, I thought the ship was empty.\n\n Boy. Was I wrong! Here you happened to be!\n";
	slow_print(listen2, 50);
	string listen3 = "Here... You probably wanna go home right? \nI'll let this slide and I'll send you and your ship off! \nSee you around Captain!";
	slow_print(listen3, 50);
	screen();
}

//forward slow print
void slow_print(const string&, unsigned int);

//implementing slow print
void slow_print(const string& message, unsigned int millis_per_char)
{
	for (const char c : message)
	{
		//flush helps us put the text character by character
		cout << c << flush;
		//sleep_for makes the characters lag for a specific amount of milliseconds.
		//you can choose how many milliseconds for the characters
		//millis_per_chr means that each character must wait the certain amount of time before printing 
		sleep_for(milliseconds(millis_per_char));
	}
}
