/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$ShadeSprite
UnityEngine_Sprite_o* Dino_BusSand_App_UI_KitTopBar__ShadeSprite (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$ShadeSprite
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_KitTopBar__ShadeSprite (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitTopBar__ShadeSprite_22857a8(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  puVar3 = PTR_DAT_04caf420;
  if ((bRam0000000004f9c159 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb4ee8);
    bRam0000000004f9c159 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_023859ac:
    return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
  UnityEngine_Texture2D___ctor_439e07c(lVar4,1,0x40,4,0,0);
  puVar2 = PTR_DAT_04cb4ee8;
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar4,*(undefined8 *)PTR_DAT_04cb4ee8,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar4,1,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar4,1,0);
    uVar1 = _UNK_00e20178;
    iVar8 = 0;
    do {
      uVar9 = func_0x049b5300((float)iVar8 / 63.0,uVar1);
      UnityEngine_Texture2D__SetPixel_439e36c
                (0x3f800000,0x3f800000,0x3f800000,uVar9,lVar4,0,iVar8,0);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x40);
    UnityEngine_Texture2D__Apply_439ea14(lVar4,0,1,0);
    uVar7 = UnityEngine_Sprite__Create_435118c
                      (0,0,0x3f800000,0x42800000,0x3f000000,0x3f000000,0x42c80000,lVar4,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar3;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
    *puVar6 = uVar7;
    thunk_FUN_02134474(puVar6,uVar7);
    lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar4,*(undefined8 *)puVar2,0);
      goto LAB_023859ac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

