$(function() {
  console.log('jQuery ready');

  $('#calc').on('submit', function(e) {
    e.preventDefault();

    const a = parseFloat($('#a').val());
    const b = parseFloat($('#b').val());
    const op = $('#op').val();
    const $result = $('#result');
    const $hist = $('#hist');

    if (isNaN(a) || isNaN(b)) {
      $result.text('⚠️ Enter valid numbers');
      return;
    }

    let output;

    switch (op) {
      case '+': output = a + b; break;
      case '-': output = a - b; break;
      case '*': output = a * b; break;
      case '/': output = (b === 0) ? '∞ (division by zero)' : a / b; break;
      case '%': output = (b === 0) ? 'NaN' : a % b; break;
      default: output = 'Unknown operator';
    }

    $result.text(`= ${output}`);
    $hist.append(`<li>${a} ${op} ${b} = ${output}</li>`);
  });
});
