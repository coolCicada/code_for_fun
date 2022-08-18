function Solution() {
  let t = 0;
  const N = Number(lines[t++]);
  const res = [];
  for (let i = 0; i < N; i++) {
    const n = Number(lines[t++]);

    const strArr = [];
    for (let j = 0; j < n; j++) {
      strArr.push(lines[t++]);
    }
    
    const set = new Set(strArr);
    const r = [];
    
    for (let j = 0; j < n; j++) {
      const curr = strArr[j];
      let flag = false;
      for (let z = 1; z < curr.length; z++) {
        if (set.has(curr.substring(0, z)) && set.has(curr.substring(z))) {
          flag = true;
          break;
        }
      }
      if (flag) r.push(1)
      else r.push(0);
    }

    res.push(r.join(''));
  }
  return res.join('\n');
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
rl.on('close', () => {
  console.log(Solution());
});