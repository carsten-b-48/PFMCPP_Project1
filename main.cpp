#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:chairs
//  action 1:the stairs go up
stairs.up();
//  action 2:the stairs go down
stairs.down();
//  action 3:the stairs directs vertical
stairs.directVertical();

//  2)
//  Noun:midiController
//  action 1:sends MIDI-Data
midiController.sendMIDI();
//  action 2:receives MIDI-Data
midiController.receiveMIDI();
//  action 3:shows Information
midiController.showInformation();

//  3)
//  Noun:soap
//  action 1:smells amazing
soap.smellAmazing();
//  action 2:shines blue
soap.shineBlue();
//  action 3:does clean
soap.clean();

//  4)
//  Noun:sofa
//  action 1:does look elegant
sofa.lookElegant();
//  action 2:gives place to sit down
sofa.givePlaceToSit();
//  action 3:takes up space in room
sofa.takeSpaceInRoom();

//  5)
//  Noun:bedspread
//  action 1:smells musty
bedspread.smellsMusty();
//  action 2:protects from cold 
bedspread.protectFromCold();
//  action 3:covers up messy bed
bedspread.coverUpMessyBed();

//  6)
//  Noun:sweets
//  action 1:taste sweet
sweets.tasteSweet();
//  action 2:mess up teeth
sweets.messUpTeeth();
//  action 3:make fat
sweets.makeFat();

//  7)
//  Noun:plants
//  action 1:look nice
plants.lookNice();
//  action 2:give positive feelings
plants.givePositiveFeelings();
//  action 3:convert carbon to oxygen
plants.convertCarbonToOxygen();

//  8)
//  Noun:cat
//  action 1:purrs
cat.purr();
//  action 2:jumps high
cat.jumpHigh();
//  action 3:messes up rooms
cat.messUpRoom();

//  9)
//  Noun:dog
//  action 1:barks
dog.bark();
//  action 2:demands food
dog.demandFood();
//  action 3:looks faithful
dog.lookFaithful();

//  10)
//  Noun:Watch
//  action 1:shows Time
watch.showTime();
//  action 2:sits comfortably
watch.sitComfortably();
//  action 3:looks expansive (but isn't)
watch.lookExpansive();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
