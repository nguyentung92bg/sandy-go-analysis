/* IL2CPP: Dino.BusSand.Core.SandPalette$$Color
UnityEngine_Color32_o Dino_BusSand_Core_SandPalette__Color (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$Color
   UnityEngine_Color32_o Dino_BusSand_Core_SandPalette__Color (uint8_t id, const MethodInfo*
   method); */

undefined4 Dino_BusSand_Core_SandPalette__Color_24196fc(byte param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9cb83 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x30) == '\0') {
    uVar5 = 0;
    lVar6 = 0x100000000;
    while( true ) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar3 + 0xb8);
      if (*(long *)(lVar4 + 8) == 0) goto LAB_02519860;
      if ((long)*(int *)(*(long *)(lVar4 + 8) + 0x18) <= (long)uVar5) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
          lVar4 = *(long *)(lVar3 + 0xb8);
        }
        *(undefined1 *)(lVar4 + 0x30) = 1;
        goto LAB_02519808;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      lVar3 = *(long *)(lVar4 + 0x18);
      if (lVar3 == 0) goto LAB_02519860;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) break;
      lVar4 = *(long *)(lVar4 + 0x28);
      uVar2 = Dino_BusSand_Core_LevelData__ParseHex_2410b28
                        (*(undefined8 *)(lVar3 + uVar5 * 8 + 0x20),0);
      if (lVar4 == 0) goto LAB_02519860;
      uVar5 = uVar5 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) break;
      lVar3 = lVar6 >> 0x1e;
      lVar6 = lVar6 + 0x100000000;
      *(undefined4 *)(lVar4 + lVar3 + 0x20) = uVar2;
      lVar3 = *(long *)puVar1;
    }
LAB_02519864:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02519808:
  if (param_1 < 0x41) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 == 0) {
LAB_02519860:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar3 + 0x18) <= (uint)param_1) goto LAB_02519864;
    uVar2 = *(undefined4 *)(lVar3 + (ulong)param_1 * 4 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

