![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
  > monty 

## Intro 
This is a team project on stacks and queues 

## Resources 
1. [Google](https://www.google.com/webhp?q=stack%20and%20queue)
2. [How to use extern to share variables](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)
3. [Stack and queue in C](https://data-flair.training/blogs/stacks-and-queues-in-c/)
4. [Stack Operationss](https://www.digitalocean.com/community/tutorials/stack-in-c)
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