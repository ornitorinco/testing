

(<ImportFPropertyDefinition NameId=\"Description\" [^>]* NameMLT="[^>"]*")
<ImportFPropertyDefinition NameId=\"Description\" [^>]* NameMLT=(?!"\Q{en:Description}{de:Beschreibung}{fr:Description}\E")

Finds all that have exactly that NameMLT
<ImportFPropertyDefinition NameId=\"Description\" [^>]* (NameMLT=(?<!"\Q{en:Description}{de:Beschreibung}{fr:Description}\E"))