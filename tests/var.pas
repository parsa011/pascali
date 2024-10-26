program Variables;

uses crt;

const
	PROGRAM_NAME = 'PascalTest';

(* variables are defined here not in the building block, BEING and END *)
var
   age: integer;

begin
   writeln('your age is : ', age);
   writeln(PROGRAM_NAME);
end.
