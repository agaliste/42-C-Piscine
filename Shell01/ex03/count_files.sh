find . -type f -o -type d -mindepth 1  | wc -l | awk '{$1=$1;print}'
