/*prints _putchar*/
int _putchar (char c);

/* function that concatenates 2 strings*/
char *_strcat(char *dest, char *src);

/* function concatenates two strings*/
char *_strncat(char *dest, char *src, int n);

/*function that copies a string*/
char *_strncpy(char *dest, char *src, int n);

/* function that compares two strings*/
int _strcmp(char *s1, char *s2);

/* function that reverses the content of an array of integers*/
void reverse_array(int *a, int n);

/*function that changes all lowercase letters of a string to uppercase*/
char *string_toupper(char *);

/*function that capitalizes all words of a string*/
char *cap_string(char *);

/* function that encodes a string into 1337*/
char *leet(char *);

/*function that encodes a string using rot13*/
char *rot13(char *);

/*function that prints an integer*/
void print_number(int n);

/* function that adds two numbers*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/*function that prints a buffer*/
void print_buffer(char *b, int size);
