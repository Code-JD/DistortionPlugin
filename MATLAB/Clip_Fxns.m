%% Setup
x = linspace(-100, 100, 201);
htan = tanh(0.25 .* x);
softmax = 2 ./ (1 + exp(-0.25 .* x)) - 1;
itan = (2 / pi) .* atan(x);

%% Plot
figure;
hold on;
plot(x, itan, 'r', 'LineWidth', 2);
plot(x, htan, 'b', 'LineWidth', 2);
plot(x, softmax, 'g', 'LineWidth', 2);
xlabel('Input');
ylabel('Output');
title('Clipping Function Comparison');
legend('atan', 'tanh', 'soft-max', 'Location', 'NortheastOutside');
hold off;


