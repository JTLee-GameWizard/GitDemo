//initialize a git repo
//git init

//to add .gitignore
//copy con .gitignore, then press ctrl + z and Enter.

//to stage a file 
//git add filename

//to stage a folder
//git add foldername/

//to stage all 
//git add -A

//to unstage a file
//git reset filename

//to unstage all
//git reset 

//to commit 
//git commit -m "commit message"

//clone remote repo
//git clone https://github.com/glfw/glfw.git

//clone remote repo right at the folder, do not create subfolder:
//git clone https://github.com/glfw/glfw.git .

//show information of the remote repo
//git remote -v

//show changes
//git diff

//show detailed log
//git log

//show oneline log
//git reflog

//push local repo to remote empty new repo, here "origin" is an arbitray name, you can change it to whatever, you can add multiple ones if you want
	/*
	1, add remote repo as your remote origin master: (the pass word can be your PAT)
		git remote add origin http://username:password@github.com/...
	2, push (this also redirect the connected remote repo if you change the name origin to the name of another remote repo)
		git push --set-upstream origin main
	*/

//remove connection to remote repo nameoftheremote should be origin if not complicated
//git remote remove nameoftheremote

//add branch
//git branch branchname

//check branches:
//git branch

//switch to branches:
//git checkout branchname

template<typename T>
T divide(T a, T b)
{
	return a / b;
}

#include <iostream>
int main()
{
	std::cout << divide(1, 2) << std::endl;
}