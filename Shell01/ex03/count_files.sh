find . -type f \( -iname "*.*" ! -iname ".*" \) -o -type d | wc -l | awk '{$1=$1;print}'
