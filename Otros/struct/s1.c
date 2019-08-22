#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main()
{
	struct User user;
	struct User *ptr;

	ptr = &user;

	user.name = "Foo Bar";
	user.email = "foo@htbtn.io";
	user.age = 98;

	(*ptr).name = "Gio";
	ptr->email = "gio@htsh.io";
	ptr->age = 33;

	printf("%s\n",  ptr->name);
	printf("%s\n",  ptr->email);
	printf("%d\n",  ptr->age);

	printf("%s\n",  user.name);
	printf("%s\n",  user.email);
	printf("%d\n",  user.age);
	return (0);
}
