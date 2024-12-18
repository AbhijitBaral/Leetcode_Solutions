#!/usr/bin/env bash

NAME=$1

if [ $# -eq 0 ]; then
  echo "One for you, one for me."
else
  echo "One for $NAME, one for me."
fi
