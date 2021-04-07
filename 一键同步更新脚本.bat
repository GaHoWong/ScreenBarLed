@echo off
set d=%date:~0,10%
set t=%time:~0,8%
set timestamp=%d% %t%
git stash
git pull --rebase
echo "%timestamp%Finished Pull!"
pause