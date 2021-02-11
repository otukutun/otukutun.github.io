require 'benchmark'

def memonize_fibonacchi(n, memo = [])
  return n if n <= 1

  return memo[n] if !memo[n].nil?
  memo[n] = memonize_fibonacchi(n - 1, memo) + memonize_fibonacchi(n - 2, memo)

  return memo[n]
end

def fibonacci(n)
  return n if n <= 1

  return fibonacci(n - 1) + fibonacci(n - 2)
end

num = ARGV.length > 0 ? ARGV[0].to_i : 3

answer1, answer2 = 0, 0
result1 = Benchmark.realtime do
  answer1 = fibonacci(num)
end

result2 = Benchmark.realtime do
  answer2 = memonize_fibonacchi(num)
end

p "normal answer: #{answer1}, time: #{result1} second"
p "memonize answer: #{answer2}, time: #{result2} second"
