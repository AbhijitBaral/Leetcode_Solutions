#!/usr/bin/env bash

(($1%3))||print+=Pling
(($1%5))||print+=Plang
(($1%7))||print+=Plong

echo ${print:-$1}



