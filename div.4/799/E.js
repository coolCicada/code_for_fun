function solve() {
  const [a, b] = cl().split(' ').map((item) => Number(item));
  const arr = cl().split(' ').map((item) => Number(item));

  let len = 0;

  let r = 0, total = 0;
  for (let i = 0; i < a; i++) {
    if (i > 0) {
      total -= arr[i - 1];
    }
    while (r < a && total + arr[r] <= b) {
      total += arr[r++];
    }
    if (total === b) len = Math.max(r - i, len);
  }

  co(len > 0 ? a - len : -1);
  
}
function Solution() {
  let n = Number(cl());
  while (n--) {
    solve();
  }
}

function cl() {
  return lines.shift();
}

function co(str) {
  console.log(str);
}

const lines = []

const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
rl.on('line', (input) => {
  lines.push(input);
})
rl.on('close', Solution);