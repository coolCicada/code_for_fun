function solve() {
  const [a, b] = cl().split(' ');
  const bN = Number(b);
  const n = 60 * 24 / bN;
  let start = strToM(a);
  let count = 0;
  const set = new Set();
  while (!set.has(start)) {
    if (MIs(start)) {
      count += 1;
    }
    set.add(start);
    start += bN;
    start %= 1440;
  }
  co(count);
}

function strToM(str) {
  const [a, b] = str.split(':').map((item) => Number(item));
  return a * 60 + b;
}

function MIs(m) {
  m = m % 1440;
  const b = m % 60;
  const a = m / 60 | 0;
  const bStr = b < 10 ? '0' + b : '' + b;
  const aStr = a < 10 ? '0' + a : '' + a;
  return aStr[0] === bStr[1] && aStr[1] === bStr[0];
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

const readline = require('readline')
 
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
const lines = []
rl.on('line', (input) => {
  lines.push(input);
})
rl.on('close', Solution);