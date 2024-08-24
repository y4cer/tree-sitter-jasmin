# tree-sitter-jasmin

## Description

This is a [tree-sitter](https://github.com/nvim-treesitter/nvim-treesitter) and
highlights for the [Jasmin](https://github.com/jasmin-lang/jasmin) language

## Usage

To register a new tree-sitter parser, simply add something like
```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.jasmin = {
  install_info = {
    url = 'https://github.com/y4cer/tree-sitter-jasmin',
    files = { 'src/parser.c' },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = 'jazz',
}

vim.filetype.add {
  extension = {
    jazz = 'jazz',
  },
}
```

I haven't yet added the language support to the tree-sitter repository, so to
use the highlights, you can add the `queries/highlights.scm` file to the NVIM
runtime path to `queries/jasmin/highlights.scm`.

## License

The MIT License (MIT)
Copyright (c) 2024 y4cer

