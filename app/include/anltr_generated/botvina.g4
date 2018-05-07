// Grammar for TKOM lessons - Botvina
grammar botvina;

input_text
	: (statement)* EOF
	;

statement
	: (assign_statement | loop_statement | if_statement | function_literal | function_apply | operand | clear_statement | exit_statement | return_statement)
	;


assign_statement
	: identifier EQ (integer | identifier) SEMICOLON
	;


if_statement
	: IF_KEYWORD condition block
	;


loop_statement
	: WHEN_KEYWORD condition block
	;


operand
	: draw | move
	;


function_literal
	: FUNCTION_KEYWORD identifier RND_BRACKET_OP parameter_list RND_BRACKET_CL block
	;

function_apply
	: identifier RND_BRACKET_OP parameter_list RND_BRACKET_CL SEMICOLON
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

boolean
	: FALSE_KEYWORD | TRUE_KEYWORD
	;

integer
	: INTEGER
	;

identifier
	: IDENTIFIER
	;

condition
	: RND_BRACKET_OP expr RELATION_OPERATOR expr RND_BRACKET_CL
	;

position
	: RND_BRACKET_OP (identifier | integer) CMM (identifier | integer) RND_BRACKET_CL
	;

atom
	: integer | boolean | function_apply | function_literal | identifier
	;

predefined_figure
	: quadrangle | point | circle | line
	;

circle
	: CIRCLE_KEYWORD identifier position size color
	;

quadrangle
	: QUADRANGLE_KEYWORD identifier position size color
	;

point
	: POINT_KEYWORD identifier position color
	;

line
	: LINE_KEYWORD identifier (position)+ color
	;

draw
	: DRAW_KEYWORD predefined_figure SEMICOLON
	;

move
	: MOVE_KEYWORD identifier position SEMICOLON
	;

size
	: integer
	;

color
	: BLACK_KEYWORD | RED_KEYWORD | BLUE_KEYWORD | GREEN_KEYWORD
	;

expr
	: atom ((MUL_OPERATOR | ADD_OPERATOR | RELATION_OPERATOR | EQ_OPERATOR | OR_OPERATOR | AND_OPERATOR) atom)*
	;

parameter_list
	: (expr (CMM expr)*)?
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

TRUE_KEYWORD
	: 'True'
	;

FALSE_KEYWORD
	: 'False'
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
	: '*' | '/' | '%'
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

