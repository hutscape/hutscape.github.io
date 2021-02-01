serve: build
	bundle exec jekyll serve

build:
	jekyll build

projects:
	node scripts/query_projects.js
