#define _GNU_SOURCE
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define QNO 30
#define totques 10
#define size 200


void asked(char option[size], const char option1[size], const char option2[size],
	const char option3[size], const char option4[size],const char correct[size], const char category[size],FILE * fp,int *);
	
void Display();

void main()
{
	char text[size], option1[size], option2[size], option3[size], option4[size], option[size], correct[size], category[size];
	char empty[256][256];
	int i, j, k;
	int arr[QNO], x, loc;
	time_t t;
	char line[256];
	int score = 0;

	FILE *fp;
	FILE *output;
	fp = fopen("question_bank.txt", "r");
	output = fopen("your_answers.txt", "w");
}	
	
