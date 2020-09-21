# frozen_string_literal: true

require 'commonmarker'
require 'html/pipeline'
require 'sinatra'
require 'sinatra/reloader'

pipeline = HTML::Pipeline.new [
  HTML::Pipeline::MarkdownFilter,
  HTML::Pipeline::SyntaxHighlightFilter
]

get '/' do
end

get '/articles/:slug' do
  # TODO: slugkからファイル名を探す
  # アレばそれをmakrdown-to-htmlして表示する
  articles = Dir.glob('articles/*.md')
  p articles
  slug = params['slug']
  p slug
  p articles.include?('articles/' + slug)
  return [404, {}, 'Not Found'] unless articles.include?('articles/' + slug + '.md')
  md = File.read("articles/#{slug}.md")
  result = pipeline.call(md)

  p result

  result[:output].to_s
end
