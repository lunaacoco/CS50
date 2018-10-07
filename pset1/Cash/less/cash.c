#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float i;
    int amount = 0;
    do
    {
        i = get_float("How much do I owe you?  ");
    }
    while(i < 0);

    //float * 100, dann in int umwandeln

    while(i >= 25)
    {
            i = i - 25;
            amount++;
    }
    while(i >= 10)
    {
        i = i - 10;
        amount++;
    }
    while(i >= 5)
    {
        i = i - 5;
        amount++;
    }
    while(i >= 1)
    {
        i = i - 1;
        amount++;
    }
    printf("Your change has %i\n coins.", amount);
}
// Float in int umwandeln, vorher mal 100 rechnen
// Nicht alles in eine while loop machen, da es sonst falsche Münzen wählt
// Variable erstellen, die die Anzahl der verwendeten Münzen zählt