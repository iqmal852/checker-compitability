<?php

namespace Rector\CodingStyle\Tests\Rector\String_\ManualJsonStringToJsonEncodeArrayRector\Fixture;

final class TripleLineMultilineConcatJson
{
    public function run()
    {
        $someJsonAsString = '{"role_name":"admin","numberz":{"id":"';
        $someJsonAsString .= 5;
        $someJsonAsString .= '"}}';
    }
}

?>
-----
<?php

namespace Rector\CodingStyle\Tests\Rector\String_\ManualJsonStringToJsonEncodeArrayRector\Fixture;

final class TripleLineMultilineConcatJson
{
    public function run()
    {
        $jsonData = ['role_name' => 'admin', 'numberz' => ['id' => 5]];
        $someJsonAsString = \Nette\Utils\Json::encode($jsonData);
    }
}

?>
