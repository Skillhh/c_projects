#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct user *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = (struct User *)malloc(sizeof(struct User));
	user->name = name;
	user->email = email;
	user->age = age;
	return user;
}

int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98);

	if (user ==  NULL)
		return (1);
	printf("User %s created!\n", user->name);
	printf("His email is: %s\n", user->name);
	printf("And he is %s years old\n", user->name);
	return (0);

}
