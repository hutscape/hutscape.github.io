#!/bin/bash

# USAGE: $ new program-name
# EXAMPLE: $ new lora-duplex

mkdir $1
touch $1.md
cd $1
touch $1.ino
touch Makefile
