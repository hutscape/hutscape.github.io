style:
	sass _sass/hutscape.scss:assets/css/style.css --sourcemap=none --style compressed

build:
	jekyll build

serve: style build
	jekyll serve
