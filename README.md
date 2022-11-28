# push_swap

Push_Swap is a 42 project which consist to produce a sorting Algorithm following some concepts to standardize the process; We were free to develop this project with any tools created or available (respecting the 42-norm);

Within the sorting process we should work the logic arround some operations determined by the subject, Please, find bellow the list of operations:

- sa :swap 'a' - swap the first 2 elements at the top of stack 'a';
- sb :swap 'b' - swap the first 2 elements at the top of stack 'b';
- ss :sa and sb at the same time.
- pa :push 'a' - take the first element at the top of 'b' and put it at the top of 'a'.
- pb :push 'b' - take the first element at the top of 'a' and put it at the top of 'b'.
- ra :rotate 'a' - shift up all elements of stack 'a' by 1.
- rb :rotate 'b' - shift up all elements of stack 'b' by 1.
- rr :ra and rb at the same time.
- rra :reverse rotate 'a' - shift down all elements of stack 'a' by 1.
- rrb :reverse rotate 'b' - shift down all elements of stack 'b' by 1;
- rrr :rra and rrb at the same time.

# Using :

$ ./push_swap 3 4 8 9 7 5 1 0 2 6
or
$ ./push_swap "10 30 60 42 80 99 -42"
