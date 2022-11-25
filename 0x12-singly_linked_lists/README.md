- Format:
		```sh
		julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
		julien@ubuntu:~/0x12. Singly linked lists$ ./a 
		julien@ubuntu:~/0x12. Singly linked lists$ ./a
		[5] Hello
		[5] World
		-> 2 elements
		[0] (nil)
		[5] World
		-> 2 elements
		julien@ubuntu:~/0x12. Singly linked lists$ 
		julien@ubuntu:~/0x12. Singly linked lists$
		```
	- If `str` is `NULL`, print `[0] (nil)`
	- You are allowed to use `printf`.
@@ -65,3 +65,6 @@
	- `str` needs to be duplicated.
	- You are allowed to use `strdup`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-add_node_end.c 0-print_list.c -o d`
4. [Free list](4-free_list.c) : A function that frees a `list_t` list.
	- Prototype: `void free_list(list_t *head);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e`
