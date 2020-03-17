#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */


struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog_t dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* _DOG_H_ */
