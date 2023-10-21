cat /etc/passwd | awk 'FS=":" {print $1}' | awk 'NR%2==1 {print $0}' | rev | sort -r | awk 'NR >= 2 && RN <= 6 {print $0}'
