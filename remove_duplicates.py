from clang.cindex import Config, Index, Cursor
Config.set_library_file("/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/libclang.dylib")

filepath = "./mach_loader.c"

index = Index.create()
tu = index.parse(filepath)

cache = {} 
dupe_cache = {} 

crop = ""

for c in tu.cursor.get_children():
    usr = c.get_usr()
    start = c.extent.start.line
    end = c.extent.end.line
    spelling = c.spelling
    if (usr in cache) and (cache[usr][1] == c.kind):
        print(f"[dupe @ {start}-{end}]",usr)
        dupe_cache[usr] = (c.spelling,c.kind,(start,end))
        if spelling != cache[usr][0]:
            print("\tConflicting definitions!")
    else:
        cache[usr] = (c.spelling,c.kind,(start,end))


print("Cropping...")
with open(filepath, "r") as f:
    lines = f.readlines()
    for i in range(0,len(lines)):
        include_line = True
        for usr in dupe_cache.keys():
            start = dupe_cache[usr][2][0]
            end = dupe_cache[usr][2][1]
            if i+1 >= start and i+1 <= end:
                include_line = False
        if include_line:
            crop += lines[i] 

print("Writing to file...")
with open(filepath, "w") as f:
    f.write(crop)
        
