/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MirrorSprite
void Dino_BusSand_App_UI_UiKit__MirrorSprite (UnityEngine_RectTransform_o* mirror, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MirrorSprite
   void Dino_BusSand_App_UI_UiKit__MirrorSprite (UnityEngine_RectTransform_o* mirror,
   System_String_o* key, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__MirrorSprite_228b484(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c17e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c17e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_2,0);
    if ((param_1 == 0) ||
       (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_1,1,*(undefined8 *)PTR_DAT_04cabf68), lVar5 == 0)) {
LAB_0238b5c4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar8 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar8 == 0) ||
           (lVar6 = UnityEngine_Component__get_transform_43bcd18(lVar8,0), lVar6 == 0))
        goto LAB_0238b5c4;
        uVar7 = UnityEngine_Transform__get_parent_43d0d70(lVar6,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,param_1,0);
        if ((uVar3 & 1) != 0) {
          UnityEngine_UI_Image__set_sprite_44a7258(lVar8,uVar4,0);
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  return;
}

