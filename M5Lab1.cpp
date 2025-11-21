// CSC 134
// M5Lab1 - Choose Your Own Adventure
// Yasameen 
// 11/11/2025

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Global variables for story state
bool gun = false;
bool nineoneone = false;
bool tea = false;
bool poop = false;

// Function declarations
void startStory();
void goToBalcony();
void drinkTea();
void useRestroom();
void goToBalconyIntruder();
void drinkTeaIntruder();
void useRestroomIntruder();
void hideInBathroom();
void leaveToBedroomFromRestroom();
void goDownstairsFromBalcony();
void goDownstairsFromHall();
void goToKitchenWeapon();
void goToGarage();
void bedroomHiding();
void getGun();
void call911();
void shootIntruder();
void punchIntruder();
void squeezeEyes();
void grabPlunger();
void grabKnife();
void grabPan();
void grabKettle();
void hideBody();
void call911AfterStab();
void fightBarehand();
void grabScrewdriver();
void grabElectricSaw();
void getInCar();
void grabScissors();
void waitForIntruder();
void useScissors();
void fightHandToHand();
void doNothing();
void dontShootIntruder();
void shootInChest();
void shootInLeg();
void smallWindow();
void stillSmallWindow();
void openFrontDoor();

// Utility function for getting valid input
int getChoice(int maxChoices) {
    string input;
    int choice;
    while (true) {
        cout << "\nEnter your choice (1-" << maxChoices << "): ";
        getline(cin, input);
        try {
            choice = stoi(input);
            if (choice >= 1 && choice <= maxChoices) {
                return choice;
            }
            cout << "Invalid choice. Please enter a number between 1 and " << maxChoices << "." << endl;
        } catch (...) {
            cout << "Invalid input. Please enter a number." << endl;
        }
    }
}

void startStory() {
    cout << "\n=== START ===" << endl;
    cout << "\nIt's close to midnight, and the weather is nice and clear. You're in your bedroom" << endl;
    cout << "upstairs and are about to go to sleep. Before you sleep, you decide to:\n" << endl;
    cout << "1. Go to the balcony and breathe in the fresh air" << endl;
    cout << "2. Go downstairs and drink a cup of tea" << endl;
    cout << "3. Use the bathroom" << endl;
    
    int choice = getChoice(3);
    
    if (choice == 1) {
        goToBalcony();
    } else if (choice == 2) {
        drinkTea();
    } else {
        useRestroom();
    }
}

void goToBalcony() {
    cout << "\n=== GO TO THE BALCONY AND BREATHE IN THE FRESH AIR ===" << endl;
    cout << "\nYou open the balcony doors and step outside to breathe in the fresh air. You look" << endl;
    cout << "around and take in the smell of pine trees and the cold winter air. You look down" << endl;
    cout << "at the white ground covered with soft snow. The snowflakes are falling so slowly" << endl;
    cout << "and elegantly. In the middle of your peace, you hear some rustling, maybe a raccoon" << endl;
    cout << "found its way to your trash can? You look in the direction of the noise... that's" << endl;
    cout << "no raccoon. That's a human. An unknown, tall figure is creeping towards your" << endl;
    cout << "living room window. He breaks and shatters it...\n" << endl;
    cout << "Think quickly, what should you do:\n" << endl;
    cout << "1. Lock your bedroom door" << endl;
    cout << "2. Hide in your bathroom" << endl;
    cout << "3. Go downstairs and confront the intruder" << endl;
    
    int choice = getChoice(3);
    
    if (choice == 1) {
        goToBalconyIntruder();
    } else if (choice == 2) {
        hideInBathroom();
    } else {
        goDownstairsFromBalcony();
    }
}

void drinkTea() {
    tea = true;
    cout << "\n=== GO DOWNSTAIRS AND DRINK A CUP OF TEA ===" << endl;
    cout << "\nYou go downstairs and make a cup of tea. You fill up a kettle and turn it on." << endl;
    cout << "You sit down on the couch and stretch your legs a bit as you wait for the water" << endl;
    cout << "to boil. It's been a hard day today, you can't wait to rest. You close your eyes" << endl;
    cout << "and try to remember the good days. Suddenly, you hear a tap at your window... You" << endl;
    cout << "get up and look... It's hard to see much as it's snowing outside. But something" << endl;
    cout << "stands out from the white frosted land. A black figure peeks out. A man staring" << endl;
    cout << "at you with a hammer in his hand. He swings and shatters the window before you" << endl;
    cout << "can react.\n" << endl;
    cout << "Think quickly, what should you do:\n" << endl;
    cout << "1. Run upstairs back to your bedroom" << endl;
    cout << "2. Go to the kitchen and grab a weapon" << endl;
    cout << "3. Go to your garage" << endl;
    cout << "4. Open your front door and run far far away from your house" << endl;
    
    int choice = getChoice(4);
    
    if (choice == 1) {
        leaveToBedroomFromRestroom();
    } else if (choice == 2) {
        goToKitchenWeapon();
    } else if (choice == 3) {
        goToGarage();
    } else {
        openFrontDoor();
    }
}

void useRestroom() {
    poop = true;
    cout << "\n=== USE THE BATHROOM ===" << endl;
    cout << "\nYou enter the bathroom, you start to wash your face and brush your teeth. You dry" << endl;
    cout << "your face as you finish up. You stare into the mirror, you look tired. The winter" << endl;
    cout << "season has gotten you messed up, though the snow is nice to look at, you still" << endl;
    cout << "miss the bright sunny days. You sit on the toilet and use it. \"I should head to" << endl;
    cout << "bed,\" you think to yourself, but before you can finish that thought, you hear a" << endl;
    cout << "loud crash. A strong, shattering noise from downstairs. It couldn't be, could it?" << endl;
    cout << "Did an intruder break in?\n" << endl;
    cout << "What should you do next:\n" << endl;
    cout << "1. Hide in your bathroom" << endl;
    cout << "2. Leave the bathroom and head to your bedroom" << endl;
    cout << "3. Go downstairs and confront the intruder" << endl;
    cout << "4. Smash your tiny bathroom window and run away" << endl;
    
    int choice = getChoice(4);
    
    if (choice == 1) {
        hideInBathroom();
    } else if (choice == 2) {
        leaveToBedroomFromRestroom();
    } else if (choice == 3) {
        goDownstairsFromHall();
    } else {
        smallWindow();
    }
}

void goToBalconyIntruder() {
    cout << "\n=== LOCK YOUR BEDROOM DOOR ===" << endl;
    cout << "\nYou lock your bedroom door. You hear the intruder downstairs, he's making a lot" << endl;
    cout << "of ruckus.\n" << endl;
    cout << "He might come up soon, what should you do next:\n" << endl;
    cout << "1. Call 911" << endl;
    cout << "2. Get the gun from the drawer" << endl;
    
    int choice = getChoice(2);
    
    if (choice == 1) {
        call911();
    } else {
        getGun();
    }
}

void hideInBathroom() {
    cout << "\n=== HIDE IN YOUR BATHROOM ===" << endl;
    cout << "\nYou decide it's safer to stay inside the bathroom and lock the door. The intruder" << endl;
    cout << "might come upstairs soon... You wish you could call 911, but you forgot your phone" << endl;
    cout << "in the bedroom.\n" << endl;
    cout << "You hear the intruder come upstairs and open your bedroom door... Their footsteps" << endl;
    cout << "creak the floorboards. They stop... You see two feet from the space between the" << endl;
    cout << "bathroom door and the floor. BANG BANG, the intruder starts to smash their body" << endl;
    cout << "against the bathroom door.\n" << endl;
    cout << "You decide to:\n" << endl;
    cout << "1. Smash your tiny bathroom window and run away" << endl;
    cout << "2. Grab the plunger" << endl;
    cout << "3. Go to the bedroom" << endl;
    
    int choice = getChoice(3);
    
    if (choice == 1) {
        stillSmallWindow();
    } else if (choice == 2) {
        grabPlunger();
    } else {
        goDownstairsFromHall();
    }
}

void leaveToBedroomFromRestroom() {
    cout << "\n=== LEAVE THE BATHROOM AND HEAD TO YOUR BEDROOM ===" << endl;
    cout << "\nYou leave the bathroom and head to your bedroom. You lock your bedroom door." << endl;
    cout << "You hear the intruder downstairs; he's making a lot of ruckus.\n" << endl;
    cout << "He might come up soon. What should you do next:\n" << endl;
    cout << "1. Call 911" << endl;
    cout << "2. Get the gun from the drawer" << endl;
    
    int choice = getChoice(2);
    
    if (choice == 1) {
        call911();
    } else {
        getGun();
    }
}

void goDownstairsFromBalcony() {
    cout << "\n=== GO DOWNSTAIRS AND CONFRONT THE INTRUDER ===" << endl;
    cout << "\nYou can't let no intruder man themselves at home without paying rent. You head" << endl;
    cout << "downstairs...\n" << endl;
    cout << "You see the shattered glass all over your clean pristine floors, how dare they" << endl;
    cout << "break your expensive windows. You look around... and you spot them standing" << endl;
    cout << "menacingly next to the window with a hammer.\n" << endl;
    cout << "They take a step towards you, you:\n" << endl;
    cout << "1. Go to the kitchen and grab a weapon" << endl;
    cout << "2. Fight the intruder barehanded" << endl;
    cout << "3. Go to your garage" << endl;
    cout << "4. Open your front door and run far far away from your house" << endl;
    
    int choice = getChoice(4);
    
    if (choice == 1) {
        goToKitchenWeapon();
    } else if (choice == 2) {
        fightBarehand();
    } else if (choice == 3) {
        goToGarage();
    } else {
        openFrontDoor();
    }
}

void goDownstairsFromHall() {
    cout << "\n=== GO DOWNSTAIRS AND CONFRONT THE INTRUDER ===" << endl;
    cout << "\nYou can't let no intruder man themselves at home without paying rent. You head" << endl;
    cout << "downstairs...\n" << endl;
    cout << "You see the shattered glass all over your clean pristine floors, how dare they" << endl;
    cout << "break your expensive windows. You look around... and you spot them standing" << endl;
    cout << "menacingly next to the window with a hammer.\n" << endl;
    cout << "They take a step towards you, you:\n" << endl;
    cout << "1. Go to the kitchen and grab a weapon" << endl;
    cout << "2. Fight the intruder barehanded" << endl;
    cout << "3. Go to your garage" << endl;
    cout << "4. Open your front door and run far far away from your house" << endl;
    
    int choice = getChoice(4);
    
    if (choice == 1) {
        goToKitchenWeapon();
    } else if (choice == 2) {
        fightBarehand();
    } else if (choice == 3) {
        goToGarage();
    } else {
        openFrontDoor();
    }
}

void goToKitchenWeapon() {
    cout << "\n=== GO TO THE KITCHEN AND GRAB A WEAPON ===" << endl;
    cout << "\nYou can't let the intruder one-up you. You can do this. You can fight back.\n" << endl;
    cout << "What do you decide?\n" << endl;
    cout << "1. Grab a knife" << endl;
    cout << "2. Grab a pan" << endl;
    if (tea) {
        cout << "3. Grab the kettle" << endl;
    }
    
    int maxChoices = tea ? 3 : 2;
    int choice = getChoice(maxChoices);
    
    if (choice == 1) {
        grabKnife();
    } else if (choice == 2) {
        grabPan();
    } else if (choice == 3 && tea) {
        grabKettle();
    }
}

void goToGarage() {
    cout << "\n=== GO TO YOUR GARAGE ===" << endl;
    cout << "\nYou quickly go to the garage, you know you'll have more opportunities there.\n" << endl;
    cout << "1. Pick up a screwdriver" << endl;
    cout << "2. Pick up an electric saw" << endl;
    cout << "3. Get in your car" << endl;
    
    int choice = getChoice(3);
    
    if (choice == 1) {
        grabScrewdriver();
    } else if (choice == 2) {
        grabElectricSaw();
    } else {
        getInCar();
    }
}

void bedroomHiding() {
    cout << "\n=== HIDE UNDER YOUR BED ===" << endl;
    cout << "\nIt might be safer to hide under your bed, after all, the 911 dispatcher said to" << endl;
    cout << "hide while the police are on their way. Though you still feel scared, the intruder" << endl;
    cout << "is smashing their body against your bedroom door, it might falter soon...\n" << endl;
    cout << "You hear a loud thud, and the door is down.\n" << endl;
    cout << "You hear their footsteps creak the floorboards. They walk towards the closet door," << endl;
    cout << "opening it, then carefully walk to the bathroom door. They creak it open and walk" << endl;
    cout << "in as they turn the lights on. A minute passes, and they come out. They tread" << endl;
    cout << "towards your bed... You see, as their shoes stop right in front of your eyes...\n" << endl;
    cout << "They kneel...\n" << endl;
    cout << "They see you...\n" << endl;
    cout << "1. Punch their face" << endl;
    cout << "2. Squeeze their eyes" << endl;
    if (gun) {
        cout << "3. Shoot the intruder" << endl;
    }
    
    int maxChoices = gun ? 3 : 2;
    int choice = getChoice(maxChoices);
    
    if (choice == 1) {
        punchIntruder();
    } else if (choice == 2) {
        squeezeEyes();
    } else if (choice == 3 && gun) {
        shootIntruder();
    }
}

void getGun() {
    gun = true;
    cout << "\n=== GET THE GUN FROM THE DRAWER ===" << endl;
    cout << "\nYou get your gun from the drawer, the intruder is coming upstairs.\n" << endl;
    cout << "You decide to:\n" << endl;
    cout << "1. Wait for the intruder" << endl;
    cout << "2. Hide under your bed" << endl;
    if (!nineoneone) {
        cout << "3. Call 911" << endl;
    }
    
    int maxChoices = nineoneone ? 2 : 3;
    int choice = getChoice(maxChoices);
    
    if (choice == 1) {
        waitForIntruder();
    } else if (choice == 2) {
        bedroomHiding();
    } else if (choice == 3 && !nineoneone) {
        call911();
    }
}

void call911() {
    nineoneone = true;
    cout << "\n=== CALL 911 ===" << endl;
    cout << "\nYou get your phone from the nightstand. You call 911, and while you tell them" << endl;
    cout << "what's going on, you decide to also:\n" << endl;
    cout << "1. Hide under your bed" << endl;
    cout << "2. Wait for the intruder" << endl;
    if (!gun) {
        cout << "3. Get the gun from your drawer" << endl;
    }
    
    int maxChoices = gun ? 2 : 3;
    int choice = getChoice(maxChoices);
    
    if (choice == 1) {
        bedroomHiding();
    } else if (choice == 2) {
        waitForIntruder();
    } else if (choice == 3 && !gun) {
        getGun();
    }
}

void punchIntruder() {
    cout << "\n=== PUNCH THEIR FACE ===" << endl;
    cout << "\nYou decide to punch their face as hard as you can. The intruder steps back," << endl;
    cout << "but soon regains their focus. You get out from underneath your bed. You get up" << endl;
    cout << "and notice the intruder is back on their feet, their hammer clenched in their" << endl;
    cout << "hand. How will you face this…\n" << endl;
    cout << "You read your stance, you don't have a choice but to go for it.\n" << endl;
    cout << "You swing and try to fight back... but it's useless.\n" << endl;
    cout << "You lie on the floor, your skull cracked. You remember all the sweet moments you've" << endl;
    cout << "made in this home.\n" << endl;
    cout << "=== YOU DIED ===" << endl;
}

void squeezeEyes() {
    cout << "\n=== SQUEEZE THEIR EYES ===" << endl;
    cout << "\nYou take your fingers and push them onto the intruder's eyes. You do it so fast," << endl;
    cout << "you feel the eyeballs squish into your fingers.\n" << endl;
    cout << "The intruder screams and falls on the floor as blood covers their face.\n" << endl;
    cout << "They curse at you, screaming that they can't see anything.\n" << endl;
    cout << "You quickly get away from them and get off the floor.\n" << endl;
    
    if (nineoneone) {
        cout << "It's okay, the police are on their way, you protected your home, and yourself." << endl;
        cout << "You get somewhere safe and wait for the police to deal with this.\n" << endl;
        cout << "Good job." << endl;
    } else {
        cout << "You go get your phone and get out of your room, you call 911 informing them of" << endl;
        cout << "what happened. You leave and head somewhere safe and wait for the police to deal" << endl;
        cout << "with this.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    }
}

void shootIntruder() {
    cout << "\n=== SHOOT THE INTRUDER ===" << endl;
    cout << "\nYou quickly shoot them before they can react.\n" << endl;
    cout << "The bullet goes between their eyes and through their head.\n" << endl;
    cout << "Their body thuds, no reaction, no screaming. Just their dead body. You can't look" << endl;
    cout << "at it. You did this.\n" << endl;
    
    if (nineoneone) {
        cout << "The police are on their way, you protected your home, and yourself. You get" << endl;
        cout << "somewhere safe and wait for the police to deal with this." << endl;
    } else {
        cout << "You go get your phone and get out of your room, you call 911 informing them of" << endl;
        cout << "what happened. You leave and head somewhere safe and wait for the police to deal" << endl;
        cout << "with this." << endl;
    }
}

void grabPlunger() {
    cout << "\n=== GRAB THE PLUNGER ===" << endl;
    
    if (poop) {
        cout << "\nYou grab the plunger and put it in the dirty toilet you just used. The plunger" << endl;
        cout << "is now smeared with poop.\n" << endl;
        cout << "BANG, the intruder is still banging themselves against the door.\n" << endl;
        cout << "The door falls down...\n" << endl;
        cout << "He stands in front of your bathroom door.\n" << endl;
        cout << "You take your poop plunger and point it at him. He flinches, noticing what's on" << endl;
        cout << "the plunger.\n" << endl;
        cout << "He holds the hammer strongly. You both look at each other before sprinting. You" << endl;
        cout << "take the plunger and... he... runs away.\n" << endl;
        cout << "You did it. You saved yourself, in one of the worst ways possible, but it worked" << endl;
        cout << "HAHAHHA." << endl;
    } else {
        cout << "\nYou grab the plunger.\n" << endl;
        cout << "BANG, the intruder is still banging themselves against the door.\n" << endl;
        cout << "The door falls down...\n" << endl;
        cout << "He stands in front of your bathroom door.\n" << endl;
        cout << "You take your plunger and point it at him. He doesn't seem to care; your rubbery" << endl;
        cout << "plunger does not affect him. He sprints towards you with his hammer. You swing" << endl;
        cout << "and try to fight back... but it's useless.\n" << endl;
        cout << "You lie on the floor, your skull cracked. You remember all the sweet moments you've" << endl;
        cout << "made in this home.\n" << endl;
        cout << "=== YOU DIED ===" << endl;
    }
}

void smallWindow() {
    cout << "\n=== SMASH YOUR TINY BATHROOM WINDOW AND RUN AWAY ===" << endl;
    cout << "\nYou don't want to risk death, so you decide to pick up a long dust cleaner and-" << endl;
    cout << "BANG BANG, the intruder is still banging themselves against the door- and use its" << endl;
    cout << "handle to smash the tiny window glass...\n" << endl;
    cout << "The glass goes everywhere, there's still some sharp pieces alongside the edge of" << endl;
    cout << "the window- BANG BANG BANG- the window is small, you'll have to squeeze through...\n" << endl;
    cout << "The door starts to creak and crack, you don't have much time...\n" << endl;
    cout << "Do you:\n" << endl;
    cout << "1. Still go through the small broken window" << endl;
    cout << "2. Grab the plunger" << endl;
    
    int choice = getChoice(2);
    
    if (choice == 1) {
        stillSmallWindow();
    } else {
        grabPlunger();
    }
}

void stillSmallWindow() {
    cout << "\n=== STILL GO THROUGH THE SMALL BROKEN WINDOW ===" << endl;
    cout << "\nYou don't want to face the intruder...\n" << endl;
    cout << "You place your hands on the edge of the window, and the sharp shards of glass" << endl;
    cout << "pierce your skin. The blood was pooling and dripping along the wall. You flinch" << endl;
    cout << "back... it hurts.\n" << endl;
    cout << "BANGGG!! THUD!! The door falls down, and the intruder stands menacingly.\n" << endl;
    cout << "Your instincts kick in, you grab the edge of the window, and put your head through." << endl;
    cout << "Squirming your body as you try to squeeze it through a tiny, sharp hole.\n" << endl;
    cout << "You feel a hand grab your legs. You kick back, they grab harder...\n" << endl;
    cout << "You use your upper body to pull yourself farther out. They pull hard on your feet." << endl;
    cout << "The pain is settling in now, your upper body is shredded, and you feel the edge of" << endl;
    cout << "the window scrape your body.\n" << endl;
    cout << "With both their hands, they grab your left leg. You push farther out and use your" << endl;
    cout << "right foot to push, no matter how painful it is.\n" << endl;
    cout << "You give yourself one last push, the intruder tries to grab on to you, but as they" << endl;
    cout << "could only grab your foot, it proves meaningless, as the only thing they were left" << endl;
    cout << "with was your sock.\n" << endl;
    cout << "You fall for what seems to be a millisecond. The snow breaks your fall, but it's" << endl;
    cout << "not enough. You feel a sharp pain in your legs, but it doesn't matter. You still" << endl;
    cout << "run, run as far as you can. Even with the glass shards in your skin, even with your" << endl;
    cout << "broken feet. You can't die.\n" << endl;
    cout << "You run to your neighbor's house and call the police there. You did it, you're safe." << endl;
}

void openFrontDoor() {
    cout << "\n=== OPEN YOUR FRONT DOOR AND RUN FAR FAR AWAY FROM YOUR HOUSE ===" << endl;
    cout << "\nIt's not worth it; confronting the intruder poses more risks than rewards. You open" << endl;
    cout << "your front door and run as fast as you can away from your house. You run and pant" << endl;
    cout << "and run and pant.\n" << endl;
    cout << "You finally stop and breathe.\n" << endl;
    cout << "You've made it a long, long path away from your home... Though it's full of memories," << endl;
    cout << "your brain is the one that keeps them alive; you don't wanna die for your home.\n" << endl;
    cout << "You knock on a neighbor's door and they welcome you in. You call for help from there" << endl;
    cout << "and wait for all of this to resolve.\n" << endl;
    cout << "You survived…" << endl;
}

void grabKnife() {
    cout << "\n=== GRAB A KNIFE ===" << endl;
    cout << "\nYou grab the knife. You're going for a safe option to guarantee you win.\n" << endl;
    cout << "The intruder is behind you, you have to act quick.\n" << endl;
    cout << "You swing your knife not knowing where it'll land. You feel as your arm slows down" << endl;
    cout << "as you tear through flesh, blood splattering all over you.\n" << endl;
    cout << "You hear a thud, the intruder falls. You see him on the floor as blood pools. There's" << endl;
    cout << "a sharp pain in your shoulder that you hadn't noticed before. It's painful. You look" << endl;
    cout << "at the hammer in the intruder's hand. It's most likely he hit you with it, but you" << endl;
    cout << "hadn't noticed due to your adrenaline.\n" << endl;
    cout << "Your socks are wet. You snap back to reality... looking back down at the intruder," << endl;
    cout << "he's gurgling. You slashed his neck. He's going to die.\n" << endl;
    
    if (nineoneone) {
        cout << "It's okay, the police are on their way, you cover the intruder's neck with a cloth" << endl;
        cout << "and wait for them to come. You had protected your home and yourself. But at the" << endl;
        cout << "cost of a life. Your hands will never be clean again." << endl;
    } else {
        cout << "What should you do:\n" << endl;
        cout << "1. Get help, Call 911" << endl;
        cout << "2. Hide the body" << endl;
        
        int choice = getChoice(2);
        
        if (choice == 1) {
            call911AfterStab();
        } else {
            hideBody();
        }
    }
}

void grabPan() {
    cout << "\n=== GRAB A PAN ===" << endl;
    cout << "\nYou grab a pan from the kitchen; it should be enough to fight the intruder.\n" << endl;
    cout << "You hear them behind you…\n" << endl;
    cout << "You turn to face them… Then you swing as fast and hard as possible…\n" << endl;
    cout << "It seems they didn't see that coming… They fall to the floor, knocked out. What a" << endl;
    cout << "handy pan!\n" << endl;
    
    if (nineoneone) {
        cout << "You protected your home and yourself. You get somewhere safe and wait for the" << endl;
        cout << "police to deal with this.\n" << endl;
        cout << "Good job." << endl;
    } else {
        cout << "You go get your phone and get out of your room, you call 911 informing them of" << endl;
        cout << "what happened. You leave and head somewhere safe and wait for the police to deal" << endl;
        cout << "with this.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    }
}

void grabKettle() {
    cout << "\n=== GRAB THE KETTLE ===" << endl;
    cout << "\nYou grab the kettle that has just finished heating up for the cup of tea you" << endl;
    cout << "wanted.\n" << endl;
    cout << "You quickly throw the boiling water at the intruder…\n" << endl;
    cout << "They scream in pain and agony as they kneel on the floor.\n" << endl;
    cout << "As they are in pain, you run away and get to a safe place.\n" << endl;
    
    if (nineoneone) {
        cout << "You protected your home and yourself. You wait for the police to deal with this.\n" << endl;
        cout << "Good job." << endl;
    } else {
        cout << "You go get your phone and get out of your room, you call 911 informing them of" << endl;
        cout << "what happened. You leave and head somewhere safe and wait for the police to deal" << endl;
        cout << "with this.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    }
}

void hideBody() {
    cout << "\n=== HIDE THE BODY ===" << endl;
    cout << "\nYou can't be caught like this… your home, your life… who cares if this was an" << endl;
    cout << "intruder… You need to get rid of the evidence.\n" << endl;
    cout << "You bag the body and clean the surrounding area. You dig a hole deep enough to put" << endl;
    cout << "the body in… then you add some dirt…. Then you add a dead animal body… then once" << endl;
    cout << "you fill up the hole, you add an endangered plant so that no one will dig this place" << endl;
    cout << "up.\n" << endl;
    cout << "You survived, you and your house are safe… but at what cost?" << endl;
}

void call911AfterStab() {
    cout << "\n=== GET HELP, CALL 911 ===" << endl;
    cout << "\nAfter what happened… stabbing the intruder, you had to call 911 and report what" << endl;
    cout << "happened.\n" << endl;
    cout << "The police arrive, take you for questioning, and close the crime scene." << endl;
    cout << "You are let go after they figure out the story…\n" << endl;
    cout << "It was a tough time, but you made it… You survived. You and your house are safe." << endl;
    cout << "Good job." << endl;
}

void fightBarehand() {
    cout << "\n=== FIGHT THE INTRUDER BAREHANDED ===" << endl;
    cout << "\nYou went downstairs just to face the intruder; you didn't care how. They have to" << endl;
    cout << "pay for even daring to hurt your home and your peace.\n" << endl;
    cout << "The moment you see them, you strike. You go for the face, then the ribs, then the" << endl;
    cout << "shoulders. You knock them out before they could even use their hammer against you…\n" << endl;
    cout << "You won… You did it.\n" << endl;
    cout << "You call the police to clean up this mess. You survived. You protected yourself and" << endl;
    cout << "your home." << endl;
}

void grabScrewdriver() {
    cout << "\n=== PICK UP A SCREWDRIVER ===" << endl;
    cout << "\nYou look for the screwdriver and pick it up…\n" << endl;
    cout << "The intruder is right behind you. You take the screwdriver and swing it at him. He" << endl;
    cout << "swings right back with his hammer…\n" << endl;
    cout << "A fight ensues… Both of you end up on the ground." << endl;
    cout << "You lay slowly losing your consciousness… never to wake up." << endl;
}

void grabElectricSaw() {
    cout << "\n=== PICK UP AN ELECTRIC SAW ===" << endl;
    cout << "\nYou look at the electric saw… You know what to do….\n" << endl;
    cout << "You take it and start it right up….\n" << endl;
    cout << "You look at the intruder who is right behind you…\n" << endl;
    cout << "He stares at the chainsaw… the loud noise echoes in the halls….\n" << endl;
    cout << "He runs away… You run after him. You won't be on the losing end.\n" << endl;
    cout << "You slash his body….\n" << endl;
    cout << "He's dead… He didn't even try to struggle… it was too easy.\n" << endl;
    cout << "You won." << endl;
}

void getInCar() {
    cout << "\n=== GET IN YOUR CAR ===" << endl;
    cout << "\nYou hear the intruder make their way behind you… You quickly take your keys and" << endl;
    cout << "open the car… You get in… and start the car… He's right behind your slamming on" << endl;
    cout << "your car trunk, cracking the rear window…\n" << endl;
    cout << "Do you:\n" << endl;
    cout << "1. Slam the brake pedal" << endl;
    cout << "2. Slam the gas pedal" << endl;
    
    int choice = getChoice(2);
    
    if (choice == 1) {
        cout << "\n=== SLAM THE BRAKE PEDAL ===" << endl;
        cout << "\nYou slam the brake pedal and run over the intruder. Who does he think he is," << endl;
        cout << "breaking your rear window?\n" << endl;
        cout << "You then slam the gas and get out of the house and head to the police station, and" << endl;
        cout << "report what happened.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    } else {
        cout << "\n=== SLAM THE GAS PEDAL ===" << endl;
        cout << "\nYou open the garage and slam the gas, you get out of the house and head to the" << endl;
        cout << "police station, and report what happened.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    }
}

void useScissors() {
    cout << "\n=== USE SCISSORS ===" << endl;
    cout << "\nYou grab the scissors right next to you… You have to face him on even ground with" << endl;
    cout << "just scissors.\n" << endl;
    cout << "He notices the weapon in your hand. You stand up ready to fight…\n" << endl;
    cout << "The fight's on. He swings the hammer, and you slightly dodge it; it hits your" << endl;
    cout << "shoulder. You use your scissors and stab him with them… You don't really aim, but" << endl;
    cout << "it landed in his eyes…\n" << endl;
    cout << "The intruder screams and falls on the floor as blood covers their face.\n" << endl;
    cout << "He curses at you, screaming that he can't see anything.\n" << endl;
    cout << "You quickly get away from them and get out of the house.\n" << endl;
    
    if (nineoneone) {
        cout << "It's okay, the police are on their way, you protected your home, and yourself." << endl;
        cout << "You get somewhere safe and wait for the police to deal with this.\n" << endl;
        cout << "Good job." << endl;
    } else {
        cout << "You go get your phone and get out of your room, you call 911 informing them of" << endl;
        cout << "what happened. You leave and head somewhere safe and wait for the police to deal" << endl;
        cout << "with this.\n" << endl;
        cout << "You protected your home and yourself. Good job." << endl;
    }
}

void waitForIntruder() {
    cout << "\n=== WAIT FOR THE INTRUDER ===" << endl;
    cout << "\nThe intruder breaks in and is right in front of you. He is holding a hammer.\n" << endl;
    cout << "1. Use scissors" << endl;
    cout << "2. Fight hand-to-hand" << endl;
    cout << "3. Do nothing" << endl;
    if (gun) {
        cout << "4. Shoot the intruder in the chest" << endl;
        cout << "5. Shoot the intruder in the leg" << endl;
        cout << "6. Don't shoot the intruder" << endl;
    }
    
    int maxChoices = gun ? 6 : 3;
    int choice = getChoice(maxChoices);
    
    if (choice == 1) {
        useScissors();
    } else if (choice == 2) {
        fightHandToHand();
    } else if (choice == 3) {
        doNothing();
    } else if (choice == 4 && gun) {
        shootInChest();
    } else if (choice == 5 && gun) {
        shootInLeg();
    } else if (choice == 6 && gun) {
        dontShootIntruder();
    }
}

void dontShootIntruder() {
    cout << "\n=== DON'T SHOOT THE INTRUDER ===" << endl;
    cout << "\nYou decide that it's not worth it to bloody your hands... You put down the gun." << endl;
    cout << "The intruder is confused. You put up your arms. You'd rather break your arm than be" << endl;
    cout << "responsible for someone's death. The intruder, confused, puts down his hammer and" << endl;
    cout << "puts up his fists. It seems he wishes to have a fair fight since you decided not to" << endl;
    cout << "shoot him.\n" << endl;
    cout << "You both fight, and at the end, you both end up bruised and hurt." << endl;
    cout << "He finally spoke, \"Fair fight,\" and he got up and got out of your house.\n" << endl;
    cout << "You're left even more confused... what are you supposed to do after this?" << endl;
}

void shootInChest() {
    cout << "\n=== SHOOT THE INTRUDER IN THE CHEST ===" << endl;
    cout << "\nYou shoot him in the chest... He falls back, his head hitting and bouncing on the" << endl;
    cout << "floor. His mouth agape as he groans in pain.\n" << endl;
    cout << "You watch as the blood pools around him. His eyes roll back… He's dead.\n" << endl;
    cout << "You can't bear to look at the mess you made, but it had to be done right.." << endl;
    cout << "It's not like you had another choice…\n" << endl;
    
    if (nineoneone) {
        cout << "The police are on their way. You get somewhere safe and wait for the police to" << endl;
        cout << "deal with this." << endl;
    } else {
        cout << "You go get your phone, you call 911, informing them of what happened. You leave" << endl;
        cout << "and head somewhere safe and wait for the police to deal with this." << endl;
    }
}

void shootInLeg() {
    cout << "\n=== SHOOT THE INTRUDER IN THE LEG ===" << endl;
    cout << "\nYou aim for the leg, trying to harm him but not kill him. You don't want to dirty" << endl;
    cout << "your hands.\n" << endl;
    cout << "He screams in pain, cursing. The floor thuds as he falls. You quickly grab your stuff" << endl;
    cout << "and run out, heading to a safe area.\n" << endl;
    
    if (nineoneone) {
        cout << "The police are on their way. You get somewhere safe and wait for the police to" << endl;
        cout << "deal with this." << endl;
    } else {
        cout << "You go get your phone, you call 911, informing them of what happened. You leave" << endl;
        cout << "and head somewhere safe and wait for the police to deal with this." << endl;
    }
}

void fightHandToHand() {
    cout << "\n=== FIGHT HAND-TO-HAND ===" << endl;
    cout << "\nYou face the intruder, who holds a hammer in his hand tightly. You sprint towards" << endl;
    cout << "him even though you're shaking, scared.\n" << endl;
    cout << "You swing, he swings back. His hammer shatters your shoulder… then your ribs… then" << endl;
    cout << "your skull…\n" << endl;
    cout << "The fight ends quickly…\n" << endl;
    cout << "You lie on the floor, your skull cracked. You remember all the sweet moments you've" << endl;
    cout << "made in this home.\n" << endl;
    cout << "=== YOU DIED ===" << endl;
}

void doNothing() {
    cout << "\n=== DO NOTHING ===" << endl;
    cout << "\nYou stare at the intruder, and you do nothing. You don't move, you don't scream." << endl;
    cout << "You just stand there. You aren't even scared anymore. I mean, a hammer really. What" << endl;
    cout << "was he thinking that idiot should've just bought a gun or something more sinister?\n" << endl;
    cout << "He stares right back at you…\n" << endl;
    cout << "He steps forward… closer and closer and closer and… He's right in front of you.\n" << endl;
    cout << "He tenses up. He's about to strike…\n" << endl;
    cout << "You hug him…? He squirms… \"Let go,\" He says.\n" << endl;
    cout << "\"Shhhh, it's okay, no need to fight, I can tell you can't even hurt a fly.\" You" << endl;
    cout << "reply.\n" << endl;
    cout << "He stands there confused… \"C- Can I get your valuables now…\" He chokes up\n" << endl;
    cout << "\"Hmmm, I'll think about it.\" You reply calmly\n" << endl;
    cout << "…. You survived?" << endl;
}

int main() {
    cout << "======================================" << endl;
    cout << "   CHOOSE YOUR OWN ADVENTURE GAME" << endl;
    cout << "======================================" << endl;
    
    startStory();
    
    cout << "\n======================================" << endl;
    cout << "      Alright, until next time!" << endl;
    cout << "======================================" << endl;
    
    return 0;
}

