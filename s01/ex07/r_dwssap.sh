#!/bin/sh
egrep -o '^_[a-zA-Z0-9]+' /etc/passwd | rev | sort -r |  awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' |tr "\n" ", "| sed -e 's/,$/./'
