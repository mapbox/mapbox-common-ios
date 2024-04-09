
git_username=$(git config user.name)
git_email=$(git config user.email)

if [ -z "$git_username" ] || [ -z "$git_email" ]; then
    git config --global user.email no-reply@mapbox.com && git config --global user.name MapboxCI
fi
