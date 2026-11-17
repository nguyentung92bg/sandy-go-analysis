/* IL2CPP: Dino.BusSand.Core.SandColors$$Fallback
UnityEngine_Color32_o Dino_BusSand_Core_SandColors__Fallback (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandColors$$Fallback
   UnityEngine_Color32_o Dino_BusSand_Core_SandColors__Fallback (System_String_o* name, const
   MethodInfo* method); */

undefined4 Dino_BusSand_Core_SandColors__Fallback_2410b8c(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9cb48 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar2 = Dino_BusSand_Core_SandPalette__Id_2419278(param_1,0);
  if (bVar2 == 0) {
    return 0xffff00ff;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8,0);
    bRam0000000004f9cb83 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x30) == '\0') {
    uVar6 = 0;
    lVar7 = 0x100000000;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      if (*(long *)(lVar5 + 8) == 0) goto LAB_02519860;
      if ((long)*(int *)(*(long *)(lVar5 + 8) + 0x18) <= (long)uVar6) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar1;
          lVar5 = *(long *)(lVar4 + 0xb8);
        }
        *(undefined1 *)(lVar5 + 0x30) = 1;
        goto LAB_02519808;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      lVar4 = *(long *)(lVar5 + 0x18);
      if (lVar4 == 0) goto LAB_02519860;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) break;
      lVar5 = *(long *)(lVar5 + 0x28);
      uVar3 = Dino_BusSand_Core_LevelData__ParseHex_2410b28
                        (*(undefined8 *)(lVar4 + uVar6 * 8 + 0x20),0);
      if (lVar5 == 0) goto LAB_02519860;
      uVar6 = uVar6 + 1;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
      lVar4 = lVar7 >> 0x1e;
      lVar7 = lVar7 + 0x100000000;
      *(undefined4 *)(lVar5 + lVar4 + 0x20) = uVar3;
      lVar4 = *(long *)puVar1;
    }
LAB_02519864:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02519808:
  if (bVar2 < 0x41) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar4 == 0) {
LAB_02519860:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)bVar2) goto LAB_02519864;
    uVar3 = *(undefined4 *)(lVar4 + (ulong)bVar2 * 4 + 0x20);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

