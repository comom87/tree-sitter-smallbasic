# expected Output Syntax Tree Generator
# input : tree-sitter parsing result : Syntax Tree
# output : Expected Output Syntax Tree(Use to write test file)

import re

def clean_code_syntax_tree(syntax_tree):
    # [] - [] delete
    syntax_tree = re.sub(r'\[\d+, \d+\] - \[\d+, \d+\]', '', syntax_tree)
    # .. ) white space delete
    syntax_tree = re.sub(r'\(\s+', '(', syntax_tree)
    syntax_tree = re.sub(r'\s+\)', ')', syntax_tree)
    print(syntax_tree)
    return syntax_tree

# write down here your parsing result
syntax_tree = """

"""

expected_output_syntax_tree = clean_code_syntax_tree(syntax_tree)

# If your code too long, use this.
# your expected output syntax tree will be save in the generator folder by .txt file
with open('./test/generator/expected_output_syntax_tree.txt', 'w', encoding='utf-8') as file:
    file.write(expected_output_syntax_tree)