/* Generated by re2c 0.5 on Wed Mar 12 18:31:48 2003 */
#line 1 "token.re"
//
// token.re
//
// $Author$
// $Date$
//
// Copyright (C) 2003 why the lucky stiff
//

#include "syck.h"
#include "gram.h"

#define YYCTYPE     char
#define YYCURSOR    parser->cursor
#define YYMARKER    parser->marker
#define YYLIMIT     parser->limit
#define YYTOKEN     parser->token
#define YYLINEPTR   parser->lineptr
#define YYLINE      parser->linect
#define YYFILL(n)   syck_parser_read(parser);
#define YYPOS(n)    YYCURSOR = YYTOKEN + n;

#define NEWLINE(ptr)    YYLINE++; YYLINEPTR = ptr + 1;
#define ADD_LEVEL(len)  syck_parser_add_level( parser, len );
#define CURRENT_LEVEL() syck_parser_current_level( parser );

#define ENSURE_IOPEN(last_lvl, to_len, reset) \
        if ( last_lvl->spaces < to_len ) \
        { \
            ADD_LEVEL( to_len ); \
            if ( reset == 1 ) YYPOS(0); \
            return IOPEN; \
        } 

#define ENSURE_IEND(last_lvl, to_len) \
        if ( last_lvl->spaces > to_len ) \
        { \
            syck_parser_pop_level( parser ); \
            YYPOS(0); \
            return IEND; \
        }

SyckParser *syck_parser_ptr = NULL;

int
yylex( YYSTYPE *yylval, SyckParser *parser )
{
    syck_parser_ptr = parser;
    if ( parser->cursor == NULL ) syck_parser_read( parser );

#line 61


Implicit:

    YYTOKEN = YYCURSOR;
#ifdef REDEBUG
    printf( "TOKEN: %s\n", YYTOKEN );
#endif

{
	YYCTYPE yych;
	unsigned int yyaccept;
	static unsigned char yybm[] = {
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0, 192,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	 80,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	 32,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,   0,   0,   0,   0,   0,   0, 
	  0,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,   0,   0,   0,   0,  32, 
	  0,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,  32,  32,  32,  32,  32, 
	 32,  32,  32,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	};
	goto yy0;
yy1:	++YYCURSOR;
yy0:
	if((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	if(yych <= '9'){
		if(yych <= '%'){
			if(yych <= '\n'){
				if(yych <= '\000')	goto yy16;
				if(yych <= '\t')	goto yy18;
				goto yy4;
			} else {
				if(yych <= '\037')	goto yy18;
				if(yych <= ' ')	goto yy14;
				if(yych <= '!')	goto yy11;
				goto yy18;
			}
		} else {
			if(yych <= '+'){
				if(yych <= '&')	goto yy9;
				if(yych == '*')	goto yy10;
				goto yy18;
			} else {
				if(yych <= ',')	goto yy8;
				if(yych <= '-')	goto yy2;
				if(yych <= '/')	goto yy18;
				goto yy12;
			}
		}
	} else {
		if(yych <= ']'){
			if(yych <= '@'){
				if(yych <= ':')	goto yy8;
				if(yych == '?')	goto yy8;
				goto yy18;
			} else {
				if(yych <= 'Z')	goto yy12;
				if(yych == '\\')	goto yy18;
				goto yy6;
			}
		} else {
			if(yych <= 'z'){
				if(yych == '_')	goto yy12;
				if(yych <= '`')	goto yy18;
				goto yy12;
			} else {
				if(yych == '|')	goto yy18;
				if(yych <= '}')	goto yy6;
				goto yy18;
			}
		}
	}
yy2:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yybm[0+yych] & 64)	goto yy32;
	if(yych == '-')	goto yy39;
yy3:
#line 137
	{   printf( "Unrecognized character: %s\n", YYTOKEN ); }
yy4:	yych = *++YYCURSOR;
	goto yy38;
yy5:
#line 76
	{   // Isolate spaces
                        int indt_len;
                        SyckLevel *lvl;
                        char *indent = YYTOKEN;
                        NEWLINE(indent);
                        while ( indent < YYCURSOR ) 
                        { 
                            if ( *(++indent) != '\n' ) 
                                break; 
                            else
                                NEWLINE(indent);
                        }

                        // Calculate indent length
                        lvl = CURRENT_LEVEL();
                        indt_len = 0;
                        if ( *indent == ' ' ) indt_len = YYCURSOR - indent;

                        // Check for open indent
#ifdef REDEBUG
                        printf( "CALLING CURRENT AT INDENT: %d\n", indt_len );
                        printf( "CURSOR: %s\n", YYCURSOR );
#endif
                        ENSURE_IEND(lvl, indt_len);
                        ENSURE_IOPEN(lvl, indt_len, 0);
                        return INDENT;
                    }
yy6:	yych = *++YYCURSOR;
yy7:
#line 104
	{   SyckLevel *lvl = CURRENT_LEVEL();
                        ENSURE_IOPEN(lvl, 0, 1);
                        return YYTOKEN[0]; }
yy8:	yych = *++YYCURSOR;
	if(yybm[0+yych] & 64)	goto yy32;
	goto yy3;
yy9:	yych = *++YYCURSOR;
	if(yych <= 'Z'){
		if(yych <= '/')	goto yy3;
		if(yych <= '9')	goto yy29;
		if(yych <= '@')	goto yy3;
		goto yy29;
	} else {
		if(yych <= '_'){
			if(yych <= '^')	goto yy3;
			goto yy29;
		} else {
			if(yych <= '`')	goto yy3;
			if(yych <= 'z')	goto yy29;
			goto yy3;
		}
	}
yy10:	yych = *++YYCURSOR;
	if(yych <= 'Z'){
		if(yych <= '/')	goto yy3;
		if(yych <= '9')	goto yy26;
		if(yych <= '@')	goto yy3;
		goto yy26;
	} else {
		if(yych <= '_'){
			if(yych <= '^')	goto yy3;
			goto yy26;
		} else {
			if(yych <= '`')	goto yy3;
			if(yych <= 'z')	goto yy26;
			goto yy3;
		}
	}
yy11:	yych = *++YYCURSOR;
	if(yych <= 'Z'){
		if(yych <= '/')	goto yy3;
		if(yych <= '9')	goto yy23;
		if(yych <= '@')	goto yy3;
		goto yy23;
	} else {
		if(yych <= '_'){
			if(yych <= '^')	goto yy3;
			goto yy23;
		} else {
			if(yych <= '`')	goto yy3;
			if(yych <= 'z')	goto yy23;
			goto yy3;
		}
	}
yy12:	yych = *++YYCURSOR;
	goto yy22;
yy13:
#line 124
	{   SyckLevel *lvl = CURRENT_LEVEL();
                        ENSURE_IOPEN(lvl, 0, 1);
                        yylval->nodeData = syck_new_str2( YYTOKEN, YYCURSOR - YYTOKEN );
                        return PLAIN;
                    }
yy14:	yych = *++YYCURSOR;
	goto yy20;
yy15:
#line 130
	{   goto Implicit; }
yy16:	yych = *++YYCURSOR;
yy17:
#line 132
	{   SyckLevel *lvl = CURRENT_LEVEL();
                        ENSURE_IEND(lvl, -1);
                        return 0; 
                    }
yy18:	yych = *++YYCURSOR;
	goto yy3;
yy19:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy20:	if(yybm[0+yych] & 16)	goto yy19;
	goto yy15;
yy21:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy22:	if(yybm[0+yych] & 32)	goto yy21;
	goto yy13;
yy23:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy24:	if(yych <= 'Z'){
		if(yych <= '/')	goto yy25;
		if(yych <= '9')	goto yy23;
		if(yych >= 'A')	goto yy23;
	} else {
		if(yych <= '_'){
			if(yych >= '_')	goto yy23;
		} else {
			if(yych <= '`')	goto yy25;
			if(yych <= 'z')	goto yy23;
		}
	}
yy25:
#line 120
	{   yylval->name = syck_strndup( YYTOKEN + 1, YYCURSOR - YYTOKEN - 1 );
                        return TRANSFER;
                    }
yy26:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy27:	if(yych <= 'Z'){
		if(yych <= '/')	goto yy28;
		if(yych <= '9')	goto yy26;
		if(yych >= 'A')	goto yy26;
	} else {
		if(yych <= '_'){
			if(yych >= '_')	goto yy26;
		} else {
			if(yych <= '`')	goto yy28;
			if(yych <= 'z')	goto yy26;
		}
	}
yy28:
#line 116
	{   yylval->name = syck_strndup( YYTOKEN + 1, YYCURSOR - YYTOKEN - 1 );
                        return ALIAS;
                    }
yy29:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy30:	if(yych <= 'Z'){
		if(yych <= '/')	goto yy31;
		if(yych <= '9')	goto yy29;
		if(yych >= 'A')	goto yy29;
	} else {
		if(yych <= '_'){
			if(yych >= '_')	goto yy29;
		} else {
			if(yych <= '`')	goto yy31;
			if(yych <= 'z')	goto yy29;
		}
	}
yy31:
#line 112
	{   yylval->name = syck_strndup( YYTOKEN + 1, YYCURSOR - YYTOKEN - 1 );
                        return ANCHOR;
                    }
yy32:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy33:	if(yybm[0+yych] & 64)	goto yy32;
yy34:
#line 108
	{   YYPOS(1); 
                        return YYTOKEN[0]; 
                    }
yy35:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy36:	if(yych == ' ')	goto yy35;
	goto yy5;
yy37:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy38:	if(yybm[0+yych] & 128)	goto yy37;
	if(yych == ' ')	goto yy35;
	goto yy5;
yy39:	yych = *++YYCURSOR;
	if(yych == '-')	goto yy41;
yy40:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
yy41:	yych = *++YYCURSOR;
	if(yych == '\n')	goto yy42;
	if(yych != ' ')	goto yy40;
yy42:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy43:	if(yych == '\n')	goto yy42;
	if(yych == ' ')	goto yy42;
yy44:
#line 72
	{   YYPOS(3);
                        return DOCSEP; 
                    }
}
#line 139


}

int 
yywrap()
{
    return 1;
}

void 
yyerror( char *msg )
{
    if ( syck_parser_ptr->error_handler == NULL )
        syck_parser_ptr->error_handler = syck_default_error_handler;

    (syck_parser_ptr->error_handler)(syck_parser_ptr, msg);
}

