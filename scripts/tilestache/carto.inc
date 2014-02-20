<?php
require_once '../db.inc';

$carto = '<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE Map[]>
<Map srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over" maximum-extent="-20037508.34,-20037508.34,20037508.34,20037508.34">

<Parameters>
  <Parameter name="bounds">-180,-85.05112877980659,180,85.05112877980659</Parameter>
  <Parameter name="center">0,0,2</Parameter>
  <Parameter name="format">png8</Parameter>
  <Parameter name="minzoom">11</Parameter>
  <Parameter name="maxzoom">13</Parameter>
  <Parameter name="scale">1</Parameter>
  <Parameter name="metatile">15</Parameter>
  <Parameter name="id"><![CDATA[lapulse2]]></Parameter>
  <Parameter name="_updated">1392879298000</Parameter>
  <Parameter name="name"><![CDATA[lapulse2]]></Parameter>
  <Parameter name="tilejson"><![CDATA[2.0.0]]></Parameter>
  <Parameter name="scheme"><![CDATA[xyz]]></Parameter>
</Parameters>


<Style name="tilestache_png" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1)</Filter>
    <MarkersSymbolizer width="8" opacity="0" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1)</Filter>
    <MarkersSymbolizer width="5" opacity="0" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 1)</Filter>
    <MarkersSymbolizer width="3" opacity="0" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 1)</Filter>
    <MarkersSymbolizer opacity="0" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 5) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5)</Filter>
    <MarkersSymbolizer width="8" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5)</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 5)</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 5)</Filter>
    <MarkersSymbolizer opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 10) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10)</Filter>
    <MarkersSymbolizer width="8" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10)</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 10)</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 10)</Filter>
    <MarkersSymbolizer opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 30) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30)</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30)</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 30)</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 30)</Filter>
    <MarkersSymbolizer opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.25" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.25" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.25" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.25" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.25" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.25" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.25" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 50) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.25" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50)</Filter>
    <MarkersSymbolizer width="8" opacity="0.25" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50)</Filter>
    <MarkersSymbolizer width="5" opacity="0.25" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 50)</Filter>
    <MarkersSymbolizer width="3" opacity="0.25" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 50)</Filter>
    <MarkersSymbolizer opacity="0.25" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 60) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60)</Filter>
    <MarkersSymbolizer width="8" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60)</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 60)</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 60)</Filter>
    <MarkersSymbolizer opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.35" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.35" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.35" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.35" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.35" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.35" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.35" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 70) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.35" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70)</Filter>
    <MarkersSymbolizer width="8" opacity="0.35" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70)</Filter>
    <MarkersSymbolizer width="5" opacity="0.35" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 70)</Filter>
    <MarkersSymbolizer width="3" opacity="0.35" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 70)</Filter>
    <MarkersSymbolizer opacity="0.35" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 80) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80)</Filter>
    <MarkersSymbolizer width="8" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80)</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 80)</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 80)</Filter>
    <MarkersSymbolizer opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.45" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.45" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.45" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.45" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.45" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.45" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.45" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 100) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.45" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100)</Filter>
    <MarkersSymbolizer width="8" opacity="0.45" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100)</Filter>
    <MarkersSymbolizer width="5" opacity="0.45" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 100)</Filter>
    <MarkersSymbolizer width="3" opacity="0.45" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 100)</Filter>
    <MarkersSymbolizer opacity="0.45" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 150) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150)</Filter>
    <MarkersSymbolizer width="8" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150)</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 150)</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 150)</Filter>
    <MarkersSymbolizer opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200)</Filter>
    <MarkersSymbolizer width="8" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200)</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 200)</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 200)</Filter>
    <MarkersSymbolizer opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.65" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.65" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.65" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.65" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" opacity="0.65" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.65" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.65" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &gt;= 200) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.65" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200)</Filter>
    <MarkersSymbolizer width="8" opacity="0.65" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200)</Filter>
    <MarkersSymbolizer width="5" opacity="0.65" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &gt;= 200)</Filter>
    <MarkersSymbolizer width="3" opacity="0.65" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &gt;= 200)</Filter>
    <MarkersSymbolizer opacity="0.65" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="8" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <MarkersSymbolizer width="8" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <MarkersSymbolizer width="5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <MarkersSymbolizer width="3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MarkersSymbolizer stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
</Style>
<Layer name="tilestache_png"
  srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over">
    <StyleName>tilestache_png</StyleName>
    <Datasource>
       <Parameter name="type"><![CDATA[postgis]]></Parameter>
       <Parameter name="table"><![CDATA[tilestache_png]]></Parameter>
       <Parameter name="key_field"><![CDATA[]]></Parameter>
       <Parameter name="geometry_field"><![CDATA[__geometry__]]></Parameter>
       <Parameter name="extent_cache"><![CDATA[auto]]></Parameter>
       <Parameter name="extent"><![CDATA[-13232162.5428934,3970484.53627365,-13079157.9825049,4073851.68882425]]></Parameter>
       <Parameter name="host"><![CDATA['.$dbhost.']]></Parameter>
       <Parameter name="port"><![CDATA[5432]]></Parameter>
       <Parameter name="dbname"><![CDATA['.$dbname.']]></Parameter>
       <Parameter name="user"><![CDATA['.$dbuser.']]></Parameter>
       <Parameter name="password"><![CDATA['.$dbpass.']]></Parameter>
       <Parameter name="id"><![CDATA[lapulse]]></Parameter>
       <Parameter name="project"><![CDATA[lapulse2]]></Parameter>
       <Parameter name="srs"><![CDATA[+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over]]></Parameter>
    </Datasource>
  </Layer>

</Map>';
?>