# How to compile using `g++`

The `g++` is a C++ compiler in Linux. (If you are using Visual Studio, you don't have to do this chapter.) Executing this compiler will generate the executable of what you have coded.

The basic syntax of `g++` is following:

`g++ <filename>`

where you substitute your code name into the argument. It will generate the exeutable file called `a.out`.

Now let's try. If you type `ls`, you will see all the files contained in the current directory. You see the file called `test1.c`. Type `g++ test1.c` on your console. What do you see? Type `ls` again. Did you find `a.out` file? Type `./a.out` and see what is shown.

There is another file called `test2.c`. Try `g++ test2.c -o test`. What did you see? Any problem you got? If so, what is it? Type `nano test2.c` to open the editor. Fix the problem if the code has one. Press `Ctrl-O` and `Ctrl-X` to get back to the console. Try `g++ test2.c -o test` again. See the difference?

For more information, follow this link: http://www.cprogramming.com/g++.html or type `man g++` on your console prompt.
