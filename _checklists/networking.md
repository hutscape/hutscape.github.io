---
layout: checklists
title: 🕸 Computer Networking
description: Things to check for WiFi connectivity to the devices
checks:
  - title: WiFi
    list:
      - name: Create separate subnet for connecting to connected devices
      - name: Check no secrets are placed in firmware code
  - title: Leaked secrets
    subtitle: In case, the secrets are leaked, take these steps immediately
    list:
      - name: Reset WiFi credentials immediately
      - name: Remove secrets from entire git history
      - name: Re-connect all devices with the new WiFi credentials
references:
  - name: git secrets by Amazon to automatically check for secret patterns in code
    url: https://github.com/awslabs/git-secrets
  - name: git history repository cleaner
    url: https://rtyley.github.io/bfg-repo-cleaner/
---
