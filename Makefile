style:
	sass _sass/hutscape.scss:assets/css/style.css --sourcemap=none --style compressed

watch:
	sass _sass/hutscape.scss:assets/css/style.css --sourcemap=none --style compressed --watch

build:
	jekyll build

serve: style build
	jekyll serve
