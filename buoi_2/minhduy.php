<?php
    $duLieu=[
        "DƯA HẤU","CHUỐI","THƠM"
    ];
 
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
            <table >
                <tr>
                    <th>Tên trái cây</th>
                </tr>
                <?php
                    foreach($duLieu as $key => $val){
                        echo "<tr>" ;

                        echo "<td>".$val ."</td>";

                        echo "</tr>";
                    }
                ?>
            </table>

</body>
</html>