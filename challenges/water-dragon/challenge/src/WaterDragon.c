/* Generated by re2c 1.1.1 on Sun Feb 24 06:12:39 2019 */
#line 1 "WaterDragon.re"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>

char *g_Username, *g_ClientID;
bool g_LoggedIn;

char **ftpglob(register char *v);
void blkfree(char **e);
extern char *home;

char linebuf[512];

static bool process_input()
{
	char *p;
	const char *YYMARKER, *YYCURSOR, *id, *client; 
	volatile char *curClient = g_ClientID;

	if(fgets(linebuf, 511, stdin) == NULL) return false;
	p = strchr(linebuf, '\n');
	if(p) *p = 0;
	p = strchr(linebuf, '\r');
	if(p) *p = 0;

	YYCURSOR = linebuf;

	const char *yyt1;const char *yyt2;

#line 36 "WaterDragon.c"
{
	u_int8_t yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy2;
	case 'C':
	case 'c':	goto yy6;
	case 'D':
	case 'd':	goto yy7;
	case 'G':
	case 'g':	goto yy8;
	case 'H':
	case 'h':	goto yy9;
	case 'L':
	case 'l':	goto yy10;
	case 'P':
	case 'p':	goto yy11;
	case 'R':
	case 'r':	goto yy12;
	case 'S':
	case 's':	goto yy13;
	case 0xC3:	goto yy14;
	default:	goto yy4;
	}
yy2:
	++YYCURSOR;
#line 46 "WaterDragon.re"
	{
		return true;
	}
#line 67 "WaterDragon.c"
yy4:
	++YYCURSOR;
yy5:
#line 44 "WaterDragon.re"
	{ printf("error.. cursor is %s, marker is %s, and ch is %02x / '%c'\n", YYCURSOR, YYMARKER, yych, yych); return false; }
#line 73 "WaterDragon.c"
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'W':
	case 'w':	goto yy15;
	default:	goto yy5;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy17;
	default:	goto yy5;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy18;
	default:	goto yy5;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy19;
	default:	goto yy5;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'I':
	case 'i':	goto yy20;
	case 'O':
	case 'o':	goto yy21;
	default:	goto yy5;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'O':
	case 'o':	goto yy22;
	case 'U':
	case 'u':	goto yy18;
	default:	goto yy5;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy23;
	default:	goto yy5;
	}
yy13:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'I':
	case 'i':	goto yy24;
	default:	goto yy5;
	}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xBA:	goto yy25;
	default:	goto yy5;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy26;
	default:	goto yy16;
	}
yy16:
	YYCURSOR = YYMARKER;
	goto yy5;
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy27;
	default:	goto yy16;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy28;
	default:	goto yy16;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy30;
	default:	goto yy16;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'S':
	case 's':	goto yy31;
	default:	goto yy16;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'G':
	case 'g':	goto yy32;
	default:	goto yy16;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'S':
	case 's':	goto yy18;
	default:	goto yy16;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy33;
	default:	goto yy16;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy34;
	default:	goto yy16;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'S':
	case 's':	goto yy35;
	default:	goto yy16;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy36;
	default:	goto yy16;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy28;
	default:	goto yy16;
	}
yy28:
	++YYCURSOR;
#line 104 "WaterDragon.re"
	{
		printf("300 Command not implemented\n");
		return true;
	}
#line 233 "WaterDragon.c"
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'P':
	case 'p':	goto yy37;
	default:	goto yy16;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy38;
	default:	goto yy16;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'I':
	case 'i':	goto yy40;
	default:	goto yy16;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy28;
	default:	goto yy16;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy41;
	default:	goto yy16;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'A':
	case 'a':	goto yy42;
	default:	goto yy16;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:
		yyt1 = YYCURSOR;
		goto yy43;
	default:	goto yy16;
	}
yy37:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy45;
	goto yy16;
yy38:
	++YYCURSOR;
#line 109 "WaterDragon.re"
	{
		printf("200. flag.txt\n200 Done!\n");
		return true;
	}
#line 382 "WaterDragon.c"
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy47;
	default:	goto yy16;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy48;
	default:	goto yy16;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'M':
	case 'm':	goto yy49;
	default:	goto yy16;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy50;
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:	goto yy43;
	default:	goto yy16;
	}
yy45:
	++YYCURSOR;
#line 114 "WaterDragon.re"
	{
		printf("200. Recognized commands\n200. LOGIN userID clientID - perform login\n200. HELP - this command\n200. SITE GLOB parameter - perform server side globbing\n200. LIST - lists files on server\n200 Done!");
		return true;
	}
#line 504 "WaterDragon.c"
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy52;
	default:	goto yy16;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy53;
	case 'G':
	case 'g':	goto yy54;
	case 'I':
	case 'i':	goto yy55;
	default:	goto yy16;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy56;
	default:	goto yy16;
	}
yy50:
	++YYCURSOR;
	id = yyt1;
#line 119 "WaterDragon.re"
	{
		char **results;

		results = ftpglob(id);
		if(! results) {
			printf("321 No such directory \"%s\"\n", id);
			return true;
		}
		
		// due to tilde open bracket issue here, we free() an arbitrary
		// pointer
		blkfree(&results[1]);

		printf("331 Unable to change working directory to \"%s\"\n", id);

		free(results[0]);
		free(results);

		return true;
	}
#line 553 "WaterDragon.c"
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt1 = YYCURSOR;
		goto yy57;
	default:	goto yy16;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'X':
	case 'x':	goto yy59;
	default:	goto yy16;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy60;
	default:	goto yy16;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy61;
	default:	goto yy16;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy62;
	default:	goto yy16;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy63;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy57;
	default:	goto yy16;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy64;
	default:	goto yy16;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':
	case 'o':	goto yy65;
	default:	goto yy16;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy66;
	default:	goto yy16;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:
	case ' ':	goto yy16;
	default:
		yyt1 = YYCURSOR;
		goto yy67;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt2 = YYCURSOR;
		goto yy69;
	default:	goto yy16;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':
	case 'c':	goto yy71;
	default:	goto yy16;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'B':
	case 'b':	goto yy72;
	default:	goto yy16;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy73;
	default:	goto yy16;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy16;
	case ' ':	goto yy74;
	default:	goto yy67;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy75;
	case '-':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy69;
	default:	goto yy16;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy77;
	default:	goto yy16;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy78;
	default:	goto yy16;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'X':
	case 'x':	goto yy71;
	default:	goto yy16;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:
	case ' ':	goto yy16;
	default:
		yyt2 = YYCURSOR;
		goto yy79;
	}
yy75:
	++YYCURSOR;
	id = yyt1;
	client = yyt2;
#line 50 "WaterDragon.re"
	{
		if(strncmp(id, "anonymous", 9) == 0) {
			if(!g_Username) {
				g_Username = strndup(id, (int)(client - id - 1));
			}

			if(curClient) free(curClient);

			g_ClientID = strndup(client, (int)(YYCURSOR - client));

			printf("200 Successfully logged in!\n");
			g_LoggedIn = true;
			return true;
		}

		g_LoggedIn = false;
		printf("400 only supports anonymous logins!\n");
		return true;
	}
#line 899 "WaterDragon.c"
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt1 = YYCURSOR;
		goto yy81;
	default:	goto yy16;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:
		yyt1 = YYCURSOR;
		goto yy83;
	default:	goto yy16;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy85;
	case ' ':	goto yy16;
	default:	goto yy79;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy87;
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy81;
	default:	goto yy16;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy89;
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:	goto yy83;
	default:	goto yy16;
	}
yy85:
	++YYCURSOR;
	id = yyt1;
	client = yyt2;
#line 140 "WaterDragon.re"
	{
		if(! g_Username) {
			if(strncmp(id, "anónimo", (int)(client - id - 1)) != 0) {
				printf("400 Login failed\n");
				return true;
			}

			g_Username = strndup(id, (int)(client - id - 1));
		}

		if(g_ClientID) {
			free(g_ClientID);
			g_ClientID = NULL;
		}

		g_ClientID = strdup(client);

		printf("200 Login OK\n");
		return true;
	}
#line 1284 "WaterDragon.c"
yy87:
	++YYCURSOR;
	id = yyt1;
#line 70 "WaterDragon.re"
	{
		char buf[128];
		snprintf(buf, sizeof(buf), "300 Command \"%.*s\" is not supported", (int)(YYCURSOR - id), id);
		printf(buf);
		return true;
	}
#line 1295 "WaterDragon.c"
yy89:
	++YYCURSOR;
	id = yyt1;
#line 77 "WaterDragon.re"
	{
		// perform wuftpd ftpglob()
		char **result, **iter;
		char *path;
		int i = 0;

		path = strndup(id, (int)(YYCURSOR - id));
		iter = result = ftpglob(path);

		if(iter) {
			while(*iter) {
				i++;
				printf("220. %s\n", *iter);
				iter++;
			}
			printf("200 Done - %d entries!\n", i);

			blkfree(result);
			free(result);
		} else {
			printf("400 No files found!\n");
		}

		free(path);
		return true;
	}
#line 1326 "WaterDragon.c"
}
#line 161 "WaterDragon.re"

	return false;
}

int main(int argc, char **argv)
{
	bool cont = true;

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("200 WaterDragon File Transfer Daemon\n");

	home = "/home/dragon";

	while(cont) {
		cont = process_input();
	}

	printf("200 Thank you, have a nice day!\n");
}