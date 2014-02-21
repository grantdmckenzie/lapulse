<?php
require_once '../db.inc';

$carto='<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE Map[]>
<Map srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over" maximum-extent="-20037508.34,-20037508.34,20037508.34,20037508.34">

<Parameters>
  <Parameter name="bounds">-180,-85.0511,180,85.0511</Parameter>
  <Parameter name="center">-118.125,32.8882,10</Parameter>
  <Parameter name="format">png8</Parameter>
  <Parameter name="minzoom">10</Parameter>
  <Parameter name="maxzoom">10</Parameter>
  <Parameter name="scale">1</Parameter>
  <Parameter name="metatile">4</Parameter>
  <Parameter name="id"><![CDATA[test]]></Parameter>
  <Parameter name="_updated">1392861071000</Parameter>
  <Parameter name="tilejson"><![CDATA[2.0.0]]></Parameter>
  <Parameter name="scheme"><![CDATA[xyz]]></Parameter>
</Parameters>


<Style name="tilestache" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.03" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer opacity="0.03" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.04" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer opacity="0.04" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.05" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer opacity="0.05" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.07" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer opacity="0.07" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.1" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer opacity="0.1" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.13" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer opacity="0.13" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.15" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer opacity="0.15" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.17" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer opacity="0.17" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.2" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer opacity="0.2" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.24" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer opacity="0.24" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.27" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer opacity="0.27" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.3" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer opacity="0.3" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.33" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer opacity="0.33" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.37" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer opacity="0.37" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.4" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer opacity="0.4" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.44" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer opacity="0.44" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.47" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer opacity="0.47" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.5" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer opacity="0.5" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.54" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer opacity="0.54" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.57" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer opacity="0.57" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.6" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer opacity="0.6" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.64" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer opacity="0.64" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.67" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer opacity="0.67" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.7" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer opacity="0.7" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.74" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer opacity="0.74" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.77" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer opacity="0.77" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer width="0.5" opacity="0.8" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer opacity="0.8" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <MarkersSymbolizer width="0.5" fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MarkersSymbolizer fill="#ffffff" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
</Style>
<Layer name="tilestache"
  srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over">
    <StyleName>tilestache</StyleName>
    <Datasource>
       <Parameter name="type"><![CDATA[postgis]]></Parameter>
       <Parameter name="table"><![CDATA[tilestache]]></Parameter>
       <Parameter name="key_field"><![CDATA[]]></Parameter>
       <Parameter name="geometry_field"><![CDATA[__geometry__]]></Parameter>
       <Parameter name="extent_cache"><![CDATA[auto]]></Parameter>
       <Parameter name="extent"><![CDATA[-13232162.5428934,3970484.53627365,-13079157.9825049,4073851.68882425]]></Parameter>
       <Parameter name="host"><![CDATA['.$dbhost.']]></Parameter>
       <Parameter name="port"><![CDATA[5432]]></Parameter>
       <Parameter name="dbname"><![CDATA['.$dbname.']]></Parameter>
       <Parameter name="user"><![CDATA['.$dbuser.']]></Parameter>
       <Parameter name="password"><![CDATA['.$dbpass.']]></Parameter>
    </Datasource>
  </Layer>

</Map>';
?>