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

// show log with changes
//git log --stat

//push local repo to remote empty new repo, here "origin" is an arbitray name, you can change it to whatever, you can add multiple ones if you want
	/*
	1, add remote repo as your remote origin master: (the pass word can be your PAT)
		git remote add origin http://username:password@github.com/...
	2, push (this also redirect the connected remote repo if you change the name origin to the name of another remote repo)
		git push --set-upstream origin main
		this can also be written as: git push -u origin main
	*/

//remove connection to remote repo nameoftheremote should be origin if not complicated
//git remote remove nameoftheremote

//add branch
//git branch branchname

//check branches:
//git branch

//switch to branches:
//git checkout branchname

//push local new branch to remote repo (create the new branch to the remote repo as well)
//git push -u origin branchname

//steps to merge branch
/*
	1, switch back to local main branch
		git checkout main
	2, pull from remote main branch just in case other people have worked on it
		git pull origin main
	3, (optional) check if branch has been merged.
		git branch --merged
	4, merge branchname to main branch locally
		git merge branchname
	5, push to remote main branch
		git push origin main
*/

// remove a branch after merging
/*
	1, check if the branch is merged
	git branch --merged
	2, check if branches are up to date on both local and remote repo
	git reflog
	3, push if branch on remote repo is not up to date with local
	git push -u origin branchname
	4, delete branch locally
	git branch -d branchname
	5, delete branch in remote repo
	git push origin -d branchname
	6, check branches again:
	git branch

*/

template<typename T>
T divide(T a, T b)
{
	return a / b;
}

template<typename T>
T subtract(T a, T b)
{
	T result = a - b;
	return result;
}

#include <iostream>
int main()
{
	std::cout << divide(1, 2) << std::endl;
	std::cout << subtract(1, 2) << std::endl;
}