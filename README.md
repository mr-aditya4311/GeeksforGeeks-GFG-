name: Auto Update README

on:
  push:
    branches:
      - main

jobs:
  update-readme:
    runs-on: ubuntu-latest
    steps:
      - name: Checkout repo
        uses: actions/checkout@v3

      - name: Setup Python
        uses: actions/setup-python@v4
        with:
          python-version: '3.x'

      - name: Run README Generator
        run: |
          python readme-generator.py

      - name: Commit & Push changes
        run: |
          git config --global user.name "github-actions[bot]"
          git config --global user.email "github-actions[bot]@users.noreply.github.com"
          git add README.md
          git commit -m "Auto update README"
          git push
