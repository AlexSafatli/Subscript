Subscript
=========

An attempt to construct a toy language for learning the process of creating a compiler. Done while reading [The Dragon Book](http://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) at a slow and methodological pace.

A general philosophy of [KISS](http://en.wikipedia.org/wiki/KISS_principle) is followed, alongside [DRY](http://en.wikipedia.org/wiki/Don't_repeat_yourself). Goals of this language are the following:

  - **Object-centric design**. Functions and types are all objects, even though they may not necessarily be implemented in the backend as such.
  - **Implicit generics**. To avoid more keystrokes, generics are automatically inferred when needed.
  - **Logical and functional paradigms**. The language is intended to be a fusion of concepts found in the [Haskell](https://www.haskell.org) and [Prolog](http://en.wikipedia.org/wiki/Prolog) languages with a more fluid and smooth syntax.