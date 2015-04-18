Subscript
=========

An attempt to construct a toy language for learning the process of creating a compiler. Done while reading [The Dragon Book](http://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) and "[Let's Build a Compiler!](http://compilers.iecc.com/crenshaw/)" at a slow and methodological pace.

A general philosophy of [KISS](http://en.wikipedia.org/wiki/KISS_principle) is followed, alongside [DRY](http://en.wikipedia.org/wiki/Don't_repeat_yourself). Goals of this language are the following:

  - **Object-centric design**. Functions and types are all objects, even though they may not necessarily be implemented in the backend as such.
  - **Reflective programming**. This language will strongly support the notion of reflection and observation (such as in [KVO](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/KeyValueObserving/KeyValueObserving.html) as it is found in Objective-C or Swift), with a focus on *other languages* and interfaces that are fed to it.
  - **Multi-paradigm**. With a focus on declarative programming (functional and logical). The language will possess a fusion of concepts found in the [Haskell](https://www.haskell.org) and [Prolog](http://en.wikipedia.org/wiki/Prolog) languages with a more fluid and smooth syntax.
  - **Implicit generics**. To avoid more keystrokes, generics are automatically inferred when needed.