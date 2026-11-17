/* IL2CPP: Dino.BusSand.GameAssets$$get_font
TMPro_TMP_FontAsset_o* Dino_BusSand_GameAssets__get_font (Dino_BusSand_GameAssets_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$get_font
   TMPro_TMP_FontAsset_o* Dino_BusSand_GameAssets__get_font (Dino_BusSand_GameAssets_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_GameAssets__get_font_237c424(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c80e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab808);
    FUN_02132f7c(PTR_DAT_04cab570);
    FUN_02132f7c(PTR_DAT_04cbb788);
    bRam0000000004f9c80e = 1;
  }
  plVar6 = (long *)(param_1 + 0x40);
  lVar8 = *plVar6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar3 & 1) == 0) {
    plVar6 = (long *)(param_1 + 0x48);
    lVar8 = *plVar6;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    puVar2 = PTR_DAT_04cab208;
    if ((uVar3 & 1) != 0) {
      lVar8 = *(long *)PTR_DAT_04cab208;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      lVar9 = **(long **)(lVar8 + 0xb8);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *(undefined8 *)PTR_DAT_04cab808;
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        plVar4 = (long *)(**(code **)(lVar9 + 0x18))
                                   (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)PTR_DAT_04cbb788,
                                    uVar7,*(undefined8 *)(lVar9 + 0x28));
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          *plVar6 = 0;
        }
        else {
          lVar8 = *(long *)PTR_DAT_04cab570;
          bVar1 = *(byte *)(lVar8 + 0x130);
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = plVar4;
            if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
              plVar5 = (long *)0x0;
            }
          }
          *plVar6 = (long)plVar5;
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar4 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
            plVar4 = (long *)0x0;
          }
        }
        thunk_FUN_02134474(plVar6,plVar4);
      }
    }
  }
  return *plVar6;
}

