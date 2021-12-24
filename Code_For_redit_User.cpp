#define _WIN32_WINNT 0x0500


#include <Windows.h>
#include <iostream>
#include <fstream>
#include<sstream>
#include <chrono>
#include <thread>
#include<string>
#include<cstring>
#include <stdlib.h>
#include <mmsystem.h>
#include<cstdlib>
#include <locale>
#include "Code_For_redit_User.h"

#pragma warning(disable : 4996)
using namespace std;



HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);

void setFontSize(int FontSize)
{
    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = FontSize; // leave X as zero
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, L"Lucida Console");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}


// function to output as if it was being typed
void Type(const std::string& text)
{

    //PlaySound(TEXT("CharBeep02.wav"), NULL, SND_LOOP | SND_ASYNC);
    // loop through each character in the text
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        // output one character      
        // flush to make sure the output is not delayed

        std::cout << text[i] << std::flush;




        // sleep 60 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(25)); //change to 70

    }
    //PlaySound(NULL, NULL, 0);
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
void Type2(const std::string& text)
{

    //PlaySound(TEXT("CharBeep02.wav"), NULL, SND_LOOP | SND_ASYNC);
    // loop through each character in the text
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        // output one character      
        // flush to make sure the output is not delayed

        std::cout << text[i] << std::flush;




        // sleep 60 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(25)); //change to 70

    }
    //PlaySound(NULL, NULL, 0);
    std::this_thread::sleep_for(std::chrono::seconds(0));
}
void SpeedType(const std::string& text)
{
    //PlaySound(TEXT("CharBeep02.wav"), NULL, SND_LOOP | SND_ASYNC);
    // loop through each character in the text
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        // output one character      
        // flush to make sure the output is not delayed

       std::cout << text[i] << std::flush;




        // sleep 60 milliseconds
        std::this_thread::sleep_for(std::chrono::nanoseconds(1440)); //change to 70

    }
    //PlaySound(NULL, NULL, 0);
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
void green()
{
    SetConsoleTextAttribute(hc, 0x2);
}

void cyan()
{
    SetConsoleTextAttribute(hc, 0x3);
}

void red()
{
    SetConsoleTextAttribute(hc, 0x4);
}

int main()
{

    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions

    MoveWindow(console, r.left, r.top, 5000, 5000, TRUE); // 800 width, 100 height
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

    setFontSize(34);
    green();

    //ShellExecute(0, 0, L"https://i.imgur.com/nlp1BHU.png", 0, 0, SW_SHOW);





    cout << "\x1B[2J\x1B[H";
    Type("\n \n Hello, u/No-Balance-6851 \n \n");

    std::this_thread::sleep_for(std::chrono::seconds(2));
    //red();
    Type(" \n \n\t \tI'm sure you were expecting something a little bit more conventional.\n"
        "Like somebody sending you a long winded message you have to read.");

    std::this_thread::sleep_for(std::chrono::seconds(3));

    Type("\n \n\t \tLuckily for you Im not going to be doing that to you :)... at least not\n"
        "in the same way most guys on Reddit usually would.  That's just boring, so instead, \n"
        "I'm going to make it look REALLY COOL and Computer techy for you. I wrote this\n"
        "console script JUST so i could introduce myself to you.  I figure doing something\n"
        "interactive would be fun.  But just in case you get the video version of this, I\n"
        "will still try to make it fun.  A few special effects, 3d Graphics and what not.");

    std::this_thread::sleep_for(std::chrono::seconds(3));

    cout << "\x1B[2J\x1B[H";

    Type("\n\n\tBy the way, what's your first name? It's alright if you don't want to give me your\n"
        "last name, first name is fine.  Besides 9/10 times people are more attracted to the\n"
        "first name anyway lol.  But seriouslty without a name, things get wierd\n\n"

        "YOU:\no' hansome suitor \nin my computer, \n"
        "I\'m sure that my name will forever be cuter,\n"
        "My lovely name is ....:  \n");

    string firstName;
    cin >> firstName;



    //}
    //else if (firstName == "Beautiful Crazy Lady") {
    //    Type("\n\n\tNow that is an AWESOME name, " + firstName + ".  \n"
    //        "But since it's too long, I'm going to make it kinda short, like you, and call you BCL...\n"
    //        "BCL... Kind of sounds like a sandwich... Bacon Cubano with Letuce.... not really a sandwich, \n"
    //        "but I can say I made one so you\n"
    //        "never have to :-D\n\n");
    //}
    //else
    //{

    //    size_t found = firstName.find(" ");
    //    if (found == string::npos) {
    //        firstName.erase(found);
    //        firstName = firstName;
    //    }
    //    
    //}
    cout << "\x1B[2J\x1B[H";

    Type("\n\n\tWell, " + firstName + ", It's really nice to meet you, and your name sounds \n"
        "lovely to be sure.  \n \n"

        "\n\n\tNow although I can't REALLY be sure that " + firstName + " is your actual name, I'm\n"
        "not one to assume. it's kind of a red herring from this point, because I already figured\n"
        "you'd just as well type somebody elses name.");

    std::this_thread::sleep_for(std::chrono::seconds(3));

    Type("\n \n\t \tAnyway a little bit about me: My name is William, I'm 33, I'm from \n"
        "Eastern California.  I don't have more than one really good frined in my life.\n"
        "Appart from him, I'm the one people  regret not hanging out with, kind of like \n"
        "when you find a hidden gem that just makes everyone else jealous because your \n"
        "different.  A GREAT EXAMPLE of that if the movie \"Crimson Tide\".  Everybody \n"
        "is on about \"The hunt for Red October\"  Because it has Harison Ford, Liam \n"
        "Nieson, Tim Curry, JE Jones, Sam Niel... but \"Crimson Tide\" had Denzdel \n"
        "Washington and freaking Gene Hackman!!!  NOBODY realizes how great that movie\n"
        "was, despite Red October!!!");

    std::this_thread::sleep_for(std::chrono::seconds(5));

    cout << "\x1B[2J\x1B[H";

    Type("\n \n \t \tOK Getting back on track " + firstName + ", I have a whole bunch of hobbies and \n"
        "interests I'll Introduce in the questionaire at the end of this. But some of them to start \n"
        "off with include Snowboarding, Computer Science/Coding as you can see, Hiking, Gym, Cooking, \n"
        "reading and Welding.\n\n"

        "\n \n \t \tBut what I REALLY like to do is singing.  I am a classically trained opera\n"
        "singer of aout 20 years.  And while I currently have a job as a bar back for an indian\n"
        "casino, it is my passion to get out of it and pursue opera on a more regular basis.  \n"
        "Opera is what gives me meaning to my life. It is what I am most passionate about.  I \n"
        "will send you a sample at the end");

    std::this_thread::sleep_for(std::chrono::seconds(2));

    cout << "\x1B[2J\x1B[H";

    Type("\n \n\t \tI'm also pretty shy, altough you might not guess at it given the\n"
        "fact that I do performing arts. But I tend to value my privacy, and I do\n"
        "posess a measure of self consciousness.");

    std::this_thread::sleep_for(std::chrono::seconds(3));

    Type("\n \n\t \tPart of the reason for this is that I have autism.  And with that comes a\n"
        "butt-load of challenges in the realm of social interaction.  For example: I have a\n"
        "difficult time communicating  in a clear and concise manner in person.  It's some-\n"
        "thing I try not to show in my typing. Another challenge is developing an emotional\n"
        "attachment to new people.  it's difficult for me with so little experience. I usually\n"
        "work, travel, eat, sleep, and live alone.");

    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\x1B[2J\x1B[H";
    Type("\n\n\tI took an interest in your profile for a number of reasons.\n\n"

        " 1. I am also into computer science, even though you're moving away from it.\n"
        " \n2. You don't sound like a scammer(which is a pretty big deal for me)\n"
        " \n3. You sound like a truly intelligent individual, full of experience and \n"
        " personal depth. Over the years my heart has hardened and become attracted \n"
        " towards this quality in people.  Must be the little tumorous sapiophile \n"
        "growing inside of me, making me more attracted to intelligence, and using my\n"
        "nervous system for it's poop."
        " \n4. I took an interest in what you said about dissecting problems, and Odin\n"
        " doesn't need his other eye to see I've got enough of those.  Maybe having a \n"
        " fresh perspective might help me work through them.  \n"
        " \n5. as you can immagine this is NOT pretyped... well, it IS but that's just \n"
        " because that's how coding works, you type your code, the compiler makes it work,\n"
        " and at runtime it bassically....\n"
        " well.. runs.... :)");

    std::this_thread::sleep_for(std::chrono::seconds(3));



    cout << "\x1B[2J\x1B[H";
    Type2("\n\n\tNow if you're interested I'd like to start a short ice-breaker discussion. \n"
        "Listed below are a number of toppics I personally like...\n\n");
    cyan();

    SpeedType("\t1.Opera      2.Fitness       3.Swimming      4.Mental Health     5.Camping\n"
        "\t6.Dance      7.3D Graphics   8.Coding        9.Cats              10.Dogs\n"
        "\t11.Cooking   12.Travel       13.Art          14.Relationships    15.Family\n"
        "\t16.Gaming    17.Study        18.Coktails     19.NOT religion     20.NOT Politics\n"
        "\t21.Nutrition 22.candy        23.comedians    24.Documentaries    25.Military\n"
        "\t26.Fashion   27.Movies       28.Date ideas   29.Seasons          30.Childhood\n"
        "\t                             31.Pickup Lines.");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    green();
    Type("\n\nGo ahead and Pick a number, type it out, and I will start the discussions. just remember no \n"
        "spaces\n\nChoice: ");

    int choice;
    cin >> choice;
    cout << "\x1B[2J\x1B[H";

    switch (choice) {
    case 1:
        Type("\n\n\tI've been singing for over twenty years, and at the time I wrote this for you,\n"
            "I actually finnished a production of Madama Butterfly in New mexico.  It's my ambition now to\n"
            "Move to LA and start my own\n\n");
        break;
    case 2:
        Type("\n\n\tI've been out of fittness in the past, but lately I've been getting back into it.\n"
            "Primarily for health reasons.  I can finally bench and deadlift my own weight.\n\n");
        break;
    case 3:
        Type("\n\n\tI have ALWAYS loved swimming.  My heart belongs to the watter some days.  it's just\n"
            "so relaxing having almost nothing beneath my feet to make me feel heavy :-D\n\n");
        break;
    case 4:
        SetConsoleTextAttribute(hc, 0x5);
        Type("\n\n\tComing perfectly clean, I suffer from a cocktail of depression, anxiety, and ST.  Like\n"
            "you, I'm a bit unstable.  But even though I'm not going to see therapists(owing to the fact that\n"
            "they are part of the problems I face), I am still working on myself.\n\n"

            "Opera music is one of my few releases\n\n");
        green();
        break;
    case 5:
        Type("I haven't been camping in a few years, but I definitely want to go, only this time probably during\n"
            "the autumn season.  1. bugs are gone, and 2. snow hasn't come yet, and 3. it's a good temperature to\n"
            "bundle up without sweating.");
        break;
    case 6:
        Type("I consider dancers to be some of the hardest working athletes arround.  I only wish I could dance as\n"
            "well as they do ); \n\n");
        break;
    case 7:
        Type("\n\n\tI do a lot of my 3d Graphics in Blender, and I want to get more into animation and Unreal engine.  \n\n");
        break;
    case 8:
        Type("\n\n\tThis is only a little bit of what I'm Capable of.  There is a lot more, both for\n"
            "front end and back end programming, than just this one console app.");
        break;
    case 9:

        Type("\n\nI have two cats, both russian blue, one without a tail ");
        break;
    case 10:
        Type("\n\n\t I have three poodles, one named Miranda, one named Benedict, and one named Eloise");
        break;
    case 11:
        Type("\n\n\tMy family is big on cooking.  My mom loves to entertain guests, and has a whole \n"
            "collection of copper-lined stainless steel pots, for which I welded her a pot rack as a \n"
            "mothers day gift");
        break;
    case 12:
        Type("\n\n\tI've been to 7 different countries, and 18 out of 50 states in the US.  I want to \n"
            "travel more for opera performances.  I want to visit France, Italy, Russia, The Netherlands \n"
            "and the Bahamas as part of my bucket list");
        break;
    case 13:
        Type("\n\n\tI'm more of a fan of classical/romantic romantic art.  I like impressionist art from\n"
            "the turn of the 20th century, but theres also something depressing about impressionist art \n"
            "in my eyes");
        break;
    case 14:
        SetConsoleTextAttribute(hc, 0x13);
        Type("\n\n\tI'll be perfectly honest on this one.... I've never been in a solid relationship for\n"
            " more than 5 months... and part of it is my fault, and the fault of my autism.  I have \n"
            "trouble jumping into things with the women I meet. I want someone who will show me that \n"
            "they love me for me, regardless of who/what I am or how I behave or act.  ");
        green();
        break;
    case 15:
        Type("\n\n\tI'm very close with my family.  My mom is the most intelligent and sensible person I \n"
            "know, not to mention the fiercest.  And my dad is someone I look to for a good impression.  \n"
            "Without him and his blessings in things, I feel like I'd be lost in this world.\n\n");
        break;
    case 16:
        cyan();
        Type("I'm mostly into Horror and Puzzle games, like first person ones.  Eventualyl I want to \n"
            "design one of my own conception and release it on steam.  When I was in my masters program\n"
            "in college, I took a few semesters in game audio development/implementation");
        green();
        break;
    case 17:
        Type("\n\n\tEver since I gradutated, I've been taking a lot of my courses online on sites like \n"
            "Kahn Academy, SoloLearn, and Udemy.com.  I am very impressed at the rate classes cost, as\n"
            "well as the content of each course.  ");
        break;
    case 18:
        Type("\n\n\tWhile I like to sing Opera, I do have a day job as a bar back for an indian casino.  \n"
            "I learned a few things about bartending while there, and so I'd have to say that my personaly\n"
            "favorite drink would be a happy drink, it's \n\n"

            "1oz Malibu mango\n"
            "1oz Maliby Passion Fruit\n"
            "Half OJ/Hald Cranberry\n"
            "Garnished with limes and cherry in the shape of a smiley face");
        break;
    case 19:
        red();
        setFontSize(68);
        Type("\n\n\tREALLY!?!?\n");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        green();
        Type("It DID say not that one");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        setFontSize(34);
        Type("Alright MOVING ON.......");
        std::this_thread::sleep_for(std::chrono::seconds(2));
        setFontSize(34);
        break;
    case 20:
        red();
        setFontSize(68);
        Type("\n\n\tOH COME ON!!!\n");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Type("If you saw 19, how did you miss 20!?!?");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        green();
        setFontSize(34);
        break;
    case 21:
        Type("\n\n\tAlthough I really like to cook, Nutrition is becoming important to me,\n"
            "Especially since this summer I found out I have high cholesterol.  I've been watching it\n"
            "lately, and it's done me a whole world of good.");
        break;
    case 22:
        Type("\n\n\tReese's.... hands down....\n\n");
        break;
    case 23:
        Type("I'm more of a classics kind of guy; Jeff Dunham, Don Rickles, Gilbert Gotfried, Larry\n"
            "the Cable Guy.... some of the newer ones who try to be ultra PC come off as synthetic and\n"
            "appologetic, and that takes away from the ability to laugh.");
        break;
    case 24:
        red();
        Type("When it comes to documentaries, I'm very fond of medieval history documentaries, like \n"
            "Medieval life, the crusades, changes in europea power.  in fact most History doc-\n"
            "umentaries are awesome.  I also like natural science/history documentaries, as well as\n"
            "astronomy ones.  it's always fun to sepparate oneself from the tumultuousness of the ]n"
            "rest of the world and take in the wealth of knowledge compacted into the episodes people\n"
            "put out for everybody to absorb.");
        break;
    case 25:
        Type("\n\n\tbefore I earned my masters in Music performance, I was a soldier in the US Army.  \n"
            "I am glad I'm out, but somedays I miss the thrill of bein ready for duty.");
        break;
    case 26:
        /*Type("I cant really speak on this as much, " + firstName + ".  it always seems to change too rapidly\n"
            "for me.  I kind of thre this in, hoping you might have some advice.\n");*/
        Type("I cant really speak on this as much.  it always seems to change too rapidly\n"
            "for me.  I kind of thre this in, hoping you might have some advice.\n");
        break;
    case 27:
        Type("\n\n Jurrasic Park... hands down my favorite Movie of all time.  I mean I LIKE crimson tide, but JP\n"
            " is a ruling classic for me, both for adulthood AND childhood.  And the orriginal novel has a LOT of\n"
            "substance which was left out of the movie AND it goes into realism of the times in which the novel was\n"
            "written, such as the cray computers, the chaos theory, all of it!");
        break;
    case 28:
    {
        Type("\n\n\tSince I'm more scandinavian, most of my date ideas take place during Wintertime, when \n"
            "it's a lot cooler, and a lot more acceptable for my body.  Dates like going to a ski resort, \n"
            "or ice skating, or shopping at a weinachtmarkt, or even just sitting in, cuddling up by the fire \n"
            "under a fleece blanket in pajamas, sipping hot chocolate, eating cookies or popcorn, and \n"
            "watching christmas flicks till we can't keep our eyes open before santa comes.\n\n");
        std::this_thread::sleep_for(std::chrono::seconds(3));
        Type("\n\n\tHang on, I'm gonna make this answer a little more festive. Let me just test out the \n"
            "christmas Lights... now where are those... AHAH... OH come on Tangled!?......Ok untangle, \n"
            "now to just find the damned outlet... AHAH! HERE WE GO!!! FESTIVE!!!");

        string s = "\n\n\tSince I'm more scandinavian, most of my date ideas take place during Wintertime, when \n"
            "it's a lot cooler, and a lot more acceptable for my body.  Dates like going to a ski resort, \n"
            "or ice skating, or shopping at a weinacht, or even just sitting in, cuddling up by the fire \n"
            "under a fleece blanket in pajamas, sipping hot chocolate, eating cookies or popcorn, and \n"
            "watching christmas flicks till we can't keep our eyes open before santa comes.\n\n"

            "\n\n\tHang on, I'm gonna make this answer a little more festive. Let me just test out the \n"
            "christmas Lights... now where are those... AHAH... OH come on Tangled!?......Ok untangle, \n"
            "now to just find the damned outlet... AHAH! HERE WE GO!!! FESTIVE!!!";


        std::this_thread::sleep_for(std::chrono::milliseconds(1500));

        red();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        green();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        red();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        green();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));


        red();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));


        green();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        red();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        green();
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "\x1B[2J\x1B[H";

        SetConsoleTextAttribute(hc, 0x6);
        cout << "\x1B[2J\x1B[H";
        std::cout << s << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        cout << "\x1B[2J\x1B[H";
        green();
        Type("\n\n\tOk that's enough early and unnecessaryt Holiday cheer, back to the matter at \n"
            "hand....");

        s.erase();
        break;
    };



    case 29:
        Type("\n\n\tWell I particularly like wintertime.  Mainly because I get to snowboard, which is \n"
            "an amazing escape from the rest of civilized society. High up on a mountain where cell \n"
            "phones, and bosses, and cranky people down in the valley below can't call you.  It's as \n"
            "liberating to be away from that as it is to zip on down the hill at high speeds");

        break;
    case 30:
        Type("\n\n\tI grew up in San Francisco and lived there until I was 27, at which time I moved to a\n"
            "smaller town where my family could afford to live and get away from the toxicity of a city \n"
            "environment.  I started in pre-school, then I went to a parochial school for four years, then\n"
            "to another private school, and then onto an arts high school... I'd rather not dwell on my \n"
            "teenage years, because they weren't half as happy as my childhood years.");

        std::this_thread::sleep_for(std::chrono::seconds(5));
        break;

    case 31:
        Type("\n\n\tIs your name Cara?");
        std::this_thread::sleep_for(std::chrono::seconds(2));
        Type("\n\n\tBECAUSE IF MINE WERE GOMEZ ADAMS, I'D WANT YOU TO BE CARA MIA!!! <snap> <snap>");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Type("\n\n\t");

        std::this_thread::sleep_for(std::chrono::seconds(5));


    }



    cout << "\x1B[2J\x1B[H";

    Type("Anyway that's a little bit about myself for you.  I hope you enjoyed this short personal \n"
        "introduction about me, and I hope you will find me someone you'd like to perhaps investigate\n"
        "starting a relationship with.  If you're interested in Using this, I'd be happy to share \n"
        "my source code with you.\n"
        "\n\nWilliam.");
    std::this_thread::sleep_for(std::chrono::seconds(2));

    Type("Here's a sample of me singing so you can hear a bit of what I sound like...");

    Open_Link();
    exit(0);
}

void Open_Link()
{
    LPCTSTR Bass_URL = L"https://www.youtube.com/watch?v=h-SsCJ9eP9A";
    ShellExecute(NULL, L"open", Bass_URL,
        NULL, NULL, SW_SHOWNORMAL);
}

//void set_image_in_window()
//{
//    initwindow(600, 600, "GAME");
//    ifstream image("bg.png");
//    getimage(50, 50, 450, 450, image);
//    putimage(50, 50, image, COPY_PUT);
//    system("pause");
//}