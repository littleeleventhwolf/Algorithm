// 词法分析器的头文件

/* lex.h */

#ifndef LEX_H
#define LEX_H

#include "chtbl.h"

/* Define the token types recognized by the lexical analyzer. */
typedef enum Token_ {lexit, error, digit, other} Token;

/* Public Interface */
Token lex(const char *istream, CHTbl *symbol);

#endif // LEX_H