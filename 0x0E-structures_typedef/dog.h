#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *
 * Description: structure
 */
typedef struct dog
{
char *name;
float age;
char *owner;
  /*
   *@name: dog name
   *@age: age of the dog
   *@owner: dog's owner
   */
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
