<h1>Concept for the UNIX command line interpreter</h1>
<h2>Process in UNIX</h2>
<p>A process is an instance of an executing program. A program is any executable file held in storage on your machine. 
Anytime you run a program, you have created a process.</p>
<h3>fork()</h3>
<p>Fork system call is used for creating a new process, which is called child process, 
which runs <b><i>concurrently</i></b> with the process that makes the fork() call (parent process). 
After a new child process is created, both processes will execute the next instruction 
following the fork() system call. A child process uses the same pc(program counter), 
same CPU registers, same open files which use in the parent process.</p>
<pre>
/&#42&#42
&#42 fork() - creates a child processthat will run con-currently with the parent process
&#42
&#42 Return: On success, the PID of the child proces is returned in the parent, and 0 is returned in the child.
&#42 On faliure, -1 is returned in the parent, no child process is created, and errno is set appropriately.
&#42/
</pre>
<b>SYNOPSIS</b><br>
&#9#include &ltsys/types.h&gt
&#9#include &ltunistd.h&gt<br>
&#9pid_t fork(void)<br>
