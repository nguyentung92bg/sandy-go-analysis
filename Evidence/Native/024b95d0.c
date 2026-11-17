/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$BodyColor
UnityEngine_Color_o Dino_BusSand_View_MaterialLibrary__BodyColor (uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$BodyColor
   UnityEngine_Color_o Dino_BusSand_View_MaterialLibrary__BodyColor (uint8_t color, const
   MethodInfo* method); */

float Dino_BusSand_View_MaterialLibrary__BodyColor_23b95d0(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9c991 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c991 = 1;
  }
  puVar2 = PTR_DAT_04cb6dd0;
  uVar1 = param_1 & 0xff;
  if (uVar1 != 0) {
    lVar4 = *(long *)PTR_DAT_04cb6dd0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar5 == 0) {
LAB_024b96ec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)uVar1 <= *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_024b96ec;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      bVar3 = Dino_BusSand_Core_LevelData__ParseHex_2410b28
                        (*(undefined8 *)(lVar5 + (ulong)(uVar1 - 1) * 8 + 0x20),0);
      goto LAB_024b96a8;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar3 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_1,0);
LAB_024b96a8:
  return (float)bVar3 / 255.0;
}

