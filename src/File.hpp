#pragma once
#include <iostream>
class File {
public:
    std::string basefile = R"(
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8"/>
<style>
</style>
</head>
<body>
<header>
</header>
<main>
</main>
<footer>
</footer>
</body>
</html>)";
	void createFile();
};

