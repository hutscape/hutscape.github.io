.PHONY: default serve build projects

default: serve

serve:
	bundle exec jekyll serve --trace

build:
	jekyll build

projects:
	node scripts/query_projects.js
