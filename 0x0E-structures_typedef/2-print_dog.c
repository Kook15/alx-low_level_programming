#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - prints a struct dog
 * @d: Address of structure dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((d->name) == NULL)
			printf("Name: %s\n", "(nil)");
		else if (d->age == 0)
			printf("Age: %f\n", 0);
		else if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
		{
			printf("Name = %s\n", d->name);
			printf("Age: = %f\n", d->age);
			printf("Owner: = %s\n", d->owner);
		}
	}
}
