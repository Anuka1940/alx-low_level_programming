#ifndef DOG_H
#define DOG_H
/**
 *struct dog- struct containing names,age and owner
 *@name: member1
 *@age: member2
 *@owner: member3
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
