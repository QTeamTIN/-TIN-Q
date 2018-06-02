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
fi

echo host\=$host dbname\=$dbname user\=$user password\=$password >> pqCon.properties

protoc -I=cppProto/ --cpp_out=server/src cppQ.proto
