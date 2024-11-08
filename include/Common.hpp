#pragma once
#include <cstdint>

#define BUFFER_SIZE 10000
#define FREQUENCY 4194304 //cpu MHz
#define MS_PER_SECOND 1000000
#define CLOCK_SCALE 20
#define FPS 60
#define WINDOW_NAME "Muteboi"
#define WINDOW_H 500
#define WINDOW_W 500
#define TRUE 1
#define FALSE 0
#define OK 1
#define NOT_OK 0

typedef uint8_t byte;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

#define BIT(a, n) ((a & (1 << n)) ? 1 : 0) //check if certain bit is one
#define BIT_SET(a, n, on) (on ? (a) |= (1 << n) : (a) &= ~(1 << n)) //|= is bitwise OR assignement operator
#define BETWEEN(a, b, c) ((a >= b) && (a <= c))