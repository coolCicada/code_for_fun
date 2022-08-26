function solve() {
  let n = Number(cl());
  let res = '';
  
  for (let i = 9; i > 0; i--) {
    if (i <= n) {
      res = i + res;
      n -= i;
    }
  }

  co(res);
}

function Solution() {
  let n = Number(cl());
  while (n--) solve();
}

let i = 0;
const lines = []

function cl() { return lines[i++] }
function co(str) { console.log(str)}
const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
rl.on('line', (input) => lines.push(input));
rl.on('close', Solution);