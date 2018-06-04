grammar botvina;
 
statement
    : (assign_statement | loop_statement | if_statement | function_literal | function_apply | draw | clear_statement | exit_statement)
    ;
 
 
assign_statement
    : identifier EQ add_expr SEMICOLON
    ;
 
 
if_statement
    : IF_KEYWORD condition operation_block
    ;
 
 
loop_statement
    : WHEN_KEYWORD condition operation_block
    ; 
 
function_literal
    : FUNCTION_KEYWORD identifier RND_BRACKET_OP identifier_list? RND_BRACKET_CL block
    ;
 
function_apply
    : identifier RND_BRACKET_OP parameter_list? RND_BRACKET_CL SEMICOLON
    ;
 
clear_statement
    : CLEAR_KEYWORD SEMICOLON
    ;
 
exit_statement
    : EXIT_KEYWORD SEMICOLON
    ;
 
return_statement
    : RETURN_KEYWORD expr SEMICOLON
    ;
 
block
    : SET_BRACKET_OP (statement)* (return_statement)? SET_BRACKET_CL
    ;

operation_block
    : SET_BRACKET_OP (statement)* SET_BRACKET_CL
    ;
 
integer
    : INTEGER
    ;
 
identifier
    : IDENTIFIER
    ;
 
condition
    : RND_BRACKET_OP or_expr RND_BRACKET_CL
    ;
 
position
    : RND_BRACKET_OP add_expr CMM add_expr RND_BRACKET_CL
    ;
 
atom
    : integer | function_apply | function_literal | identifier
    ;
 
predefined_figure
    : quadrangle | point | circle | line
    ;
 
circle
    : CIRCLE_KEYWORD size color position
    ;
 
quadrangle
    : QUADRANGLE_KEYWORD size color position
    ;
 
point
    : POINT_KEYWORD color position
    ;
 
line
    : LINE_KEYWORD color position position
    ;
 
draw
    : DRAW_KEYWORD predefined_figure SEMICOLON
    ;

size
    : integer
    ;
 
color
    : BLACK_KEYWORD | RED_KEYWORD | BLUE_KEYWORD | GREEN_KEYWORD
    ;

expr
    : (add_expr | or_expr)
    ;

add_expr
    : mul_expr (ADD_OPERATOR mul_expr)*
    ;

mul_expr
    : atom (MUL_OPERATOR atom)*
    ;

or_expr
    : and_expr ( OR_OPERATOR and_expr)*
    ;

and_expr
    : eq_expr (AND_OPERATOR eq_expr)*
    ;

eq_expr
    : rel_expr (EQ_OPERATOR rel_expr)?
    ;

rel_expr
    : atom (RELATION_OPERATOR atom)?
    ;

parameter_list
    : expr (CMM expr)*
    ;

identifier_list
    : identifier (CMM identifier)*
    ;
 
INTEGER
    : '0' | (('-')? NATURAL_NUMBER)
    ;
 
CMM
    : ','
    ;
 
RND_BRACKET_OP
    : '('
    ;
 
 
RND_BRACKET_CL
    : ')'
    ;
 
 
SET_BRACKET_OP
    : '{'
    ;
 
 
SET_BRACKET_CL
    : '}'
    ;
 
 
SEMICOLON
    : ';'
    ;
 
EQ
    : '='
    ;
 
IF_KEYWORD
    : 'if'
    ;
 
FUNCTION_KEYWORD
    : 'func'
    ;
 
CLEAR_KEYWORD
    : 'clear'
    ;
 
EXIT_KEYWORD
    : 'exit'
    ;
 
RETURN_KEYWORD
    : 'return'
    ;
 
CIRCLE_KEYWORD
    : 'circle'
    ;
 
QUADRANGLE_KEYWORD
    : 'quadrangle'
    ;
 
POINT_KEYWORD
    : 'point'
    ;
 
LINE_KEYWORD
    : 'line'
    ;
 
DRAW_KEYWORD
    : 'draw'
    ;
 
MOVE_KEYWORD
    : 'move'
    ;
 
BLACK_KEYWORD
    : 'black'
    ;
 
RED_KEYWORD
    : 'red'
    ;
 
BLUE_KEYWORD
    : 'blue'
    ;
 
GREEN_KEYWORD
    : 'green'
    ;
 
WHEN_KEYWORD
    : 'when'
    ;
 
MUL_OPERATOR
    : '*' | '/'
    ;
 
ADD_OPERATOR
    : '+' | '-'
    ;
 
RELATION_OPERATOR
    : '<' | '<=' | '>' | '>='
    ;
 
EQ_OPERATOR
    : '==' | '!='
    ;
 
AND_OPERATOR
    : '&&'
    ;
 
OR_OPERATOR
    : '||'
    ;
 
IDENTIFIER
    : (ALPHA | '_') (ALPHA_NUM | '_')*
    ;
 
WS: [ \t\r\n]+ -> skip ;
 
fragment ALPHA_NUM
    : ALPHA | DIGIT
    ;
 
fragment ALPHA
    : [A-Za-z]
    ;
 
fragment NATURAL_NUMBER
    : NON_ZERO_DIGIT (DIGIT)*
    ;
 
fragment DIGIT
    : [0-9]
    ;
 
fragment NON_ZERO_DIGIT
    : [1-9]
    ;
