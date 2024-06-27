@echo off

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int 

pushd bin-int

cl ..\main.cpp

popd

move bin-int\main.exe bin\main.exe