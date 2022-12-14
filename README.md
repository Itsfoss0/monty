![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
  > monty 

## Intro 
This is a team project on stacks and queues 

## Resources 
1. [Google](https://www.google.com/webhp?q=stack%20and%20queue)
2. [How to use extern to share variables](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)
3. [Stack and queue in C](https://data-flair.training/blogs/stacks-and-queues-in-c/)
4. [Stack Operations](https://www.digitalocean.com/community/tutorials/stack-in-c)
5. [Queue Operations](https://www.edureka.co/blog/queue-in-c/)

## Learning objectives 
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/) without the help of Google the following concepts. 

* [X] What do LIFO and FIFO mean
* [ ] What is a stack, and when to use it
* [ ] What is a queue, and when to use it
* [ ] What are the common implementations of stacks and queues
* [ ] What are the most common use cases of stacks and queues
* [ ] What is the proper way to use global variables

## More info
### Data structures 
Use the following data structures, dont forget to include them in the header file.

```c
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_
```

```c

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

### Compilation and output
- The code will be compiled with the following flags 

~~~
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty 
~~~ 

- Any output must be printed on stdout
- Any error message must be printed on stderr

## The monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### Monty byte code files 
Files containing Monty byte codes usually have the ```.m``` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

~~~
itsfoss@foss:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
itsfoss@foss:~/monty$
~~~

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

~~~
itsfoss@foss:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
itsfoss@foss:~/monty$
~~~

#### The monty program 
- Usage: ```monty file```
    where __file__ is the path to the file containing Monty byte code
- If the user does not give any file or more than one argument to your program, print the error message ```USAGE: monty file```, followed by a new line, and exit with the status ```EXIT_FAILURE```
- If, for any reason, it’s not possible to open the file, print the error message ```Error: Can't open file <file>```, followed by a new line, and exit with the status ```EXIT_FAILURE```

    - where *<file>* is the name of the file

- If the file contains an invalid instruction, print the error message ```L<line_number>: unknown instruction <opcode>```, followed by a new line, and exit with the status ```EXIT_FAILURE```

    - where<line_number> is the line number where the instruction appears.
    - Line numbers always start at 1

