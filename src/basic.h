#ifndef _BASIC_H
# define _BASC_H

#define public extern
#define private static

#define null NULL

typedef enum {
	ERROR,
	SUCCESS,
	TERMINATE
} operation_status;

typedef struct {
	operation_status status;
	char *message;
} return_message;

#define create_return_message(status, msg) ((return_message){status, msg})

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

public void panic();

#endif
