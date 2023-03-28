#include "main.h"

/**
* add - Entry point
* @a: int value
* @b: int value
* Return: returns an int
* Description: Adds two ints then
* returns result in pointer form
*/
int add(int *a, int *b){
  int *result;

  *result = a + b;
  return (result);
}

/**
* sub - Entry point
* @a: int value
* @b: int value
* Return: returns an int
* Description: subtracts two ints then
* returns result in pointer form
*/
int sub(int *a, int *b){
  int *result;

  *result = a - b;
  return (result);
}

/**
* div - Entry point
* @a: int value
* @b: int value
* Return: returns an int
* Description: divides two ints then
* returns result in pointer form
*/
int div(int *a, int *b){
  int *result;

  *result = a / b;
  return (result);
}

/**
* mul - Entry point
* @a: int value
* @b: int value
* Return: returns an int
* Description: multiplies two ints then
* returns result in pointer form
*/
int mul(int *a, int *b){
  int *result;

  *result = a * b;
  return (result);
}

/**
* mod - Entry point
* @a: int value
* @b: int value
* Return: returns an int
* Description: gets the modulus 
* of an int then
* returns result in pointer form
*/
int mod(int *a, int *b){
  int *result;

  *result = a % b;
  return (result);
}
