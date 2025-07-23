#ifndef DOG_H #define DOG_H.

 /**

 struct dog provides basic information about a dog, including its name (@name).  First member's age:  Second member; @owner: Third member.
 Description: */ struct dog { char *name; float age; char *owner; }; /**

 struct dog */ typedef struct dog dog_t; void init_dog(struct dog *d, char *name, float age, char *owner); void print_dog(struct dog *d); dog_t *new_dog(char *name, float age, char *owner); void free_dog(dog_t *d); char *_strcpy(char *dest, char *src); int _strlen(char *s);

 #endifRead this for structure_typedef.
