<?php
require_once '../db.inc';

$carto = '<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE Map[]>
<Map srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0.0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs +over" maximum-extent="-20037508.34,-20037508.34,20037508.34,20037508.34">

<Parameters>
  <Parameter name="bounds">-180,-85.05112877980659,180,85.05112877980659</Parameter>
  <Parameter name="center">0,0,2</Parameter>
  <Parameter name="format">png8</Parameter>
  <Parameter name="minzoom">10</Parameter>
  <Parameter name="maxzoom">13</Parameter>
  <Parameter name="scale">1</Parameter>
  <Parameter name="metatile">8</Parameter>
  <Parameter name="id"><![CDATA[lapulse2]]></Parameter>
  <Parameter name="_updated">1392836382000</Parameter>
  <Parameter name="name"><![CDATA[lapulse2]]></Parameter>
  <Parameter name="tilejson"><![CDATA[2.0.0]]></Parameter>
  <Parameter name="scheme"><![CDATA[xyz]]></Parameter>
</Parameters>


<Style name="lapulse" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.03" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.03" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.03" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.03" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.03" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.03" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.03" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.005) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.03" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer width="5" opacity="0.03" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer width="3" opacity="0.03" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer width="1" opacity="0.03" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.005)</Filter>
    <MarkersSymbolizer opacity="0.03" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.04" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.04" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.04" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.04" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.04" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.04" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.04" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.01) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.04" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer width="5" opacity="0.04" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer width="3" opacity="0.04" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer width="1" opacity="0.04" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.01)</Filter>
    <MarkersSymbolizer opacity="0.04" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.05" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.05" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.05" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.05" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.05" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.05" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.05" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.02) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.05" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer width="5" opacity="0.05" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer width="3" opacity="0.05" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer width="1" opacity="0.05" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.02)</Filter>
    <MarkersSymbolizer opacity="0.05" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.07" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.07" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.07" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.07" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.07" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.07" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.07" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.03) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.07" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer width="5" opacity="0.07" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer width="3" opacity="0.07" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer width="1" opacity="0.07" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.03)</Filter>
    <MarkersSymbolizer opacity="0.07" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.04) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer width="5" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer width="3" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer width="1" opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.04)</Filter>
    <MarkersSymbolizer opacity="0.1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.13" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.13" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.13" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.13" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.13" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.13" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.13" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.05) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.13" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer width="5" opacity="0.13" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer width="3" opacity="0.13" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer width="1" opacity="0.13" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.05)</Filter>
    <MarkersSymbolizer opacity="0.13" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.15" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.06) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.15" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer width="5" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer width="3" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer width="1" opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.06)</Filter>
    <MarkersSymbolizer opacity="0.15" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.17" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.17" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.17" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.17" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.17" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.17" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.17" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.07) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.17" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer width="5" opacity="0.17" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer width="3" opacity="0.17" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer width="1" opacity="0.17" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.07)</Filter>
    <MarkersSymbolizer opacity="0.17" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.2" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.2" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.2" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.2" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.2" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.2" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.2" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.08) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.2" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer width="5" opacity="0.2" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer width="3" opacity="0.2" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer width="1" opacity="0.2" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.08)</Filter>
    <MarkersSymbolizer opacity="0.2" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.24" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.24" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.24" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.24" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.24" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.24" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.24" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.09) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.24" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer width="5" opacity="0.24" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer width="3" opacity="0.24" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer width="1" opacity="0.24" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.09)</Filter>
    <MarkersSymbolizer opacity="0.24" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.27" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.27" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.27" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.27" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.27" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.27" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.27" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.1) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.27" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer width="5" opacity="0.27" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer width="3" opacity="0.27" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer width="1" opacity="0.27" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.1)</Filter>
    <MarkersSymbolizer opacity="0.27" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.11) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.3" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer width="5" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer width="3" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer width="1" opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.11)</Filter>
    <MarkersSymbolizer opacity="0.3" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.33" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.33" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.33" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.33" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.33" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.33" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.33" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.12) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.33" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer width="5" opacity="0.33" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer width="3" opacity="0.33" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer width="1" opacity="0.33" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.12)</Filter>
    <MarkersSymbolizer opacity="0.33" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.37" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.37" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.37" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.37" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.37" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.37" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.37" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.13) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.37" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer width="5" opacity="0.37" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer width="3" opacity="0.37" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer width="1" opacity="0.37" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.13)</Filter>
    <MarkersSymbolizer opacity="0.37" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.4" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.14) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.4" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer width="5" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer width="3" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer width="1" opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.14)</Filter>
    <MarkersSymbolizer opacity="0.4" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.44" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.44" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.44" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.44" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.44" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.44" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.44" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.15) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.44" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer width="5" opacity="0.44" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer width="3" opacity="0.44" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer width="1" opacity="0.44" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.15)</Filter>
    <MarkersSymbolizer opacity="0.44" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.47" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.47" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.47" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.47" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.47" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.47" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.47" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.16) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.47" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer width="5" opacity="0.47" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer width="3" opacity="0.47" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer width="1" opacity="0.47" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.16)</Filter>
    <MarkersSymbolizer opacity="0.47" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.5" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.17) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.5" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer width="5" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer width="3" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer width="1" opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.17)</Filter>
    <MarkersSymbolizer opacity="0.5" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.54" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.54" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.54" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.54" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.54" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.54" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.54" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.18) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.54" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer width="5" opacity="0.54" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer width="3" opacity="0.54" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer width="1" opacity="0.54" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.18)</Filter>
    <MarkersSymbolizer opacity="0.54" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.57" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.57" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.57" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.57" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.57" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.57" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.57" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.19) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.57" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer width="5" opacity="0.57" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer width="3" opacity="0.57" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer width="1" opacity="0.57" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.19)</Filter>
    <MarkersSymbolizer opacity="0.57" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.6" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.2) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.6" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer width="5" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer width="3" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer width="1" opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.2)</Filter>
    <MarkersSymbolizer opacity="0.6" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.64" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.64" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.64" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.64" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.64" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.64" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.64" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.21) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.64" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer width="5" opacity="0.64" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer width="3" opacity="0.64" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer width="1" opacity="0.64" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.21)</Filter>
    <MarkersSymbolizer opacity="0.64" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.67" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.67" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.67" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.67" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.67" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.67" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.67" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.22) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.67" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer width="5" opacity="0.67" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer width="3" opacity="0.67" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer width="1" opacity="0.67" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.22)</Filter>
    <MarkersSymbolizer opacity="0.67" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.7" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.7" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.7" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.7" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.7" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.7" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.7" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.23) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.7" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer width="5" opacity="0.7" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer width="3" opacity="0.7" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer width="1" opacity="0.7" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.23)</Filter>
    <MarkersSymbolizer opacity="0.7" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.74" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.74" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.74" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.74" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.74" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.74" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.74" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.24) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.74" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer width="5" opacity="0.74" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer width="3" opacity="0.74" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer width="1" opacity="0.74" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.24)</Filter>
    <MarkersSymbolizer opacity="0.74" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.77" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.77" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.77" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.77" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.77" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.77" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.77" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.25) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.77" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer width="5" opacity="0.77" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer width="3" opacity="0.77" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer width="1" opacity="0.77" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.25)</Filter>
    <MarkersSymbolizer opacity="0.77" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.8" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.8" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.8" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.8" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="5" opacity="0.8" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="3" opacity="0.8" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" opacity="0.8" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.26) and ([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer opacity="0.8" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer width="5" opacity="0.8" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer width="3" opacity="0.8" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer width="1" opacity="0.8" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>(['.$t.'] &lt; 0.26)</Filter>
    <MarkersSymbolizer opacity="0.8" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
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
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>([basecat] != \''.$k.'\')</Filter>
    <MarkersSymbolizer fill="rgba(0, 0, 0, 0)" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
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
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer width="1" fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <Filter>([basecat] = \''.$k.'\')</Filter>
    <MarkersSymbolizer fill="'.$r.'" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
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
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <MarkersSymbolizer width="1" stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
  <Rule>
    <MarkersSymbolizer stroke-width="0" placement="point" allow-overlap="true" comp-op="lighten" />
  </Rule>
</Style>
<Layer name="lapulse"
  srs="+proj=longlat +ellps=WGS84 +datum=WGS84 +no_defs">
    <StyleName>lapulse</StyleName>
    <Datasource>
       <Parameter name="type"><![CDATA[postgis]]></Parameter>
       <Parameter name="table"><![CDATA[lapulse]]></Parameter>
       <Parameter name="key_field"><![CDATA[]]></Parameter>
       <Parameter name="geometry_field"><![CDATA[geom]]></Parameter>
       <Parameter name="extent_cache"><![CDATA[auto]]></Parameter>
       <Parameter name="extent"><![CDATA[-118.86653854235,33.56458,-117.49207519098,34.334837967229]]></Parameter>
       <Parameter name="host"><![CDATA['.$dbhost.']]></Parameter>
       <Parameter name="port"><![CDATA[5432]]></Parameter>
       <Parameter name="dbname"><![CDATA['.$dbname.']]></Parameter>
       <Parameter name="user"><![CDATA['.$dbuser.']]></Parameter>
       <Parameter name="password"><![CDATA['.$dbpass.']]></Parameter>
    </Datasource>
  </Layer>

</Map>
';
?>