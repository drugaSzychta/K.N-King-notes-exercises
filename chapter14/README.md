* Why we use #if #else directives instead of if() else() statement? [link](https://stackoverflow.com/questions/22897946/why-use-preprocessor-if-statements-instead-of-if-else)
* #pragma directive is a non standard directive, but sometimes useful. Here is a example of use pragma by changing a padding in a struct [link](https://stackoverflow.com/questions/3318410/pragma-pack-effect?noredirect=1&lq=1)
* hosted vs freestanding implementation (?)
* include guards like #ifndef prevents from include the same prototypes or other objects twice or more

## Short Review 12.12.2021

  Directives can be divided by three categories: 
* Macro directives (#define keyword)
* File directives (#include directives)
* Conditional directives (example #if #endif, #if #elseif #else)

  A preprocessor program behaves like a book editor. It makes a correction, add or remove a few lines before the book will be published. If we think this way it becomes easy to understand what is the aim of the preprocessor program. 
Preprocessor expands macros, includes a code from headers, erases comments, prepares code for compilation.
Generally speaking, it's hard to find many applications for macros right now, except for simple macros and constants, check OS, and debugging process.

Preprocessor has limited tools to check whether macros are written properly. Use macros carefully, because bugs on the preprocessor side are hard to find!

 Key phrases, that are better to remember in the future: freestanding implementation, include guards, #pragma,
