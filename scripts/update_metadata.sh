#!/bin/bash

# Find all Markdown files in the top-level of the _tutorials directory
find ./_tutorials -maxdepth 1 -type f -name "*.md" | while read -r file
do
    # Get the last Git commit date for the file
    git_commit_date=$(git log -1 --format=%at -- "$file")

    # Convert the Git commit date to 'YYYY-MM-DD' format using Python
    last_modified=$(python -c "from datetime import datetime, timezone; print(datetime.fromtimestamp($git_commit_date, tz=timezone.utc).strftime('%Y-%m-%d'))")

    # Create metadata line
    metadata="date_updated: $last_modified"

    # Create a temporary file with metadata inserted on the second line
    tmpfile=$(mktemp)
    awk 'NR==1{print}NR==1{print "'"$metadata"'"}NR>1{print}' "$file" > "$tmpfile"

    # Replace the original file with the temporary file
    mv "$tmpfile" "$file"
done
