# ACSC183 — Programming II

Small independent exercises; historical source is preserved. Academic year is unestablished. Semester placement follows the migration evidence, not the publication machine or file timestamps.

## Contents

| Folder | Work |
| --- | --- |
| [Assignments/HomeExam2](Assignments/HomeExam2/) | acsc183/HomeExam2 |
| [Labs/Files2](Labs/Files2/) | acsc183/Files2 |
| [Labs/FilesLab](Labs/FilesLab/) | acsc183/FilesLab |
| [Labs/Lab4](Labs/Lab4/) | acsc183/Lab4 |
| [Labs/Lab4Ex3](Labs/Lab4Ex3/) | acsc183/Lab4Ex3 |
| [Labs/Lab5Ex1](Labs/Lab5Ex1/) | acsc183/Lab5Ex1 |
| [Labs/Lab5Ex2](Labs/Lab5Ex2/) | acsc183/Lab5Ex2 |
| [Revision/revex3](Revision/revex3/) | acsc183/revex3 |

## Tools and run notes

Build each source/program separately. Visual Studio C++ is appropriate for the retained `.sln`/`.vcxproj` projects. Portable files can use a C++ compiler; Windows `pause`/`cls` calls and secure CRT functions retain their original platform requirements. Do not compile all exercise entry points together.

Run file-processing exercises in a disposable working directory with your own synthetic inputs: Files2 needs matching `oldmast.txt` account/customer/balance rows, `trans.txt` account/amount rows and a pre-created empty `newmast.txt`; Lab4 needs `input.txt`; Lab5Ex1/Ex2 use `CyprusNews.txt`; revex3 uses `data.txt` numbers. FilesLab writes `in.txt`/`out.txt`. Lab4 retains MSVC-specific `strcpy_s`. Lab5Ex1 requires sentence delimiters to avoid its historical zero-sentence division case. Other matching, input and console edge cases remain unverified.

Earlier compilation/syntax or limited smoke checks are recorded in the archival reports. This migration verifies byte preservation, organization, privacy and repository completeness; it makes no new claim that all interactive behavior was tested.
