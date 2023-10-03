#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // char inputed_String[10000001];
    // // fgets(inputed_String, sizeof(inputed_String), stdin);
    // // inputed_String[strcspn(inputed_String, "\n")] = '\0'; // remove the trailing newline character
    // scanf("%s", inputed_String);
    // long long int count[26]= {0};
    // int input_String_length = strlen(inputed_String);
    // for (int i = 0; i < input_String_length; i++)
    // {
    //     int value = inputed_String[i] - 97;
    //     count[value]++;// }
                                                                // THIS CODE IS WILL TIME LIMIT ERRO______________________________________________________________
                                                                // ____________________________________________________________
    // for (int i = 0; i < 26; i++)
    // {
    //    if (count[i] != 0)
    //    {
    //     int a = i + 97;
    //      printf("%c : %d\n",a, count[i]);
    //    }
    //    count[i] = 0;
       
        // }
        // \/
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\|

    int count[26] = {0};
    char ch;

    while (scanf("%c", ch) != EOF)
    {
       count[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
     {
      printf("%c : %d\n", i, count[i - 'a']);
     }
    


    

    return 0;
}