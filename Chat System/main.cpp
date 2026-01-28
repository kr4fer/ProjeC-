#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    string email, password, choice, userInput, userInput1, userInput2, userInput3, userInput4;
    char chatmate, choose;

    cout << "\t\t\t\t\tWelcome to Chat SunnYSTEM " << endl;
    cout << "_______________________________________________________________________________________________________________________" << endl << endl;

Again:
    cout << "Enter Email Address: ";
    cin >> email;
    cout << "Enter Password: ";
    cin >> password;

    if (email == "sanieljan@gmail.com" && password == "sani")
    {
        cout << "Initializing...";
        system("pause");
        system("cls");
    }
    else
    {
        cout << "Invalid email or password. Please try again.\n";
        goto Again;
    }
    cout << "Welcome, Bimby!!\n";

Again2:
    cout << "Users Online:\nA. Krafer\nB. Kyle\n\n";
    cout << "Users Offline:\nC. Nyx\nD. Brent\n\n";
    cout << "Select a Chatmate or Press (x) to Exit: ";
    cin >> chatmate;
    chatmate = tolower(chatmate);

    switch (chatmate)
    {

    // Krafer
    case 'a':
        cin.ignore();
        cout << "Krafer: So, you want to chat?\n";
    KraferAgain:
        cout << "Krafer: (Press (x) to Exit/Stop Chatting or (t) to display available topics)\n";
        cout << "User: ";
        getline(cin, userInput);

        if (userInput.find("Yes") != string::npos || userInput.find("Sure") != string::npos || userInput.find("Yeah") != string::npos || userInput == "t" || userInput == "T")
        {
            cout << "Krafer: I'm not really inclined towards specific topics, but if you insist, I can give you fun facts about science, give you a song recommendations, or programming. Your call.\nUser: ";
            getline(cin, userInput1);
            if (userInput1.find("FS") != string::npos || userInput1.find("fs") != string::npos)
            {
                //Fun facts 
                cout << "Krafer: 8 billion people? Nope, there are 10 quintillion ants!.\nUser: ";
                getline(cin, userInput2);
                cout << "Krafer: Sun trip in 8 minutes? Light travels at 299,792,458 m/s!.\nUser: ";
                getline(cin, userInput3);
                cout << "Krafer: Am I too straight forward?. I just don't really want to talk to you..\nUser: ";
                getline(cin, userInput4);
            }
            else if (userInput1.find("Song Reco") != string::npos || userInput1.find("song reco") != string::npos)
            {
                //Song Recommendation
                cout << "Krafer: tkm by boy pablo\nUser: ";
                getline(cin, userInput2);
                cout << "Krafer: I always wanna die (sometimes) by 1975\nUser: ";
                getline(cin, userInput3);
                cout << "Krafer: Last song i will recommend for you is Sunsetz by Cigarette After Sex\nUser: ";
                getline(cin, userInput4);
            }
            else if (userInput1.find("Programming") != string::npos || userInput1.find("programming") != string::npos)
            {
                //Programming
                cout << "Krafer: Did you know that using a goto is paradoxical hero it Can be messy spaghetti, but also a knight cutting through nested loops like Excalibur!.\nUser: ";
                getline(cin, userInput2);
                cout << "Krafer: Alternatives first: Consider break, return, or restructuring before unleashing the spaghetti monster always remember, goto is a tool, not a villain. Master it, and your code will sing!.\nUser: ";
                getline(cin, userInput3);
                cout << "Krafer: <Warning: System Overload>\nKrafer: <Error: sf230458>\nKrafer: <Commencing Shutdown>";
                for (int y = 1; y <= 3; y++)
                {
                    for (int counter = 1; counter <= counter * 2 - 1; counter++)
                    {
                        cout << ".";
                    }
                    cout << endl;
                }
                cout << "Krafer: Damn, you're still here.\nKrafer: I guess I should really commence shutdown.";
                getline(cin, userInput4);
            }
            else
            {
                cout << "Krafer: I don't know what you're talking about.";
            }
        }
        else if (userInput == "X" || userInput == "x" || userInput.find("No") != string::npos || userInput.find("no") != string::npos)
        {
            //Proceed to exit
            cout << "Krafer:Bye, I guess.\n";
            goto Exit;
        }
        else
        {
            cout << "Krafer: I don't know what you're talking about.";
        }
        goto KraferAgain;
        break;

    // Kyle 
    case 'b':
        cin.ignore();
        cout << "Kyle: sup, chat! wanna talk something about fundamentals of solving topics in science field? I mean you don't have a choice since this is my interest and where I can say I am good in.\n";
    KyleAgain:
        cout << "(Kyle: Press (x) to Exit/Stop Chatting or (t) to display available topics)\n";
        cout << "User: ";
        getline(cin, userInput);
        if (userInput.find("Yes") != string::npos || userInput.find("Sure") != string::npos || userInput.find("Yeah") != string::npos || userInput == "t" || userInput == "T")
        {
            cout << "Kyle: Lol. Just trust me. These are the facts that I am going to tell you, just pick one; Stoichiometry, Thermodynamics, and Carnot Cycle. Your pick!\nUser: ";
            getline(cin, userInput1);
            if (userInput1.find("Stoichiometry") != string::npos || userInput1.find("stoichiometry") != string::npos)
            {
                // Stoichiometry
                cout << "Kyle: Did you know that the word 'stoichiometry' comes from the Greek words 'stoicheion' (element) and 'metron' (measure).Quantum pogo sticks, my friend! They can simultaneously bounce and not bounce. Mind-blowing, huh?\nUser: ";
                getline(cin, userInput2);
                cout << "Kyle: The balanced equation for the combustion of methane is CH4 + 2O2 -> CO2 + 2H2O. This means that one molecule of methane reacts with two molecules of oxygen to produce one molecule of carbon dioxide and two molecules of water.\nUser: ";
                getline(cin, userInput3);
                cout << "Kyle: Take note this one, stoichiometry is used in various fields, including cooking, medicine, and environmental science. For example, bakers use stoichiometry to ensure their cakes rise properly, while pharmacists use it to calculate the correct dosage of medication.\nUser: ";
                getline(cin, userInput4);
                cout << "Kyle: Hold up! molecules are not balanced and it is beeping. It needed to balanced and convert all the moles to a exact and accurate amount. Catch you in the bouncy multiverse!\n";
                goto Exit;
            }
            else if (userInput1.find("Thermodynamics") != string::npos || userInput1.find("thermodynamics") != string::npos)
            {
                // Thermodynamics
                cout << "Kyle: Hmm. So first law of thermodynamics states that energy cannot be created or destroyed, only converted from one form to another.\nUser: ";
                getline(cin, userInput2);
                cout << "Kyle: The second law of thermodynamics states that the entropy of a closed system tends to increase over time.\nUser: ";
                getline(cin, userInput3);
                cout << "Kyle: Did you know that the efficiency of a heat engine is limited by the Carnot cycle. This theoretical cycle describes the maximum efficiency that a heat engine can achieve.!\nUser: ";
                getline(cin, userInput4);
                cout << "Kyle: Uh-oh! The working fluid expands at a constant temperature, absorbing heat from the hot reservoir. Catch you on the flip side!\n";
                goto Exit;
            }
            else if (userInput1.find("CC") != string::npos || userInput1.find("cc") != string::npos)
            {
                // Carnot Cycle
                cout << "Kyle: The efficiency of the Carnot Cycle is limited by the temperatures of the two reservoirs. The higher the temperature of the hot reservoir and the lower the temperature of the cold reservoir, the more efficient the cycle will be.\nUser: ";
                getline(cin, userInput2);
                cout << "Kyle: Another, The Carnot Cycle is a theoretical cycle. This means that it cannot be achieved in practice. However, it provides a useful model for understanding the efficiency of heat engines.\nUser: ";
                getline(cin, userInput3);
                cout << "Kyle: Fun facts: The Carnot Cycle is used in a variety of applications. These include power generation, refrigeration, and air conditioning.\nUser: ";
                getline(cin, userInput4);
                cout << "Kyle: Emergency fixing time! My system is crashing becasue of heat. Must catch them before they reach higher the temperature of the hot reservoir. Catch you in the garage!\n";
                goto Exit;
            }
            else
            {
                cout << "Kyle: Hold up! Did we just step into a parallel brunch universe? I got distracted by the smell of system bacon. What were we chatting about?\nUser: ";
                getline(cin, userInput4);
                cout << "Kyle: Oh well, let's follow the trail of of heat transfer where it leads!\n";
            }
        }
        else if (userInput == "X" || userInput == "x" || userInput.find("No") != string::npos || userInput.find("no") != string::npos)
        {
            // Proceed to exit
            cout << "Kyle: Farewell, buddy! Remember to use fan on your laptop so we can have a longer conversation!\n";
            goto Exit;
        }
        else
        {
            cout << "Kyle: Hold on, I got lost in the labyrinth of my thoughts. Ever heard of molar mazes? Never mind, let's explore the mystical realm of solving chemistry problems!\n";
        }
        goto KyleAgain;
        break;
    // Nyx
    case 'c':
        cout << "Sorry Nyx is not online as of the moment. \n";
        cout << "Do you want to chat with someone else? [Yes/No]";
        cin >> choice;

        if (choice == "Yes" || choice == "yes")
        {
            goto Again2;
        }
        else if (choice == "No" || choice == "no")
        {
            goto Exit;
        }
        break;
    // Brent
    case 'd':
        cout << "Sorry Brent is not online as of the moment. \n";
        cout << "Do you want to chat with someone else? [Yes/No]";
        cin >> choice;

        if (choice == "Yes" || choice == "yes")
        {
            goto Again2;
        }
        else if (choice == "No" || choice == "no")
        {
            goto Exit;
        }
        break;
    // Exit
    case 'x':
        goto Exit;
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
        goto Again2;
    }

Exit:
    cout << "Do you want to (x)Exit the Chat System or (s)Select a different ChatBot?";
    cin >> choose;

    if (choose == 'x' || choose == 'X')
    {
        cout << "Thanks for using the Chat System. Please come back again.\n";
    }
    else if (choose == 's' || choose == 'S')
    {
        cout << "Redirecting to ChatBot selection...\n";
        goto Again2;
    }
    else
    {
        cout << "Invalid option. Please try again.\n";
        goto Exit;
    }
    return 0;
}