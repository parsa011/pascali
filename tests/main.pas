program HellowWorld; (* indicates the name of the program *)

(*
 includes program depedencies
 this is a preprocessor command, which tells the compiler include crt unit before actual compilation
*)
uses crt;

(* start of the main function *)
begin
   writeln('Hello World From Pascal');
   readkey;
end. (* indicates a full stop instead of ';' *)
