function solve(): void {
    const src: Map<string, number> = new Map();
    src.set("A", 1);
    src.set("B", 1);
    const dst: Map<string, number> = new Map();
    dst.set("C", 1);
    dst.set("D", 1);
    let possible: boolean = true;
    const route: Array<[string, string]> = [["A", "W1"], ["B", "W2"], ["W3", "C"], ["W4", "D"]];
    let ist: string = "";
    let ien: string = "";
    const path: Map<string, Array<string>> = new Map();
    for (const [start, end] of route) {
      if (src.get(start) === 1) {
        if (!path.has(end)) {
          path.set(end, []);
        }
        path.get(end)?.push(start);
      } else if (path.has(start) && path.get(start)!.length > 0) {
        if (dst.get(end) === 1) {
          path.get(start)?.shift();
        } else {
          ist = start;
          ien = end;
          possible = false;
          break;
        }
      } else {
        ist = start;
        ien = end;
        possible = false;
        break;
      }
    }
    if (!possible) {
      console.log(ist, ien);
      console.log("Invalid Trip");
    } else {
      console.log("Valid Trip");
    }
  }
  solve();