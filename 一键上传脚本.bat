@echo off
set d=%date:~0,10%
set t=%time:~0,8%
set timestamp=%d% %t%
 
set /p comments=please input commit comments:
git status
git add .
git commit -m " %comments% (%timestamp% updata from windows)"
git push origin master
echo "Finished Push!"
git log --stat -1
pause