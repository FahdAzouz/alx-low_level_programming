#!/bin/bash

# Define the name of the library
libname="liball.a"

# Create an empty list of object files
objects=""

# Loop through each .c file
for i in *.c
do
  # Compile the .c file into a .o file
  gcc -c $i -o "${i/%.c/.o}"
  
  # Add the .o file to the list of objects
  objects="$objects ${i/%.c/.o}"
done

# Create the static library from all the .o files
ar rcs $libname $objects

# Clean up by removing the .o files
rm *.o
