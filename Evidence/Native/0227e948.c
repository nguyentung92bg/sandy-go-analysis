/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Plate
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_ArtPopup__Plate (Dino_BusSand_App_UI_ArtPopup_Parts_o* p, System_String_o* name, System_String_o* key, UnityEngine_Vector2_o size, float x, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Plate
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_ArtPopup__Plate
   (Dino_BusSand_App_UI_ArtPopup_Parts_o* p, System_String_o* name, System_String_o* key,
   UnityEngine_Vector2_o size, float x, float y, const MethodInfo* method); */

long Dino_BusSand_App_UI_ArtPopup__Plate_217e948
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
                    /* try { // try from 0227e980 to 0237e987 has its CatchHandler @ 0227e9c8 */
                    /* try { // try from 0227e988 to 0237e98f has its CatchHandler @ 0227e9a4 */
  if ((bRam0000000004f9b916 & 1) == 0) {
                    /* catch() { ... } // from try @ 0227e8f4 with catch @ 0227e990
                       try { // try from 0227e990 to 0237e9f3 has its CatchHandler @ 0227e838 */
    FUN_02132f7c(PTR_DAT_04cad428);
                    /* catch() { ... } // from try @ 0227e888 with catch @ 0227e998 */
                    /* catch() { ... } // from try @ 0227e8b4 with catch @ 0227e99c */
    FUN_02132f7c(PTR_DAT_04cad330);
                    /* catch() { ... } // from try @ 0227e904 with catch @ 0227e9a4
                       catch() { ... } // from try @ 0227e988 with catch @ 0227e9a4 */
    bRam0000000004f9b916 = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if ((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* catch() { ... } // from try @ 0227e898 with catch @ 0227e9c8
                       catch() { ... } // from try @ 0227e980 with catch @ 0227e9c8 */
  uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x10);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar2 = PTR_DAT_04cad428;
  uVar6 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar7 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (param_1,param_2,uVar6,uVar7,0x3f800000,uVar5,param_6,param_7,1,0);
  if ((bRam0000000004f9d84c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0,lVar3,*(undefined8 *)puVar2);
    bRam0000000004f9d84c = 1;
  }
  if ((lVar3 != 0) &&
     (plVar4 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar3,0), plVar4 != (long *)0x0)
     ) {
    if (*plVar4 == *(long *)PTR_DAT_04cabdb0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar4,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar4,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (param_3 - *(float *)(param_5 + 0x30) * 0.5,-param_4,plVar4,0);
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

