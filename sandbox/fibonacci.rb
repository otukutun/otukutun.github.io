require 'benchmark'

def fibonacci(n)
  return n if n <= 1

  return fibonacci(n - 1) + fibonacci(n - 2)
end

num = ARGV.length > 0 ? ARGV[0].to_i : 3

result = Benchmark.realtime do
  p fibonacci(num)
end

p "time: #{result} second"
