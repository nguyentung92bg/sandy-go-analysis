/* IL2CPP: Dino.BusSand.View.PicturePaper$$set_Sketch
void Dino_BusSand_View_PicturePaper__set_Sketch (Dino_BusSand_View_PicturePaper_o* __this, UnityEngine_Texture2D_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$set_Sketch
   void Dino_BusSand_View_PicturePaper__set_Sketch (Dino_BusSand_View_PicturePaper_o* __this,
   UnityEngine_Texture2D_o* value, const MethodInfo* method); */

void Dino_BusSand_View_PicturePaper__set_Sketch_23daefc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dae78 with catch @ 024daefc
                        */
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *puVar1 = param_2;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dae40 with catch @ 024daf00
                        */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

