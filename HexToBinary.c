//This program convert Hex to binary.

#include<stdio.h>
#include<string.h>

#define SIZE 50

char* HexToBin(char[]);

char*  ChangeToBinary(char);

int main()
{
    char HexValue[] = "9AB";

    printf("%s",HexToBin(HexValue));

    return 0;
}

//This function convert hex to binary

char* HexToBin(char HexValue[])
{
    static char BinaryValue[SIZE];

    for(int i = 0; i<strlen(HexValue); i++)
    {
        strcat(BinaryValue,ChangeToBinary(HexValue[i]));
    }

    return BinaryValue;
}

//This Function return hex value of the character.

char* ChangeToBinary(char Character)
{
    switch(Character)
    {
			case '0' :

			    return "0000";

			case '1' :

			    return "0001";

			case '2' :

			    return "0010";

			case '3' :

			    return "0011";

			case '4' :

			    return "0100";

			case '5' :

			    return "0101";

			case '6' :

			    return "0110";

			case '7' :

			    return "0111";

			case '8' :

			    return "1000";

			case '9' :

			    return "1001";

			case 'A' :

			    return "1010";

			case 'B' :

			    return "1011";

			case 'C' :

			    return "1100";

			case 'D' :

			    return "1101";

			case 'E' :

			    return "1110";

			case 'F' :

			    return"1111";

			default : printf("\nInvalid Entry, Please Try Again  %c",Character);
    }
}

