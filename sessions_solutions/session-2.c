#include <stdio.h>

void my_get_str(char []);
int my_strlen(char[]);
int is_palindrome(char []);
int search(char [], char []);
void delete(char [], char []);

int main()
{
	char inp[100];
	printf("enter something:\n");
	my_get_str(inp);
	printf("inp: %s\n", inp);
	printf("length of inp: %d\n", my_strlen(inp));
	if (is_palindrome(inp)) {
		printf("the string is a palindrome\n");
	} else {
		printf("the string is not a palindrome\n");
	}
	if (search(inp, "mad") >= 0) {
		printf("congratulations! Your are a mad person.\n");
	} else {
		printf("Sorry! Your are not a mad person.\n");
	}
	delete(inp, "mad");
	printf("inp: %s\n", inp);
	return 0;
}

void my_get_str(char str[])
{
	int i = 0;
	int c;
	while((c = getchar()) != '\n') {
		str[i] = c;
		i++;
	}
	str[i] = '\0';
}

int my_strlen(char str[])
{
	int i = 0;
	for (; str[i] != '\0'; i++)
		;
	return i;
}

int is_palindrome(char str[])
{
	int i = 0;
	int j = my_strlen(str) - 1;
	for (; i < j; i++, j--) {
		if (str[i] != str[j])
			return 0;
	}
	return 1;
}

int search(char first[], char second[])
{
	int first_len = my_strlen(first);
	int second_len = my_strlen(second);
	int i, j;
	if (first_len < second_len)
		return -1;
	for (i = 0; i < first_len; i++) {
		for (j = 0; j < second_len; j++) {
			if (first[i + j] != second[j])
				break;
		}
		if (j == second_len)
			return i;
	}
	return -1;
}

void delete(char first[], char second[])
{
	int i = 0;
	int first_len = my_strlen(first);
	int second_len = my_strlen(second);
	int index = search(first, second);
	if (index == -1)
		return;
	while (index + i < first_len) {
		first[index + i] = first[index + i + second_len];
		i++;
	}
}
