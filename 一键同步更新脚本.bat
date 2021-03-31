@echo off
set d=%date:~0,10%
set t=%time:~0,8%
set timestamp=%d% %t%
git pull -r
echo "%timestamp%Finished Pull!"
pause