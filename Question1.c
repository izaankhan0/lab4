/*
Question 1:
Write a C program that reads a student’s score and classifies it into a grade. The grading
scheme is as follows:
 90-100: A
 80-89: B
 70-79: C
 60-69: D
 Below 60: F
*/

#include<stdio.h>

int main(){
	int score;
	printf("Enter your score please:\n");
	scanf("%d", &score);
		if (score <= 100 && score >= 90){
			printf("A");
		}
		if(score <= 89 && score >= 80){
			printf("B");
		}
		if(score <= 79 && score >= 70){
			printf("C");
		}
		if(score <= 69 && score >= 60){
			printf("D");
		}
		if(score < 60){
			printf("F");
		}
	return 0;
}
