# So you bought a new computer?
### Is it OSX?

1. Download and install Xcode from App Store
2. Install Iterm2
 - Modify keybindings for i3-like experience
3. Install shiftit or amethyst
3. Remap caps lock to escape using pckeyboardhack
 - change from 51 to 53
2. Install [homebrew](http://brew.sh/)
3. Install [nginx](https://coderwall.com/p/dgwwuq)
```bash
$ brew install nginx
```
Then start nginx
```bash
$ sudo nginx
```
2. Get [node.js](http://nodejs.org/download/)
5. Clone your dotfiles
```bash
$ git clone http://github.com/sivwizinbiznilva/dotfiles
```
6. Move your dotfiles into ~/.dotfiles
7. Setup symlinks
8. Git clone vundle
9. Install LaTeX
10. Clone vimfiles
11. Clone Silva (vimrc, vimperatorrc)
12. Clone build script
13. cd into build script dir
14. npm install ejs, highlight.js, path, marked
15. don't forget:
```bash
alias "buildweb"="cd ~/github/course-build/; node build.js /Users/Silva/github/web /Users/Silva/github/web/template.ejs Hippo!"
```
1. If you copy your key, you must [change the ownership](http://askubuntu.com/questions/134975/copy-ssh-private-keys-to-another-computer)
```bash
chown *user:group* ~/.ssh/id_rsa*
```

### Or is it Ubuntu 13.04?
1. Install [Nodejs](https://github.com/joyent/node/wiki/Installing-Node.js-via-package-manager)

### Or is it Arch?
1. Clear your calendar (BUT IT'S SO NIMBLE!!!!)
