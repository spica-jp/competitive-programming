#!/usr/bin/bash

DIR="/home/$(whoami)/competitive-programming/atcoder/abc$1"

if [ -d $DIR ]; then
echo "Directory /home/$(whoami)/competitive-programming/atcoder/abc$1 exists."
else
mkdir /home/$(whoami)/competitive-programming/atcoder/abc$1
cd /home/$(whoami)/competitive-programming/atcoder/abc$1
cat << EOF | tee abc$1_a.cpp abc$1_b.cpp abc$1_c.cpp abc$1_d.cpp > /dev/null
#include <bits/stdc++.h>
using namespace std;

int main(){
}
EOF
ls -l
code .
fi