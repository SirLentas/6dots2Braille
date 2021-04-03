# 6dots2Braille
I just wanted to create a program that could translate braille text given in numerical format, like 123, 1346 etc., to a text of actual Braille characters.

How to use
==
Use the follow command to create executable _translate_.

    gcc -o translate translator.c -lm
And run it without arguments.

After execution give your text characters seperated with a dash (-).
Use _line_ to insert a line break and _0_ for the empty Braille character.

Example
==
6dots numerical:

    123-1246-0-1346-line-23-1346
Braille:

    ⠇⠫⠀⠭
    ⠆⠭
