COMMIT_TIMESTAMP=`date +'%Y-%m-%d %H:%M:%S %Z'`
git add .
git commit -m "push automatico, tiempo: ${COMMIT_TIMESTAMP}"
git push

