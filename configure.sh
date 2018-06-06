#!/bin/bash

if ! [ -e pqCon.properties ]
then
	echo "host:"
	read host
	echo "database name:"
	read dbname
	echo "user:"
	read user
	echo "password:"
	read password
	echo host\=$host dbname\=$dbname user\=$user password\=$password >> pqCon.properties
fi


protoc -I=cppProto/ --cpp_out=server/src cppQ.proto
mv server/src/cppQ.pb.cc server/src/cppQ.pb.cpp
