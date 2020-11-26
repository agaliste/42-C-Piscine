find . -type f  -o -type d | wc -l | awk '{print $1}'
