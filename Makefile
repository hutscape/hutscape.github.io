.PHONY: default serve build projects

default: serve

list:
	echo "List all file extensions that are not HTML:"
	grep -riL "html" _site/tutorials || true

serve: list
	bundle exec jekyll serve --trace

build:
	jekyll build

projects:
	node scripts/query_projects.js
