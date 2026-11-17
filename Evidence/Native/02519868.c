/* IL2CPP: Dino.BusSand.Core.SandPalette$$Override
void Dino_BusSand_Core_SandPalette__Override (uint8_t id, UnityEngine_Color32_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$Override
   void Dino_BusSand_Core_SandPalette__Override (uint8_t id, UnityEngine_Color32_o c, const
   MethodInfo* method); */

void Dino_BusSand_Core_SandPalette__Override_2419868(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9cb84 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_SandPalette__Color_24196fc(param_1);
  if (0xbf < (param_1 - 0x41 & 0xff)) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar2 + 0x18) <= (param_1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar2 + (ulong)(byte)param_1 * 4 + 0x20) = param_2;
  }
  return;
}

