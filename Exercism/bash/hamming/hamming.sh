#!/usr/bin/env bash

if [ $# -ne 2 ]; then
  echo "Usage: hamming.sh <string1> <string2>"
  exit 1
fi

DNA_1=$1;len1=${#DNA_1}
DNA_2=$2;len2=${#DNA_2}

if [ $len1 -ne $len2 ]; then
  echo "strands must be of equal length"
  exit 1
fi

HAMM_DI1F=0

if [ $len1 = 0 ]; then
  echo "0"
  exit 0
fi

for((i = 1; i <= len1; i++))do
  CHAR_1=$(echo "$DNA_1" | cut -c$i)
  CHAR_2=$(echo "$DNA_2" | cut -c$i)
  if [ "$CHAR_1" != "$CHAR_2" ]; then
    ((HAMM_DIFF+=1))
  fi
done

echo "$HAMM_DIFF"
