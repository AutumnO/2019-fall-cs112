When I began working on this project in Monday’s lab, I began by trying to use familiar functions I
was used to, and quickly fell down a formatting rabbit hole. Looking back now after completing the
project, I’m actually glad I forgot to commit everything I’d done and had to start fresh later in
the week. I had a lot of issues with setting up a new project later in the week. Sometimes the
folders would be set up wrong and the sln wouldn’t open, and other times my code that I thought I
saved would be gone when I reopened it. I’m still not sure what was happening but it worked out
in the end and although the file doesn’t look the same as PA2, it works similarly. 

The first problem I looked into was adding each integer in the dataset to a vector. Knowing I had 
lost most of my previous progress I looked to lecture code for ideas on how to approach this. I don’t 
fully understand the interactions between header files and separate cpp files and while I did learn a
 bit more about how they work while attempting to understand the lecture code, I didn’t feel 
 comfortable enough to include them in PA3. I also looked into the class structure but again didn’t 
 quite understand the application or why I would need to use classes yet so I left that as something 
 to do in the future if I needed to.

I began by using getline to split by spaces but quickly ran into the biggest struggle I faced during 
this assignment. Because new lines did not contain spaces, the last item from each line in the vector 
included the last number, a new line, and the first number of the next line. After trying a few 
different approaches, I decided to split the data into a vector of separate lines to break the data 
into chunks. By the time I finished, I realized this may not have been necessary, so I left a note 
where I might change that in the future. I then attempted to split each line into a vector of all the 
dataset’s individual values by going through each character of the line and adding non space 
characters to a temp value which was added to the new vector when the loop hit another space 
character. I was disappointed to see the new line issue arise again, but quickly realized an if loop 
for the last character of the line would solve it. Running the program and seeing that fixed was my 
proudest moment during this assignment.

Finally, I converted each of the strings in the value vector to ints into a new final vector that was 
ready to be manipulated at ease. Most of the issues I ran into during the rest of the assignment were 
related to being burnt out and not at my sharpest mentally. Overall I repeatedly took advantage of 
online documentation and honed my skills in understanding how to find specific class methods for 
vectors and strings, which will serve me well going forward. I feel as though I was thoroughly 
challenged by this project and learned a lot along the way, as well as gained confidence accessing 
various resources and utilizing unfamiliar methods I previously would have avoided. 
