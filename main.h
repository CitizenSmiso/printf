#ifndef HEADER
#define HEADER
#include <stdarg.h>
/*macro*/
#define BUF_LENGTH 1024

int _printf(const char *format, ...);
void error_format(const char *format);
int no_conversion(char);

/*in buffer_functions1.c*/
char *_flush(char *buffer);
char *fill_buffer(char *buffer, const char *s, int count_c, int s_length);
void print_buffer(char *buffer, int length);


/*in formatting_formatters.c*/
void fill_format(const char *format);
char *grab_format(const char *s);

/*in conversion_checks1.c*/
int conversion_char(char *s);
int conversion_string(char *s);

/* get_validity_func.c */
int (*get_validity_func(char c))(char *s);

/*in conversion_checks2.c*/
int conversion_di(char *s);

/*in unihelper.c*/
int _is_digit(char c);
char *_strncpy(char *dest, const char *src, int n);
int _strlen(const char *);
int _isdflag(char *c);

/* in unihelper2.c */
int give_precision(char *, char);
int give_width(char *, char);
char *get_result(char *, char *, int p, int w, int slen, int flen, int mlen);

/*in get_mstring_func.c */
char *(*get_mstring_func(char))(char *, va_list vl);

/* make_string1.c */
char *make_char(char *s, va_list vl);
char *make_string(char *s, va_list vl);


/* decimal.c */
char *num_string(int n);
char *make_decimal(char *s, va_list vl);

/*unsigned.c */
int conversion_u(char *s);
char *make_unsigned(char *s, va_list vl);
char *_utoa(unsigned int);

/*octal.c */
int conversion_o(char *s);
char *make_octal(char *s, va_list vl);
char *octorbi(unsigned int, int);

/*binary.c*/
int conversion_b(char *s);
char *make_binary(char *s, va_list vl);


/* hex. */
int conversion_h(char *s);
char *make_hex(char *s, va_list vl);
char *hex(unsigned int);
void reverse_array(char *a, int n);

/* heX */
char *make_heX(char *s, va_list vl);
char *heX(unsigned int);

/*structs*/
/**
 * struct valid - check if formatting is valid
 * @type: type
 * @conversion_check:function to check if a conversion string is valid
 */
typedef struct valid
{
	char type;
	int (*conversion_check)(char *);
} valid;

/**
 * struct m_string -  valid format
 * @type: type of format
 * @make_s:make the string
 */
typedef struct m_string
{
	char type;
	char *(*make_s)(char *, va_list);
} m_string;

#endif


#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int prinlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinnhex(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
