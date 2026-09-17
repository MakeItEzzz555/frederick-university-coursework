document.addEventListener('DOMContentLoaded', () => {
  const screen = document.querySelector('.calc-screen');
  const buttons = document.querySelectorAll('[data-key]');
  const clearBtn = document.querySelector('[data-clear]');
  const backspaceBtn = document.querySelector('[data-backspace]');
  const submitBtn = document.querySelector('[data-submit]');
  const resultNotice = document.querySelector('.result-notice');
  const historyList = document.querySelector('.history-list');

  const HISTORY_KEY = 'lab8_calc_history';

  const loadHistory = () => {
    try {
      return JSON.parse(localStorage.getItem(HISTORY_KEY)) || [];
    } catch (e) {
      return [];
    }
  };

  let history = loadHistory();

  const persistHistory = () => {
    localStorage.setItem(HISTORY_KEY, JSON.stringify(history.slice(0, 10)));
  };

  const renderHistory = () => {
    if (!historyList) return;
    historyList.innerHTML = '';
    if (!history.length) {
      historyList.innerHTML = '<div class="muted small">No calculations yet.</div>';
      return;
    }
    history.forEach((item, idx) => {
      const btn = document.createElement('button');
      btn.type = 'button';
      btn.className = 'history-item';
      btn.setAttribute('data-expr', item.expr);
      btn.innerHTML = `<span class="expr">${item.expr}</span><span class="equals">=</span><span class="result">${item.result}</span>`;
      btn.addEventListener('click', () => {
        if (screen) {
          screen.value = item.expr;
          screen.focus();
        } else {
          window.location.href = `calculator.php?expr=${encodeURIComponent(item.expr)}`;
        }
      });
      historyList.appendChild(btn);
      if (idx < history.length - 1) {
        const divider = document.createElement('div');
        divider.className = 'history-divider';
        historyList.appendChild(divider);
      }
    });
  };

  renderHistory();

  // Prefill calculator from query parameter (e.g., when coming from history page)
  const prefillFromQuery = () => {
    if (!screen) return;
    const params = new URLSearchParams(window.location.search);
    const expr = params.get('expr');
    if (expr) {
      screen.value = expr;
      screen.focus();
      // Clean query params without reloading
      const url = new URL(window.location.href);
      url.searchParams.delete('expr');
      window.history.replaceState({}, '', url);
    }
  };
  prefillFromQuery();

  const append = (val) => {
    screen.value = screen.value + val;
  };

  buttons.forEach((btn) => {
    btn.addEventListener('click', () => append(btn.dataset.key));
  });

  clearBtn?.addEventListener('click', () => {
    screen.value = '';
    resultNotice.textContent = '';
  });

  backspaceBtn?.addEventListener('click', () => {
    screen.value = screen.value.slice(0, -1);
  });

  const evaluateExpression = () => {
    const expr = screen.value;
    if (!expr.trim()) return;
    try {
      // Allow digits, operators, parentheses, decimal points, and whitespace only
      if (!/^[0-9+\-*/().\s]+$/.test(expr)) {
        throw new Error('Invalid characters');
      }
      // eslint-disable-next-line no-new-func
      const result = Function(`"use strict"; return (${expr})`)();
      if (Number.isFinite(result)) {
        screen.value = result;
        resultNotice.textContent = `Result: ${result}`;
        history = [{ expr: expr.trim(), result }].concat(history).slice(0, 10);
        persistHistory();
        renderHistory();
      } else {
        throw new Error('Invalid math');
      }
    } catch (err) {
      resultNotice.textContent = 'Invalid expression. Please adjust and try again.';
      resultNotice.classList.add('shake');
      setTimeout(() => resultNotice.classList.remove('shake'), 400);
    }
  };

  submitBtn?.addEventListener('click', evaluateExpression);

  screen?.addEventListener('keydown', (e) => {
    if (e.key === 'Enter') {
      e.preventDefault();
      evaluateExpression();
    }
  });
});
