/*
 * This program is designed to ask the user for a sentence (read in the program as a string) so that it can be printed
 * in reverse order.
 * The algorithm for this program is after asking and saving the string, then we obtain the lenght of the string with the
 * function strlen(), which will be use inside the loop that will reverse it.
 * The loop works as follows: starting at the last position of the string minus one will makes us focus on the first real
 * character and not on the null space or enter ('\0'). Once we are located there, each time the loop runs (which will
 * until it is located at the last position, ergo 0) the position will go in reverse. Is like each time the loop runs, the
 * character located at the position of i is tagged and then printed. Once printed the first run is over, so the loop goes
 * on repeating this process until the condition (that i = 0) is met, in which case, 'i' will be located at the last characther.
 * Once that char is printed, the cycle is over and so the loop has been printed backwards.
 *
 * Author: Soraya Maqueda
 * Date: 18.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <string.h>

int main() {
    char string[250];//Where I save the string
    int length; //Variable to save the length of the string

    //Here I ask the user for the string
    printf("Write in here: ");
    fgets(string, sizeof(string), stdin);

    //Here I obtain the length of the string
    length = strlen(string);

    //Loop that will print backwards the string
    for (int i = length - 1; i >= 0; i--){
        printf("%c", string[i]);
    }

    return 0;
}