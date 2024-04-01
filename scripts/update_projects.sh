#!/bin/sh
# This script updates submodules in all Hutscape projects
# Usage: ./scripts/update_projects.sh "commit message"

# Take in the git message as the parameter
message="$1"

if [ -z "$message" ]; then
  echo "No commit message. Aborting."
  exit 1
fi

cd ..
# in for loop define the folder names to cd into
# project names are folder names: cactus, pine, palm, oak, capsicum
for project in cactus pine palm oak capsicum
do
  echo "\n\n"
  echo -e "\033[1mUpdating submodules in $project\033[0m"
  cd $project
  git submodule foreach --recursive git reset --hard HEAD
  git submodule update --remote
  git add .
  git commit -m "$message"
  git push
  cd ..
done
