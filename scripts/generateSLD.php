<?php

  error_reporting(E_ALL);
  ini_set('display_errors', 1);
  // 0.25834635998214
  
  $colors = ['#e41a1c','#377eb8','#000000','#984ea3','#ff7f00','#ffff33','#a65628','#f781bf','#999999','#4daf4a'];
 
  
  $last = '</se:FeatureTypeStyle>
    </UserStyle>
  </NamedLayer>
</StyledLayerDescriptor>';
 
  require_once('db.inc');
  
  for($i=1;$i<25;$i++) {
      $query = "select level0, name from categories_full where level1=''";
      $result = pg_query($query) or die();
      $cnt = 0;
      while($row = pg_fetch_object($result)) {
	$name = "la_".substr(strtolower($row->name), 0, 4);
	  $first = '<?xml version="1.0" encoding="UTF-8"?>
<StyledLayerDescriptor xmlns="http://www.opengis.net/sld" xmlns:ogc="http://www.opengis.net/ogc" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" version="1.1.0" xmlns:xlink="http://www.w3.org/1999/xlink" xsi:schemaLocation="http://www.opengis.net/sld http://schemas.opengis.net/sld/1.1.0/StyledLayerDescriptor.xsd" xmlns:se="http://www.opengis.net/se">
  <NamedLayer>
    <se:Name>'.$name.'_'.$i.'</se:Name>
    <UserStyle>
      <se:Name>'.$name.'_'.$i.'</se:Name>
      <se:FeatureTypeStyle>';
	generateSLD($row->level0, $name, $cnt, $i);
	$cnt++;
	// break;
      }
      pg_free_result($result);
  }
  function generateSLD($cat, $name, $cnt, $hour) {
      global $first, $last, $colors;
      $g = 0.01291731799;
      $opacity = 0.04;
      $sld = $first;
      $i=0;
      while($i<20) {
	$op = $opacity * ($i+0.5);
	$sld .= '<se:Rule>
          <ogc:Filter>
            <ogc:And>
              <ogc:PropertyIsGreaterThan>
                <ogc:PropertyName>s1</ogc:PropertyName>
                <ogc:Literal>'.$g*$i.'</ogc:Literal>
              </ogc:PropertyIsGreaterThan>
              <ogc:PropertyIsLessThanOrEqualTo>
                <ogc:PropertyName>s'.$hour.'</ogc:PropertyName>
                <ogc:Literal>'.$g*($i+1).'</ogc:Literal>
              </ogc:PropertyIsLessThanOrEqualTo>
            </ogc:And>
          </ogc:Filter>
          <se:MinScaleDenominator>500000</se:MinScaleDenominator>
          <se:MaxScaleDenominator>1500000</se:MaxScaleDenominator>
          <se:PointSymbolizer>
            <se:Graphic>
              <se:Mark>
                <se:WellKnownName>circle</se:WellKnownName>
                <se:Fill>
                  <se:SvgParameter name="fill">'.$colors[$cnt].'</se:SvgParameter>
                  <se:SvgParameter name="fill-opacity">'.$op.'</se:SvgParameter>
                </se:Fill>
                <se:Stroke>
                  <se:SvgParameter name="stroke">#000000</se:SvgParameter>
                  <se:SvgParameter name="stroke-opacity">0.00</se:SvgParameter>
                </se:Stroke>
              </se:Mark>
              <se:Size>2</se:Size>
            </se:Graphic>
          </se:PointSymbolizer>
        </se:Rule>
        <se:Rule>
          <ogc:Filter>
            <ogc:And>
              <ogc:PropertyIsGreaterThan>
                <ogc:PropertyName>s'.$hour.'</ogc:PropertyName>
                <ogc:Literal>'.$g*$i.'</ogc:Literal>
              </ogc:PropertyIsGreaterThan>
              <ogc:PropertyIsLessThanOrEqualTo>
                <ogc:PropertyName>s1</ogc:PropertyName>
                <ogc:Literal>'.$g*($i+1).'</ogc:Literal>
              </ogc:PropertyIsLessThanOrEqualTo>
            </ogc:And>
          </ogc:Filter>
          <se:MinScaleDenominator>200000</se:MinScaleDenominator>
          <se:MaxScaleDenominator>500000</se:MaxScaleDenominator>
          <se:PointSymbolizer>
            <se:Graphic>
              <se:Mark>
                <se:WellKnownName>circle</se:WellKnownName>
                <se:Fill>
                  <se:SvgParameter name="fill">'.$colors[$cnt].'</se:SvgParameter>
                  <se:SvgParameter name="fill-opacity">'.$op.'</se:SvgParameter>
                </se:Fill>
                <se:Stroke>
                  <se:SvgParameter name="stroke">#000000</se:SvgParameter>
                  <se:SvgParameter name="stroke-opacity">0.00</se:SvgParameter>
                </se:Stroke>
              </se:Mark>
              <se:Size>5</se:Size>
            </se:Graphic>
          </se:PointSymbolizer>
        </se:Rule>';
	$i++;
      }
      $sld .= $last;
      
      $file = fopen("slds/".$name."_".$hour.".sld","w");
      fwrite($file, $sld);
      fclose($file);
  }
  
  

  
  
?>