" Disable compatibility with vi which can cause unexpected issues.
"
"
"
"
"
"
"
"
"
"
"
"
set nocompatible

" Enable type file detection. Vim will be able to try to detect the type of file in use.
filetype on
" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
Plugin 'valloric/youcompleteme'
" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.
" plugin on GitHub repo
Plugin 'tpope/vim-fugitive'
" plugin from http://vim-scripts.org/vim/scripts.html
" Plugin 'L9'
" Git plugin not hosted on GitHub
Plugin 'git://git.wincent.com/command-t.git'
" git repos on your local machine (i.e. when working on your own plugin)
Plugin 'file:///home/gmarik/path/to/plugin'
Plugin 'DoxygenToolkit.vim'
" The sparkup vim script is in a subdirectory of this repo called vim.
" Pass the path to set the runtimepath properly.
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
" Install L9 and avoid a Naming conflict if you've already installed a
" different version somewhere else.
 Plugin 'ascenator/L9', {'name': 'newL9'}

Plugin 'kyoz/purify', { 'rtp': 'vim' }
Plugin 'morhetz/gruvbox'
" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just
" :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to
" auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line
" Enable plugins and load plugin for the detected file type.
filetype plugin on

" Load an indent file for the detected file type.
filetype indent on
" Turn syntax highlighting on.
syntax on
" Add numbers to each line on the left-hand side.
set number
" Highlight cursor line underneath the cursor horizontally.
set cursorline

" Highlight cursor line underneath the cursor vertically.
set cursorcolumn
" Set shift width to 8 spaces.
set shiftwidth=8
"To indent automatically a line depending on the previous one when you hit
"Enter, just add the following line to your .vimrc
set autoindent
"You can also use intelligent indentation for C code with Vim:
set smartindent
set cindent
" Set tab width to 8 columns.
set tabstop=8
" Use space characters instead of tabs.
"set expandtab
"set softtabstop
set softtabstop =8
" Do not save backup files.
set nobackup

" Do not let cursor scroll below or above N number of lines when scrolling.
set scrolloff=10

" Do not wrap lines. Allow long lines to extend as far as the line goes.
"set nowrap
" While searching though a file incrementally highlight matching characters as you type.
:set textwidth=80
set incsearch

" Ignore capital letters during search.
set ignorecase

" Override the ignorecase option if searching for capital letters.
" This will allow you to search specifically for capital letters.
set smartcase
" Show partial command you type in the last line of the screen.
set showcmd

" Show the mode you are on the last line.
set showmode
" Show matching words during a search.
set showmatch

" Use highlighting when doing a search.
set hlsearch

" Set the commands to savr in history default number is 20.
set history=1000
 " Enable auto completion menu after pressing TAB.
set wildmenu

" Make wildmenu behave like similar to Bash completion.
set wildmode=list:longest

" There are certain files that we would never want to edit with Vim.
" Wildmenu will ignore files with these extensions.
set wildignore=*.docx,*.jpg,*.png,*.gif,*.pdf,*.pyc,*.exe,*.flv,*.img,*.xlsx
set relativenumber
set signcolumn=yes
syntax on " This is required
colorscheme molokai
" Set tabstop, softtabstop and shiftwidth to the same value
 command! -nargs=* Stab call Stab()
 function! Stab()
   let l:tabstop = 1 * input('set tabstop = softtabstop = shiftwidth = ')
     if l:tabstop > 0
         let &l:sts = l:tabstop
            let &l:ts = l:tabstop
                let &l:sw = l:tabstop
                  endif
                    call SummarizeTabs()
                    endfunction

                     function! SummarizeTabs()
                      try
                          echohl ModeMsg
                              echon 'tabstop='.&l:ts
                                   echon ' shiftwidth='.&l:sw
                                       echon ' softtabstop='.&l:sts
                                           if &l:et
                                                echon ' expandtab'
                                                    else
                                                           echon 'noexpandtab'
                                                               endif
                                                                finally
                                                                   echohl None
                                                                      endtry
                                                                      endfunction
"colorscheme purify "--------------------------------- Set onedark theme
" PLUGINS ---------------------------------------------------------------- {{{

" Plugin code goes here.
call plug#begin('~/.vim/plugged')
Plug 'dense-analysis/ale'
 Plug 'preservim/nerdtree'
Plug 'valloric/youcompleteme'

call plug#end()
" }}}


" MAPPINGS --------------------------------------------------------------- {{{

" Mappings code goes here.
" Set the backslash as the leader key.
let mapleader = '\' 

" Press \\ to jump back to the last cursor position.
nnoremap <leader>\ ``

" Press \p to print the current file to the default printer from a Linux
" operating system.
" View available printers:   lpstat -v
" Set default printer:       lpoptions -d <printer_name>
" <silent> means do not display output.
nnoremap <silent> <leader>p :%w !lp<CR>

" Type jj to exit insert mode quickly.
inoremap jj <Esc>
nnoremap <space> :
"Pressing the letter o will open a new line below the current one.
"Exit insert mode after creating a new line above or below the current one
nnoremap o o<esc>
nnoremap O O<esc>

" Center the cursor vertically when moving to the next word during a search.
nnoremap n nzz
nnoremap N Nzz

" Yank from cursor to the end of line.
nnoremap Y y$

" Map the F5 key to run a Python script inside Vim.
" I map F5 to a chain of commands here.
" :w saves the file.
" <CR> (carriage return) is like pressing the enter key.
" !clear runs the external clear screen command.
" !python3 % executes the current file with Python.
nnoremap <f5> :w <CR>:!clear <CR>:!python3 % <CR>

" You can split the window in Vim by typing :split or :vsplit.
" Navigate the split view easier by pressing CTRL+j, CTRL+k, CTRL+h, or
" CTRL+l.
nnoremap <c-j> <c-w>j
nnoremap <c-k> <c-w>k
nnoremap <c-h> <c-w>h
nnoremap <c-l> <c-w>l

" Resize split windows using arrow keys by pressing:
" CTRL+UP, CTRL+DOWN, CTRL+LEFT, or CTRL+RIGHT.
noremap <c-up> <c-w>+
noremap <c-down> <c-w>-
noremap <c-left> <c-w>>
noremap <c-right> <c-w><

" NERDTree specific mappings.
" Map the F3 key to toggle NERDTree open and close.
nnoremap <F3> :NERDTreeToggle<cr>

" Have nerdtree ignore certain files and directories.
let NERDTreeIgnore=['\.git$', '\.jpg$', '\.mp4$', '\.ogg$', '\.iso$','\.pdf$', '\.pyc$', '\.odt$', '\.png$', '\.gif$', '\.db$']
" }}}
"
"


" VIMSCRIPT -------------------------------------------------------------- {{{

" This will enable code folding.

" Moreble the marker method of folding.
augroup filetype_vim
        autocmd!
            autocmd FileType vim setlocal foldmethod=marker
        augroup END
        
        " If the current file type is HTML, set indentation to 2 spaces.
        autocmd Filetype html setlocal tabstop=2 shiftwidth=2 expandtab
        
        " If Vim version is equal to or greater than 7.3 enable undofile.
        " This allows you to undo changes to a file even after saving it.
        if version >= 703
                set undodir=~/.vim/backup
                set undofile
                set undoreload=10000
        endif
                    
                    " You can split a window into sections by typing `:split`
                    " or `:vsplit`.
                    " Display cursorline and cursorcolumn ONLY in active
                    " window.
                    augroup cursor_off
                            autocmd!
                            autocmd WinLeave * set nocursorline nocursorcolumn
                            autocmd WinEnter * set cursorline cursorcolumn
                    augroup end
                                
                                " if gUI version of Vim is running set these
                                " options.
                                if has('gui_running')
                                    
                                        " Set the background tone.
                                            set background=dark
                                            
                                                " Set the color scheme.
                                                    colorscheme molokai
                                                    
                                                        " Set a custom font
                                                        " you have installed
                                                        " on your computer.
                                                            " Syntax: set
                                                            " guifont=<font_name>\
                                                            " <font_weight>\
                                                            " <size>
                                                                set
                                                                guifont=Monospace\
                                                                Regular\20
                                                                
                                                                    " Display
                                                                    " more of
                                                                    " the file
                                                                    " by
                                                                    " default.
                                                                        " Hide
                                                                        " the
                                                                        " toolbar.
                                                                            set
                                                                            guioptions-=T
                                                                            
                                                                                " Hide
                                                                                " the
                                                                                " the
                                                                                " left-side
                                                                                " scroll
                                                                                " bar.
                                                                                    set
                                                                                    guioptions-=L
                                                                                    
                                                                                        " Hide
                                                                                        " the
                                                                                        " the
                                                                                        " right-side
                                                                                        " scroll
                                                                                        " bar.
                                                                                            set
                                                                                            guioptions-=r
                                                                                            
                                                                                                " Hide
                                                                                                " the
                                                                                                " the
                                                                                                " menu
                                                                                                " bar.
                                                                                                    set
                                                                                                    guioptions-=m
                                                                                                    
                                                                                                        " Hide
                                                                                                        " the
                                                                                                        " the
                                                                                                        " bottom
                                                                                                        " scroll
                                                                                                        " bar.
                                                                                                            set
                                                                                                            guioptions-=b
                                                                                                            
                                                                                                                " Map
                                                                                                                " the
                                                                                                                " F4
                                                                                                                " key
                                                                                                                " to
                                                                                                                " toggle
                                                                                                                " the
                                                                                                                " menu,
                                                                                                                " toolbar,
                                                                                                                " and
                                                                                                                " scroll
                                                                                                                " bar.
                                                                                                                    " <Bar>
                                                                                                                    " is
                                                                                                                    " the
                                                                                                                    " pipe
                                                                                                                    " character.
                                                                                                                        " <CR>
                                                                                                                        " is
                                                                                                                        " the
                                                                                                                        " enter
                                                                                                                        " key.
                                                                                                                               nnoremap <F4> :if &guioptions=~#'mTr' <Bar>
                                                                                                                                    \set guioptions-=mTr<Bar>
                                                                                                                                    \else<Bar>
                                                                                                                                     \set guioptions+=mTr<Bar>
                                                                                                                                      \endif<CR>
                                                                                                                            
                                                                                                                        endif

" }}}


" STATUS LINE ------------------------------------------------------------ {{{

" Clear status line when vimrc is reloaded.
set statusline=

" Status line left side.
set statusline+=\ %F\ %M\ %Y\ %R

" Use a divider to separate the left side from the right side.
set statusline+=%=

" Status line right side.
set statusline+=\ ascii:\ %b\ hex:\ 0x%B\ row:\ %l\ col:\ %c\ percent:\ %p%%
set statusline=%<%f\ %h%m%r%{fugitive#statusline()}%=%-14.(%l,%c%V%)\ %P

" Show the status on the second to last line.
set laststatus=2 " Status bar code goes here.

" }}}
"--------------------------------------------------------------------
"" SET THE FUNCS FOR OMNI COMPLETION PER FILETYPE
"--------------------------------------------------------------------
autocmd FileType php set omnifunc=phpcomplete#CompletePHP
autocmd FileType python set omnifunc=pythoncomplete#Complete
autocmd FileType javascript set omnifunc=javascriptcomplete#CompleteJS
autocmd FileType html set omnifunc=htmlcomplete#CompleteTags
autocmd FileType css set omnifunc=csscomplete#CompleteCSS
autocmd FileType xml set omnifunc=xmlcomplete#CompleteTags
autocmd FileType php set omnifunc=phpcomplete#CompletePHP
autocmd FileType c set omnifunc=ccomplete#Complete
autocmd FileType ruby,eruby set omnifunc=rubycomplete#Complete 

set mouse=a

