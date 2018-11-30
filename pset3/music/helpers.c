// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


#include "helpers.h"

// Notes in an octave
const string NOTES[] = {"C", "C#", "D", "D#", "E", "F",
                        "F#", "G", "G#", "A", "A#", "B"
                       };


// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // 2nd. TODO - 1/8 should return 1, 1/2 should return 4
    int numerator = atoi(&fraction[0]);
    int denominator = atoi(&fraction[2]);
    return ((8/denominator)*numerator);
}


// Calculates frequency (in Hz) of a note
int frequency(string note) {

 // note[0] is the note (A through G)
 // if note[1] == # || b (checks if flat or sharp)
 // note[2] is the octave (0 through 8)
 // else note[1] is the octave (0 through 8)
    string str1 = "A4";
    //string str2 = "#";
   // string str3 = "b";
    switch(note[0]) 
    {
        case 'C':
            break;
        case 'D':
            break;
        case 'E':
         break;
        case 'F':
            break;
        case 'G':
            break;
        case 'A':
            break;
        case 'B':
            break;

    }
    int octavecount;
    if (strcmp(note, str1) == 0)
    {
        int hertz = 440;
        return hertz;
    }
    // Checks if there is a sharp or flat
    else if (strlen(note) == 3)
    {
       //this will execute if there is a flat or sharp
       // Example C#4
       //for (int count = 0, n = sizeof(NOTES); count < n; count++)
       while note[]
       {
           
       }
        octavecount = abs(4 - atoi(&note[2]));
        return 440 * pow(2, octavecount*12/12);
    }
    // This will execute if there is no sharp or flat
    else 
    {
        octavecount = abs(4 - atoi(&note[1]));
        return 440 * pow(2, octavecount*12/12);
    }
}
// Determines whether a string represents a rest
bool is_rest(string s)
{
    // 1st. TODO
    if (s[0] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
