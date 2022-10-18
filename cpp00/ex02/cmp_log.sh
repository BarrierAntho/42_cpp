#!/bin/bash

## VARIABLES ##
PWD=$(pwd)
LOG_42="https://projects.intra.42.fr/uploads/document/document/10875/19920104_091532.log"
LOG_42_NO_T=$(basename -a -s ".log" ${LOG_42})_no_t.log
PROG_LOG="prog.log"
PROG_LOG_NO_T=$(basename -a -s ".log" ${PROG_LOG})_no_t.log
PROG_NAME="The_Job_Of_Your_Dreams"

## CONSTANT ##
SEP_P="####################"
SEP_SP="--------------------"

## COLORS ##
RD='\033[0;31m'
GN='\033[0;32m'
YE='\033[0;33m'
BU='\033[0;34m'
MG='\033[0;35m'
NC='\033[0m'

function	diff_log()
{
	echo -e "${YE}Executing \"${FUNCNAME}\"${NC}";
	echo -e "${BU}diff between \"${1}\" and \"${2}\"${NC}";
	echo -e "${MG}Note: if no line, diff ok${NC}";
	diff --suppress-common-lines -y ${1} ${2};
	echo -e "${YE}${SEP_SP}${NC}";
	return 0;
}

function	get_prog_log()
{
	local base="Makefile";

	echo -e "${YE}Executing \"${FUNCNAME}\"${NC}";
	if [[ ! -f "${base}" ]];
	then
		echo -e "${RD}Error: no file ${base}${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	fi;
	echo -e "${BU}executing Makefile${NC}";
	make;
	if [ "$?" != 0 ];
	then
		echo -e "${RD}Error: make issue${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	else
		echo -e "${GN}Success${NC}";
	fi;
	if [[ ! -f "${3}" ]];
	then
		echo -e "${RD}Error: no file ${3}${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	fi;
	echo -e "${BU}creation of prog log file: \"${1}\"${NC}";
	./${3} > ${1}; 
	if [ "$?" != 0 ];
	then
		echo -e "${RD}Error: creation of prog log file issue${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	else
		echo -e "${GN}Success${NC}";
	fi;
	echo -e "${BU}creation of prog log file without timestamp: \"${2}\"${NC}";
	awk '{print $2}' ${1} > ${2};
	if [ "$?" != 0 ];
	then
		echo -e "${RD}Error: removing timestamp issue${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	else
		echo -e "${GN}Success${NC}";
	fi;
	echo -e "${YE}${SEP_SP}${NC}";
	return 0;
}

function	get_42_log()
{
	local base=$(basename -a ${1});

	echo -e "${YE}Executing \"${FUNCNAME}\"${NC}";
	if [[ ! -f "${base}" ]];
	then
		echo -e "${BU}Downloading 42 log file: \"${1}\"${NC}";
		wget ${1};
		if [ "$?" != 0 ]; then echo -e "${RD}Error: download 42 log issue${NC}"; echo -e "${YE}${SEP_SP}${NC}"; return 1; fi;
	fi;
	echo -e "${BU}creation of 42 log file without timestamp: \"${2}\"${NC}";
	awk '{print $2}' ${base} > ${2};
	if [ "$?" != 0 ];
	then
		echo -e "${RD}Error: removing timestamp issue${NC}";
		echo -e "${YE}${SEP_SP}${NC}";
		return 1;
	else
		echo -e "${GN}Success${NC}";
	fi;
	echo -e "${YE}${SEP_SP}${NC}";
	return 0;
}

function	main()
{
	echo "Program ${0} - Start";
	get_42_log ${LOG_42} ${LOG_42_NO_T};
	if [ "$?" != 0 ]; then return 1; fi;
	get_prog_log ${PROG_LOG} ${PROG_LOG_NO_T} ${PROG_NAME};
	if [ "$?" != 0 ]; then return 2; fi;
	diff_log ${LOG_42_NO_T} ${PROG_LOG_NO_T};
	echo "Program ${0} - End";
	return 0;
}

clear;
main;
exit $?;
