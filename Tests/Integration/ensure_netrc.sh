HOMEDIR=~
eval HOMEDIR=$HOMEDIR
FILE="$HOMEDIR/.netrc"
SDK_HOST="api.mapbox.com"

if grep -q $SDK_HOST $FILE; then
    echo "Entry for SDK Registry, not appending credentials."
else
    echo "machine api.mapbox.com" >> ~/.netrc
    echo "login mapbox" >> ~/.netrc
    echo "password ${MAPBOX_DOWNLOAD_TOKEN}" >> ~/.netrc
    echo "Entry added to netrc"
fi
