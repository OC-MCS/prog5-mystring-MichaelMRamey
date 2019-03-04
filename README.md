# prog5-mystring-MichaelMRamey
prog5-mystring-MichaelMRamey created by GitHub Classroom  

The problem is showing up in the copy constructor, but that's a symptom of the real problem. Most of the other functions won't work either.  
The problem is that you're not getting the correct amount of memory:  
int size = sizeof(other.str) + 1;  
sizeof returns the *compile time size* of something. This will ALWAYS be 4 for a pointer, even if it pointed to a string that was 100 chars long. You are getting the size  
of the pointer, when what you want is the size of the memory it points to. That's what strlen is for. You used strlen in your copy  
constructor...not sure why you switched to sizeof in the rest of the code?  

See me with questions when you run into something like this, and always make sure you are 100% clear on what a library function actually  
does when you use it.  

Grade: 30/40  
