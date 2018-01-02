#!/bin/sh
# Generate Flatbuffer source files for a good time! 🎉

SCRIPT_NAME=$(basename $0)
FLATBUFFER_SRC=src/main/flatbuffer

# Text Color and Font Style
BOLD=$(tput bold)
RED=$(tput setaf 1)
GREEN=$(tput setaf 2)
YELLOW=$(tput setaf 3)
RESET=$(tput sgr0)

verify_execution_path() {
    if [ ! -f "$1" ]; then
        echo ""
        echo "$2"
        echo ""
        exit 1
    fi
}

verify_product_installation() {
    command -v $1 >/dev/null 2>&1 || {
        echo ""
        echo "⛔️  ${BOLD}${RED}$1 must be installed to use this script. $2 ${RESET}"
        echo ""
        exit 1
    }
}

show_usage() {
  echo "usage: ./${SCRIPT_NAME} target_language"
  echo "\narguments:"
  echo "      target_language: Must be one of [cpp, java, ObjC] or [all]."
  echo "                       * \`all\` is the default." 
}

check_duplicates() {
    local duplicates=`find ${FLATBUFFER_SRC}/**/*.fbs -type f -exec basename {} \; | sort | uniq -d`
    if [ "${duplicates}" != "" ]; then
        echo "\n${RED}▸ ${BOLD}There are duplicate filenames in the flatbuffer source directory.\n"
        echo "This leads to problems in the generated source, you'll probably need a more specific name." 
        echo "Please review files named:${RESET}"
        echo "${YELLOW}${duplicates}${RESET}"
        exit 1
    fi
}

## $1 Target Language
compile_flatbuffers() {
    local target_language=$1
    local target_language_option="--${target_language}"
    local target_folder=`echo "${target_language}" | tr "[:upper:]" "[:lower:]"`

    echo "${GREEN}▸ ${BOLD}Compiling Flatbuffers for ${target_language}.${RESET}"

    pushd ${FLATBUFFER_SRC} > /dev/null
    rm -rf "../${target_folder}"
        flatc "${target_language_option}" -o "../${target_folder}" -I . **/*.fbs
        flatc "${target_language_option}" -o "../${target_folder}" -I . *.fbs
    popd > /dev/null
}

verify_execution_path "build.sbt" "Script must be executed from the project's root."
verify_product_installation "flatc" "Execute \`brew install flatbuffers\` from the terminal."
check_duplicates

TARGET_LANGUAGE=$1
if [[ "${TARGET_LANGUAGE}" == "all" || $# -eq 0 ]]; then
    compile_flatbuffers "java"
    compile_flatbuffers "cpp"
elif [ "${TARGET_LANGUAGE}" == "help" ]; then 
    show_usage
    exit 0
else
    compile_flatbuffers ${TARGET_LANGUAGE}
fi

echo "${GREEN}☑ ${BOLD}Flatbuffers have been buffed, shined, and generated. ${RESET} 🏆"
