/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Img
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__Img (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* key, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, float scale, bool sliced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Img
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__Img (UnityEngine_Transform_o* parent,
   System_String_o* name, System_String_o* key, UnityEngine_Vector2_o size, UnityEngine_Vector2_o
   pos, float scale, bool sliced, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UiKit__Img_228203c
                 (float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = param_3;
  fVar11 = param_4;
  if ((bRam0000000004f9c17c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c17c = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_8,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  fVar1 = _UNK_00e1fea0;
  fVar8 = param_1 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  fVar10 = param_2 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (fVar8 * fVar8 + fVar10 * fVar10 < _UNK_00e1fea0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0238213c to 02482143 has its CatchHandler @ 02382254 */
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 02382160 to 02482163 has its CatchHandler @ 02382248 */
                    /* try { // try from 02382164 to 02482173 has its CatchHandler @ 02382250 */
      param_1 = 100.0;
      param_2 = 100.0;
    }
    else {
      if (lVar3 == 0) goto LAB_02382310;
      UnityEngine_Sprite__get_rect_434ee28(lVar3,0);
      param_1 = fVar9 * param_5;
      param_2 = fVar11 * param_5;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02382184 to 02482187 has its CatchHandler @ 0238223c */
                    /* try { // try from 02382188 to 0248218f has its CatchHandler @ 0238224c */
  lVar5 = Dino_BusSand_App_UI_UiKit__Node_22818c4(param_1,param_6,param_7,0,0);
                    /* try { // try from 023821a8 to 024821b7 has its CatchHandler @ 02382244 */
                    /* try { // try from 023821c0 to 024821cf has its CatchHandler @ 02382240 */
  if (((lVar5 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar5 != 0))
     && (plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar5,*(undefined8 *)PTR_DAT_04cacf98), plVar6 != (long *)0x0))
  {
                    /* try { // try from 023821d0 to 0248226f has its CatchHandler @ 02382008 */
    UnityEngine_UI_Image__set_sprite_44a7258(plVar6,lVar3,0);
    (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
    if ((param_9 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) goto LAB_02382310;
        fVar9 = (float)UnityEngine_Sprite__get_border_434ef00(lVar3,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382184 with catch @ 0238223c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023821c0 with catch @ 02382240
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023821a8 with catch @ 02382244
                        */
        if (cRam0000000004f9bba3 == '\0') {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382160 with catch @ 02382248
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382188 with catch @ 0238224c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382164 with catch @ 02382250
                        */
          FUN_02132f7c(PTR_DAT_04cb0780);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0238213c with catch @ 02382254
                        */
          cRam0000000004f9bba3 = '\x01';
        }
        pfVar7 = *(float **)(*(long *)PTR_DAT_04cb0780 + 0xb8);
                    /* try { // try from 02382270 to 02482273 has its CatchHandler @ 0238228c */
                    /* try { // try from 02382274 to 0248228f has its CatchHandler @ 02382008 */
                    /* catch() { ... } // from try @ 02382270 with catch @ 0238228c */
                    /* try { // try from 02382290 to 02482297 has its CatchHandler @ 023822a0 */
                    /* try { // try from 02382298 to 024822a3 has its CatchHandler @ 02382008 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02382290 with catch @ 023822a0
                        */
                    /* try { // try from 023822a4 to 02482bff has its CatchHandler @ 023822a4
                       catch() { ... } // from try @ 023822a4 with catch @ 023822a4
                       catch() { ... } // from try @ 02382c54 with catch @ 023822a4
                       catch() { ... } // from try @ 02382db8 with catch @ 023822a4
                       catch() { ... } // from try @ 02382ef0 with catch @ 023822a4
                       catch() { ... } // from try @ 02382f28 with catch @ 023822a4
                       catch() { ... } // from try @ 02382f5c with catch @ 023822a4
                       catch() { ... } // from try @ 02382f80 with catch @ 023822a4
                       catch() { ... } // from try @ 02382fa4 with catch @ 023822a4 */
        if (fVar1 <= (param_4 - pfVar7[3]) * (param_4 - pfVar7[3]) +
                     (param_3 - pfVar7[2]) * (param_3 - pfVar7[2]) +
                     (fVar9 - *pfVar7) * (fVar9 - *pfVar7) +
                     (param_2 - pfVar7[1]) * (param_2 - pfVar7[1])) {
          UnityEngine_UI_Image__set_type_44afa58(plVar6,1,0);
          fVar9 = _UNK_00e2043c;
          if (_UNK_00e2043c <= param_5) {
            fVar9 = param_5;
          }
          UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_44b0364(1.0 / fVar9,plVar6,0);
          return plVar6;
        }
      }
    }
    UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar6,1,0);
    return plVar6;
  }
LAB_02382310:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

