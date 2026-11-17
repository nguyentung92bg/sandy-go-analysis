/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$Piece
void Dino_BusSand_App_UI_PlayOnOffer__Piece (UnityEngine_RectTransform_o* box, System_String_o* name, UnityEngine_Sprite_o* sp, float width, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$Piece
   void Dino_BusSand_App_UI_PlayOnOffer__Piece (UnityEngine_RectTransform_o* box, System_String_o*
   name, UnityEngine_Sprite_o* sp, float width, float x, const MethodInfo* method); */

long Dino_BusSand_App_UI_PlayOnOffer__Piece_2331e98
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c625 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c625 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (param_1,_UNK_00e200c4,0,0,0x3f800000,param_3,param_4,0,0,0);
  puVar2 = PTR_DAT_04caf408;
  if (lVar3 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(lVar3,param_5,0);
    UnityEngine_UI_Image__set_type_44afa58(lVar3,1,0);
    UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar3,0,0);
    fVar1 = _UNK_00e20a30;
    if ((bRam0000000004f9d81c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabdb0,*(undefined8 *)puVar2);
      bRam0000000004f9d81c = 1;
    }
    if ((lVar3 != 0) &&
       (plVar4 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar3,0),
       plVar4 != (long *)0x0)) {
      if (*plVar4 == *(long *)PTR_DAT_04cabdb0) {
        UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar4,0);
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar4,0);
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(param_2,-fVar1,plVar4,0);
        return lVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

