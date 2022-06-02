// ch4_menu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "platform.h"

char my_char_array[BUFSIZ + 1] = "";
char char_message_out_1[] = "Only the vowels in the string:";
char char_message_out_2[] = "will be printed:";

int main()
{
	printf("Enter the string to check for vowels:");
	fflush(stdin);
	gets_s(my_char_array);

	printf("%s\n\"%s\" \n%s\n\n", char_message_out_1, my_char_array,
		char_message_out_2);

	for (int i = 0; my_char_array[i] != '\0'; i++)
	{
		switch (my_char_array[i])
		{
		case 'A':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'E':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'I':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'O':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'U':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'a':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'e':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'i':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'o':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'u':	printf("%c is a vowel found in position %d\n",
			my_char_array[i], (i + 1));
			break;
		case 'Y':	printf("And sometimes Y!\n");
			break;
		case 'y':	printf("And sometimes y!\n");
			break;
		}
	}

	printf("\n\n");

	return 0;
}