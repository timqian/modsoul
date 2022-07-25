function chordsToCode(notes) {
    const cordsTable = {
        'F ': 'F1 A1 C2 ',
        'G ': 'G1 B1 D2 ',
        'C ': 'C1 E1 G1 ',
        'A ': 'A1 C2 E2 ',
    };

    const notesTable = {
        C1: 's1.write(30);',
        D1: 's1.write(150);',
        E1: 's2.write(30);',
        F1: 's2.write(150);',
        G1: 's3.write(30);',
        A1: 's3.write(150);',
        B1: 's4.write(30);',
        C2: 's4.write(150);',
        D2: 's5.write(30);',
        E2: 's5.write(150);',
        F2: 's6.write(30);',
        G2: 's6.write(150);',
        A2: 's7.write(30);',
        B2: 's7.write(150);',
        C3: 's8.write(30);',
    };

    const notesRemoveTable = {

    };

    const delayTable = {
        d1: 'delay(2400);',
        d2: 'delay(1200);',
        d3: 'delay(900);',
        d4: 'delay(600);',
        d8: 'delay(300);',
        d16: 'delay(150);',
    }
    Object.keys(cordsTable).forEach(key => notes = notes.replaceAll(key, cordsTable[key]));
    Object.keys(notesTable).forEach(key => notes = notes.replaceAll(key, notesTable[key]));
    Object.keys(delayTable).forEach(key => notes = notes.replaceAll(key, delayTable[key]));

    console.log(notes)
}

const chords = `
// 揸火箭，带你到
F d4 d8
G d4 d8 d4

// 天空去，在太
C d4 d8
A d8 d4 d4

// 空中两人住
F d4 d8
G d4 d8
C d4 d4
`

chordsToCode(chords);