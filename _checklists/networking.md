---
layout: checklists
title: networking
description: Computer networking
---

# Networking

## WiFi

- [ ] Create separate subnet for connecting to connected devices
- [ ] Check no secrets are placed in firmware code with [git secrets](https://github.com/awslabs/git-secrets)

## Leaked secrets

In case, secrets are leaked, these are the immediately steps to take in order:

1. Reset secrets immediately
1. Remove secrets from [entire git history](https://rtyley.github.io/bfg-repo-cleaner/) in code
1. Re-connect all devices with the new secrets
