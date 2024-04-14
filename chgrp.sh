chown :group1 file1.txt
chown sridhar:group1 cron.sh
chown --from=:group1 group2 cron.sh
chown --references=file1.txt bctest.sh
chgrp group1 file1.txt
chgrp -R group1 example
chgrp -c group1 file2.txt
chgrp -f group2 file2.txt
chgrp -v group3 file2.txt
