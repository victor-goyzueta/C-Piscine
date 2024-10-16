#!/bin/bash

if [ ! -d .git ]; then
	echo "Este no es un repositorio Git."
	exit 1
fi
git ls-files --others --ignored --exclude-standard
