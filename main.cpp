//
// Created by lola on 4/24/23.
//
#include <fstream>
#include <iostream>
#include "main.h"
using namespace std;

void print_menu(){
    char h;
    cout<< "welcome to the women in the workplace simulator, press any key to continue" <<endl;
    cin >> h;
    scenario_actually();
}
void scenario_actually(){
    cout<< "The interviewer says you “actually” have a fantastic resume."<<endl;
    cout << "1.Brush it off." << endl;
    cout << "2. Ask what they meant." << endl;
    cout << "3. Ask if they would say that to a man. " << endl;

    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            scenario_pat();
            break;
        case 2:
           scenario_excuse();
            break;
        case 3:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_excuse() {
    cout<< endl;
    cout << "They give an excuse." << endl;
    cout << "1.Let it go." << endl;
    cout << "2. Press further." << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

// Process the user's choice
    switch (choice) {
        case 1:
            scenario_pat();
            break;
        case 2:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_pat(){
    cout<< endl;
    cout<< "Benefit package includes 6 weeks maternity but no paternity."<<endl;
    cout << "1. Ignore it, it doesn’t affect you." << endl;
    cout << "2. Inquire about it." << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            scenario_hire();
            break;
        case 2:
            scenario_wives();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_hire(){
    cout<< endl;
    cout<< "You’re hired! During your first week you overhear your male coworkers objectifying someone,"
           " it is unclear if it is another coworker or someone unrelated to the company."<<endl;
    cout << "1. Speak up." << endl;
    cout << "2. Walk into the room, making your presence known." << endl;
    cout << "3. Walk away. " << endl;

    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            cout<< endl;
            cout<< "You continue your position for months but aren’t put up for a promotion because you’re “hard to work with”." << endl;
            break;
        case 2:
            cout<< endl;
            cout << "Conversation stops." << endl;
            scenario_promo();
            break;
        case 3:
            cout<< endl;
            cout << "Men continue objectifying comments." << endl;
            scenario_promo();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_wives(){
    cout<< endl;
    cout<< "HR explains that most employee's wives stay at home so they don’t find it necessary."<<endl;
    cout << "1. Brush it off, it doesn’t affect you." << endl;
    cout << "2. Explain that this is sexist." << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            scenario_hire();
            break;
        case 2:
            scenario_policy();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_policy(){
    cout<< endl;
    cout << "They explain they will make exceptions to the policy if requested." << endl;
    cout << "1. This is satisfactory." << endl;
    cout << "2. Make the claim that this is an obstacle, and it may not be known that the policy is flexible." << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

// Process the user's choice
    switch (choice) {
        case 1:
            scenario_hire();
            break;
        case 2:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_promo(){
    cout<< endl;
    cout<< "A few months go by, and you are put up for a promotion. "
           "However, your female POC coworker is not up for the promotion even though she has been with "
           "the company longer and you’ve been similarly successful in your roles."<<endl;
    cout << "1. Speak up and say that you think your coworker should be nominated." << endl;
    cout << "2. Inquire about your coworker not being nominated." << endl;
    cout << "3. Just go with the flow.  " << endl;

    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
           scenario_nopromo();
            break;
        case 2:
            cout<<endl;
            cout<< "Your manager says they were more impressed by you." << endl;
            scenario_nopromo();
            break;
        case 3:
            scenario_men();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_nopromo(){
    cout<< endl;
    cout<< "Neither of you end up getting the promotion but the man who did is now trying "
           "to delegate his new responsibilities to you."<<endl;
    cout << "1. Just do them. " << endl;
    cout << "2.Tell him that it’s his responsibility not yours. " << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            break;
        case 2:
            scenario_innocence();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_men(){
    cout<< endl;
    cout<< "You get the promotion but now all of your peers are men, and you feel like your voice isn’t heard nor respected. "<<endl;
    cout << "1. Have your coworker that wasn’t nominated work as your assistant. " << endl;
    cout << "2. You speak up less and hold your tongue more.  " << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            cout<< endl;
            cout<< "Now she is in a promoted position but has very limited upward mobility." << endl;
            break;
        case 2:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void scenario_innocence(){
    cout<< endl;
    cout<< "He claims innocence and praises your attention to detail but doesn’t rescind his request. "<<endl;
    cout << "1. Just do it. " << endl;
    cout << "2. Refuse. " << endl;

    int choice;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Process the user's choice
    switch (choice) {
        case 1:
            break;
        case 2:
            cout<< endl;
            cout<< "You continue your position for months but aren’t put up for a promotion because you’re “hard to work with”." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
};
void the_end(){
    cout<< endl;
    cout<< "The end. You lost. There was no way for you to win so don’t worry. "
           "this game wasn’t built for you so all of your actions either hurt yourself or others. "
           "A perfect system of oppression makes the oppressed oppress themselves in a never-ending feedback loop. "
           "We can make small changes in our own sphere of life but sometimes the fear of retaliation for speaking out "
           "is larger and more looming than the reward, and advocating for yourself and not others does nothing to enact change. "
           "This is why intersectional feminism is needed to create lasting inclusive change. The theory of intersectionalism "
           "tells us that all oppression is interconnected and that is why those who hold some oppressive identities are not exempt "
           "from upholding oppression just because they also experience it. You did your best, but this game is not for you, and "
           "neither is an oppressive society. "<< endl;
};
int main(){
    print_menu();
    the_end();
}
