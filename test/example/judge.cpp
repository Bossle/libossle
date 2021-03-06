#include "judge/judge-base.cpp"

void judge(fstream& fin, fstream& fsol, FormatJudge& fout) {
  cout << fin.rdbuf() << flush;

  long long int sol;
  fsol >> sol;
  long long int ans;
  fout >> ans << '\n';
  cerr << "Expected " << sol << ", got " << ans << endl;
  if (ans != sol) {
    cerr << "Incorrect answer" << endl;
    exit(WrongAnswer);
  }
}

