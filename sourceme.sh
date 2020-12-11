#!/bin/bash

# Hacky version to point cross compiler at known locations on work machine vs. home machine
if [ "$(uname)" == "Darwin" ]; then
    export PATH="$HOME/development/osdev/cc/bin:$PATH"
elif [ "$(expr substr $(uname -s) 1 5)" == "Linux" ]; then
    export PATH="$HOME/asdf:$PATH"
fi
