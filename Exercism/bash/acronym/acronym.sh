#!/usr/bin/env bash

STRING=$1

if [ ${#STRING} = 0 ]; then
  exit 1
fi

for ((i = 1; i <= ${#STRING}-1; i++))do
  CHAR=$(echo "$STRING" | cut -c$i)

