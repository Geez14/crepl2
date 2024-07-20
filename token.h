#ifndef CREPL_TOKEN_H
#define CREPL_TOKEN_H
enum {
    // MISC
    TOKEN_ILLEGAL,
    TOKEN_EOF,

    // DataType
    TOKEN_IDENT,
    TOKEN_INT,
    TOKEN_FLOAT,
    TOKEN_CHAR,
    TOKEN_STRING,

    // Keyword
    TOKEN_KW_AUTO,
    TOKEN_KW_BREAK,
    TOKEN_KW_CASE,
    TOKEN_KW_CHAR,
    TOKEN_KW_CONST,
    TOKEN_KW_CONTINUE,
    TOKEN_KW_DEFAULT,
    TOKEN_KW_DO,
    TOKEN_KW_DOUBLE,
    TOKEN_KW_ELSE,
    TOKEN_KW_ENUM,
    TOKEN_KW_EXTERN,
    TOKEN_KW_FLOAT,
    TOKEN_KW_FOR,
    TOKEN_KW_GOTO,
    TOKEN_KW_IF,
    TOKEN_KW_INLINE,
    TOKEN_KW_INT,
    TOKEN_KW_LONG,
    TOKEN_KW_REGISTER,
    TOKEN_KW_RESTRICT,
    TOKEN_KW_RETURN,
    TOKEN_KW_SHORT,
    TOKEN_KW_SIGNED,
    TOKEN_KW_SIZEOF,
    TOKEN_KW_STATIC,
    TOKEN_KW_STRUCT,
    TOKEN_KW_SWITCH,
    TOKEN_KW_TYPEDEF,
    TOKEN_KW_UNION,
    TOKEN_KW_UNSIGNED,
    TOKEN_KW_VOID,
    TOKEN_KW_VOLATILE,
    TOKEN_KW_WHILE,

    // PreProcessor
    TOKEN_HASH_IF,
    TOKEN_HASH_ELIF,
    TOKEN_HASH_ELSE,
    TOKEN_HASH_ENDIF,
    TOKEN_HASH_IFDEF,
    TOKEN_HASH_IFNDEF,
    TOKEN_HASH_DEFINE,
    TOKEN_HASH_UNDEF,
    TOKEN_HASH_INCLUDE,
    TOKEN_HASH_LINE,
    TOKEN_HASH_ERROR,
    TOKEN_HASH_PRAGMA,
    TOKEN_HASH_DEFINED,

    // increment-decrement
    TOKEN_INCREMENT,
    TOKEN_DECREMENT,

    // Arithmetic
    TOKEN_ADD,
    TOKEN_SUB,
    TOKEN_DIV,
    TOKEN_REM,
    TOKEN_TILDE,
    TOKEN_AND,
    TOKKEN_OR,
    TOKEN_XOR,
    TOKEN_LEFT_SHIFT,
    TOKEN_RIGHT_SHIFT,
    TOKEN_LEFT_SHIFT,

    // Logical
    TOKEN_LOGICAL_NOT,
    TOKEN_LOGICAL_AND,
    TOKEN_LOGICAL_OR,

    // Comparision
    TOKEN_EQUAL,
    TOKEN_NOT_EQUAL,
    TOKEN_GREATER_THAN,
    TOKEN_GREATER_EQUAL,
    TOKEN_LESS_THAN,
    TOKEN_LESS_EQUAL,

    // Assignment
    TOKEN_ADD_ASSIGN,
    TOKEN_SUB_ASSIGN,
    TOKEN_STAR_ASSIGN,
    TOKEN_DIV_ASSIGN,
    TOKEN_REM_ASSIGN,
    TOKEN_AND_ASSIGN,
    TOKEN_OR_ASSIGN,
    TOKEN_XOR_ASSIGN,
    TOKEN_LEFT_SHIFT_ASSIGN,
    TOKEN_RIGHT_SHIFT_ASSIGN,

    // MISC_2
    TOKEN_OPEN_CURLY,
    TOKEN_CLOSE_CURLY,
    TOKEN_OPEN_PAREN,
    TOKEN_CLOSE_PAREN,
    TOKEN_OPEN_BRACKET,
    TOKEN_CLOSE_BRACKET,

};
#endif // CREPL_TOKEN_H
